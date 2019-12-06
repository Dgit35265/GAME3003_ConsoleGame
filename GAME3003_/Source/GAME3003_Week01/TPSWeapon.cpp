// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSWeapon.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TimerManager.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "GAME3003_Week01.h"
#include "Sound/SoundCue.h"

int32 DebugDrawWeapons = 0;

FAutoConsoleVariableRef CVADrawWeapons = FAutoConsoleVariableRef(
	TEXT("TPS.DebugDrawWeapons"), 
	DebugDrawWeapons, 
	TEXT("Draw Debuge Weapon Line Trace"), 
	ECVF_Cheat);

// Sets default values
ATPSWeapon::ATPSWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = (USceneComponent*)MeshComp;
	TrailEffectParam = "BeamEnd";
}

// Called when the game starts or when spawned
void ATPSWeapon::BeginPlay()
{
	Super::BeginPlay();

	WeaponMode = SingleFire; // Initialize the weapon mode
}

// Called every frame
void ATPSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Set Up Timer
void ATPSWeapon::StartFire()
{
	curSpread = baseBulletSpread;
	if (WeaponMode == AutoFire)
		GetWorldTimerManager().SetTimer(BulletTimer, this, &ATPSWeapon::Fire, (1 / rateOfFire), true, 0.0f);
	else
		Fire();
}

void ATPSWeapon::StopFire()
{
	curSpread = baseBulletSpread;
	GetWorldTimerManager().ClearTimer(BulletTimer);
}


void ATPSWeapon::Fire()
{
	APawn* MyOwner = Cast<APawn>(GetOwner());

	if (MyOwner) 
	{
		if (ammo > 0) {
			ammo--; //deplete ammo here
			UE_LOG(LogTemp, Warning, TEXT("Current Ammo Left: %s"), *FString::FromInt(ammo));

			FVector EyeLoc;
			FRotator EyeRot;

			MyOwner->GetActorEyesViewPoint(EyeLoc, EyeRot);

			FVector traceEnd = EyeLoc + (10000 * EyeRot.Vector());

			FVector traceEndLR = FVector::CrossProduct(traceEnd, FVector::UpVector).GetSafeNormal();
			FVector traceEndUD = FVector::CrossProduct(traceEnd, FVector::RightVector).GetSafeNormal();

			float r1 = FMath::FRandRange(-curSpread, curSpread);
			float r2 = FMath::FRandRange(-curSpread, curSpread);
			curSpread *= bulletSpreadAcc;
			if (curSpread > 400.f)
				curSpread = 400.f;
			//UE_LOG(LogTemp, Warning, TEXT("CurrentSpread: %s"), *FString::SanitizeFloat(curSpread));
			/*UE_LOG(LogTemp, Warning, TEXT("TraceEndX: %s"), *FString::SanitizeFloat(traceEnd.X));
			UE_LOG(LogTemp, Warning, TEXT("TraceEndY: %s"), *FString::SanitizeFloat(traceEnd.Y));
			UE_LOG(LogTemp, Warning, TEXT("TraceEndZ: %s"), *FString::SanitizeFloat(traceEnd.Z));*/
			UE_LOG(LogTemp, Warning, TEXT("TraceEndLeftAndRight: %s"), *FString::SanitizeFloat(traceEndLR.Y));
			UE_LOG(LogTemp, Warning, TEXT("TraceEndUpAndDown: %s"), *FString::SanitizeFloat(traceEndUD.Z));

			traceEndLR *= r1;
			traceEndUD *= r2;


			
			//traceEnd += (traceEndLR + traceEndUD);

			FVector trailEnd = traceEnd;

			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(MyOwner);
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = false;
			QueryParams.bReturnPhysicalMaterial = true;

			FHitResult HitResult;
			if (GetWorld()->LineTraceSingleByChannel(HitResult, EyeLoc, traceEnd, WeaponTraceChannel, QueryParams))
			{
				// Do damage stuff
				AActor* HitActor = HitResult.GetActor();

				EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Cast<UPhysicalMaterial>(HitResult.PhysMaterial));
				UParticleSystem* ImpactEffectToPlay = NULL;


				float DamageToApply = BaseDamege;

				switch (SurfaceType)
				{
				case Flesh_Default:
					ImpactEffectToPlay = ImpactEffectBlood;
					break;
				case Flesh_Vulnerable:
					ImpactEffectToPlay = ImpactEffectBlood;
					DamageToApply *= DamageMultiplier;
					break;
				case Concrete:
					ImpactEffectToPlay = ImpactEffectConcrete;
					break;
				default:
					ImpactEffectToPlay = ImpactEffectBlood;
					break;
				}

				UGameplayStatics::ApplyPointDamage(HitActor, DamageToApply, EyeRot.Vector(), HitResult, MyOwner->GetInstigatorController(), this, damageType);

				trailEnd = HitResult.ImpactPoint;
				if (ImpactEffectToPlay)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffectToPlay, HitResult.ImpactPoint, HitResult.ImpactNormal.Rotation());
				}
			}

			if (MuzzleEffect)
			{
				UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocket);
			}

			FVector MuzzlePosition = MeshComp->GetSocketLocation(MuzzleSocket);

			//spawn gun fire SFX at muzzlePos
			UGameplayStatics::SpawnSoundAtLocation(this, GunFireSound, MuzzlePosition);

			if (TrailEffect)
			{
				UParticleSystemComponent* trailComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TrailEffect, MuzzlePosition);

				if (trailComp)
				{
					trailComp->SetVectorParameter(TrailEffectParam, trailEnd);
				}
			}

			if (DebugDrawWeapons > 0)
			{
				DrawDebugLine(GetWorld(), EyeLoc, traceEnd, FColor::Red, false, 1.0f, 0, 1.0f);
			}

			// Camera Shake
			APlayerController* PlayerController = Cast<APlayerController>(MyOwner->GetController());
			if (PlayerController)
			{
				PlayerController->ClientPlayCameraShake(FireCameraShake);
			}
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("No Ammo!"));
		}
	}	
}

void ATPSWeapon::SwitchMode()
{
	if (WeaponMode == SingleFire)
		WeaponMode = AutoFire;
	else
		WeaponMode = SingleFire;
}
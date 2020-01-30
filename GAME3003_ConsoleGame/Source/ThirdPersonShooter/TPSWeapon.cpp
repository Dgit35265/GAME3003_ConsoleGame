// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSWeapon.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TimerManager.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ThirdPersonShooter.h"
#include "TPSCharacter.h"

int32 DebugDrawWeapons = 0;

FAutoConsoleVariableRef CVARDrawWeapons = FAutoConsoleVariableRef(
	TEXT("TPS.DebugDrawWeapons"),
	DebugDrawWeapons,
	TEXT("Draw debug weapon line trace"),
	ECVF_Cheat);

// Sets default values
ATPSWeapon::ATPSWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	MeshComp->SetupAttachment(RootComponent);
	TrailEffectParam = "BeamEnd";
}

// Called when the game starts or when spawned
void ATPSWeapon::BeginPlay()
{
	Super::BeginPlay();
	ammoCount = magazineSize;
	//MuzzleSocketName = "Muzzle";
}

void ATPSWeapon::Reload()
{
	if (totalNumberOfBullets > magazineSize)
	{
		ammoCount = magazineSize;
		totalNumberOfBullets -= magazineSize;
	}
	else
	{
		ammoCount = totalNumberOfBullets;
		totalNumberOfBullets = 0;
	}
}

// Called every frame
void ATPSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATPSWeapon::StartFire()
{
	if (!firing)
	{
		GetWorldTimerManager().SetTimer(BulletTimer, this, &ATPSWeapon::Fire, 1.0f / fireRate, true, 0.0f);
		firing = true;
	}
}

void ATPSWeapon::EndFire()
{
	GetWorldTimerManager().ClearTimer(BulletTimer);
	firing = false;
}

void ATPSWeapon::Fire()
{
	ATPSCharacter* MyOwner = Cast<ATPSCharacter>(GetOwner());

	if (MyOwner && ammoCount > 0 && MyOwner->GetCurrentWeaponState() == WeaponState::Shooting)
	{
		FVector EyeLoc;
		FRotator EyeRot;
		MyOwner->GetActorEyesViewPoint(EyeLoc, EyeRot);

		FVector LineEnd = EyeLoc + 10000 * EyeRot.Vector();
		FVector TrailEnd = LineEnd;

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = false;
		QueryParams.bReturnPhysicalMaterial = true;

		FHitResult Hit;

		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLoc, LineEnd, WeaponTraceChannel, QueryParams))
		{
			AActor* HitActor = Hit.GetActor();

			EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Cast <UPhysicalMaterial>(Hit.PhysMaterial));

			UParticleSystem* ImpactEffectToPlay = NULL;
			float DamageToApply = BaseDamage;

			switch (SurfaceType)
			{
			case Flash_Default:
				ImpactEffectToPlay = ImpactEffectBlood;
				break;
			case Flash_Vulnerable:
				ImpactEffectToPlay = ImpactEffectBlood;
				DamageToApply *= DamageMultiplier;
				break;
			case Concrete:
				ImpactEffectToPlay = ImpactEffectConcrete;
				break;
			default:
				ImpactEffectToPlay = ImpactEffectConcrete;
				break;
			}

			UGameplayStatics::ApplyPointDamage(HitActor, DamageToApply, EyeRot.Vector(), Hit, MyOwner->GetInstigatorController(), this, DamageType);

			TrailEnd = Hit.ImpactPoint;
			if (ImpactEffectToPlay)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffectToPlay, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
			}
		}

		if (MuzzleEffect)
		{
			UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
		}

		FVector MuzzlePosition = MeshComp->GetSocketLocation(MuzzleSocketName);

		if (TrailEffect)
		{
			UParticleSystemComponent* TrailComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TrailEffect, MuzzlePosition);

			if (TrailComp)
			{
				TrailComp->SetVectorParameter(TrailEffectParam, TrailEnd);
			}
		}

		if (DebugDrawWeapons > 0)
		{
			DrawDebugLine(GetWorld(), EyeLoc, LineEnd, FColor::White, false, 1.0f, 0, 1.0f);
		}

		// Camera shake
		APlayerController* PlayerController = Cast<APlayerController>(MyOwner->GetController());
		if (PlayerController)
		{
			PlayerController->ClientPlayCameraShake(FireCameraShake);
		}

		ammoCount--;
		if (ammoCount == 0 && totalNumberOfBullets > 0)
		{
			MyOwner->PlayReloadAnim();
		}
	}


}


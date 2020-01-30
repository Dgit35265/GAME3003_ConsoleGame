// Fill out your copyright notice in the Description page of Project Settings.


#include "Tracker.h"
#include "Components/StaticMeshComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "TPSCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "HealthComponent.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "Sound/SoundCue.h"

// Sets default values
ATracker::ATracker()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent->Mobility = EComponentMobility::Movable;*/
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = MeshComp;
	MeshComp->SetSimulatePhysics(true);
	//MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCanEverAffectNavigation(false);
	MoveForce = 1000;
	bUseVelocityChange = true;

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ATracker::OnHealthChanged);

	SelfDamageTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("Self Damage Trigger"));
	SelfDamageTrigger->SetSphereRadius(200);
	SelfDamageTrigger->SetupAttachment(RootComponent);
	SelfDamageTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SelfDamageTrigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SelfDamageTrigger->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

// Called when the game starts or when spawned
void ATracker::BeginPlay()
{
	Super::BeginPlay();
	navSystem = UNavigationSystemV1::GetCurrent(this);
	NextPoint = GetNextPoint();
}

// Called every frame
void ATracker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float distanceToTarget = (NextPoint - GetActorLocation()).Size();

	if (distanceToTarget < 100)
	{
		// If I am close enough, calculate new next point
		NextPoint = GetNextPoint();
	}
	else
	{
		// Add force to get to next point
		FVector force = NextPoint - GetActorLocation();
		force.Normalize();
		force *= MoveForce;
		MeshComp->AddForce(force, NAME_None, bUseVelocityChange);
		DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + force, 20, FColor::Blue, false,2 * DeltaTime, 0, 3);
	}
}

// Called to bind functionality to input
void ATracker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector ATracker::GetNextPoint()
{
	ATPSCharacter* player = Cast<ATPSCharacter>(
		UGameplayStatics::GetPlayerCharacter(this, 0));

	if (player)
	{
		UNavigationPath* path = navSystem->FindPathToActorSynchronously(this, GetActorLocation(), player);
		if (path && path->PathPoints.Num() > 1)
		{
			DrawDebugSphere(GetWorld(), path->PathPoints[1], 30, 12, FColor::Yellow, false, 1, 0, 3);
			return path->PathPoints[1];
		}
	}

	return GetActorLocation();
}

void ATracker::SelfDestruct()
{
	if (!bDestroyed)
	{
		bDestroyed = true;
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
		UGameplayStatics::SpawnSoundAtLocation(this, ExplosionSound, GetActorLocation());
		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(this);
		UGameplayStatics::ApplyRadialDamage(this, ExplosionBaseDamage, GetActorLocation(), ExplosionRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);
		DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 24, FColor::Red, false, 5, 0, 2);
		Destroy();
	}
}

void ATracker::OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float DeltaHealth, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Tracker Bot Damaged %f" + FString::SanitizeFloat(Health));
	if (!MatInstance)
	{
		MatInstance = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));
	}
	if (MatInstance)
	{
		MatInstance->SetScalarParameterValue("LastTimeHit", GetWorld()->TimeSeconds);
	}
	if (Health <= 0)
	{
		SelfDestruct();
	}
}

void ATracker::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);
}

void ATracker::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (!bSelfDamageStarted)
	{
		ATPSCharacter* player = Cast<ATPSCharacter>(OtherActor);
		if (player)
		{
			GetWorldTimerManager().SetTimer(SelfDamageTimer, this, &ATracker::DamageSelf, 0.5f, true, 0);
			MoveForce = 0;
			bSelfDamageStarted = true;
		}
	}
}


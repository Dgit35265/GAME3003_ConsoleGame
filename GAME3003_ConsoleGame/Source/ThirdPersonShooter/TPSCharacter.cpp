// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TPSWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HealthComponent.h"
#include "ThirdPersonShooter.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ThirdPersonShooter.h"


// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ATPSCharacter::OnHealthChanged);
}

// Called when the game starts or when spawned
void ATPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	EndZoom();	

	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	for (auto weaponClass : StarterWeaponClasses)
	{
		auto weapon = GetWorld()->SpawnActor<ATPSWeapon>(weaponClass, spawnParams);
		Weapons.Add(weapon);
		weapon->SetOwner(this);
	}

	currentWeaponSlot = 0;
	EquipWeaponAtSlot(currentWeaponSlot);
	RefreshPickupIgnores();
}

// Called every frame
void ATPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	dt = DeltaTime;
	if (bInCover)
	{
		if (bIsAiming)
		{
			GetMesh()->SetRelativeRotation(FRotator(0, -75, 0));
		}
		else
		{
			if (overlappingCoverVolume)
			{
				GetMesh()->SetWorldRotation(overlappingCoverVolume->GetComponentRotation().Add(0, 40, 0));
			}
		}
	}
	else
	{
		GetMesh()->SetRelativeRotation(FRotator(0, -75, 0));
	}

	// IK
	if (CurrentWeapon)
	{
		auto socketTransform = CurrentWeapon->MeshComp->GetSocketTransform("LeftHandSocket",
			ERelativeTransformSpace::RTS_World);
		GetMesh()->TransformToBoneSpace("hand_r",
			socketTransform.GetLocation(),
			socketTransform.GetRotation().Rotator(),
			LeftHandIKLocation,
			LeftHandIKRotation
		);
	}

	// Pickup
	FHitResult hit;
	FVector EyeLoc;
	FRotator EyeRot;
	GetActorEyesViewPoint(EyeLoc, EyeRot);

	if (UKismetSystemLibrary::BoxTraceSingle(this, EyeLoc + pickupBoxHalfSize.X * EyeRot.Vector(),
		EyeLoc + pickupDistance * EyeRot.Vector(), pickupBoxHalfSize, EyeRot,
		PickupTraceQueryChannel, false, actorsToIgnoreForPickup, EDrawDebugTrace::ForOneFrame,
		hit, true))
	{
		if (Cast<ATPSWeapon>(hit.Actor) && hit.Actor->GetOwner() == nullptr)
		{
			auto weapon = Cast<ATPSWeapon>(hit.Actor);
			pickableWeapon = weapon;
		}
		else
		{
			pickableWeapon = nullptr;
		}
	}
	else
	{
		pickableWeapon = nullptr;
	}

}

void ATPSCharacter::MoveForward(float val)
{
	if (!bInCover)
	{
		GetCharacterMovement()->AddInputVector(GetActorForwardVector() * val);
	}
}

void ATPSCharacter::MoveSideways(float val)
{
	if (bInCover)
	{
		FVector targetPos = GetActorLocation() + overlappingCoverVolume->GetRightVector() * val * dt;
		FVector offsetFromCoverCenter = targetPos - overlappingCoverVolume->GetComponentLocation();
		float dot = FVector::DotProduct(offsetFromCoverCenter, overlappingCoverVolume->GetRightVector());
		bool isTargetInRange = abs(dot) < overlappingCoverVolume->GetScaledBoxExtent().Y - 50;
		bool isMovingTowardsCenter = dot * val < 0;
		if (isTargetInRange || isMovingTowardsCenter)
		{
			GetCharacterMovement()->AddInputVector(overlappingCoverVolume->GetRightVector() * val);
		}
	}
	else
	{
		GetCharacterMovement()->AddInputVector(GetActorRightVector() * val);
	}
}

void ATPSCharacter::BeginCrouch()
{
	Crouch();
}

void ATPSCharacter::EndCrouch()
{
	UnCrouch();
}

void ATPSCharacter::EquipWeaponAtCurrentSlot()
{
	bool weaponWasFiring = false;
	if (CurrentWeapon->GetBulletTimer().IsValid())
	{
		EndFire();
		weaponWasFiring = true;
	}
	EquipWeaponAtSlot(currentWeaponSlot);
	if (weaponWasFiring)
	{
		StartFire();
	}
	currentWeaponState = WeaponState::Switching;
}

void ATPSCharacter::EquipWeaponAtSlot(int slot)
{
	if (slot >= Weapons.Num())
	{
		return;
	}

	for (int i = 0; i < Weapons.Num(); i++)
	{
		if (i != slot)
		{
			Weapons[i]->AttachToComponent(Cast<USceneComponent>(GetMesh()),
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				WeaponSlotSocketNames[i]);
		}
	}

	CurrentWeapon = Weapons[slot];
	CurrentWeapon->AttachToComponent(Cast<USceneComponent>(GetMesh()),
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		HandSocketName);
}

void ATPSCharacter::FinishSwitching()
{
	/*if (currentWeaponState == WeaponState::Switching)
	{
		currentWeaponState = CurrentWeapon->GetBulletTimer().IsValid()
			? WeaponState::Shooting : WeaponState::Idle;
	}*/
	currentWeaponState = CurrentWeapon->GetBulletTimer().IsValid()
		? WeaponState::Shooting : WeaponState::Idle;
}

void ATPSCharacter::NextWeapon()
{
	if (currentWeaponState == WeaponState::Idle || 
		currentWeaponState == WeaponState::Shooting)
	{
		currentWeaponSlot++;
		currentWeaponSlot = currentWeaponSlot % Weapons.Num();
		bPlaySwitchAnim = true;
		currentWeaponState = WeaponState::Switching;
	}
}

void ATPSCharacter::PreviousWeapon()
{
	if (currentWeaponState == WeaponState::Idle ||
		currentWeaponState == WeaponState::Shooting)
	{
		currentWeaponSlot--;
		if (currentWeaponSlot < 0)
		{
			currentWeaponSlot += Weapons.Num();
		}
		bPlaySwitchAnim = true;
		currentWeaponState = WeaponState::Switching;
	}
}

void ATPSCharacter::StartZoom()
{
	bIsAiming = true;
}

void ATPSCharacter::EndZoom()
{
	bIsAiming = false;
}

void ATPSCharacter::FireWeapon()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->Fire();
	}
}

void ATPSCharacter::StartFire()
{
	if (CurrentWeapon && currentWeaponState == WeaponState::Idle)
	{
		currentWeaponState = WeaponState::Shooting;
		CurrentWeapon->StartFire();
	}
}

void ATPSCharacter::EndFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->EndFire();
	}
	if (currentWeaponState == WeaponState::Shooting)
	{
		currentWeaponState = WeaponState::Idle;
	}
}

void ATPSCharacter::TakeCover()
{
	if (bInCover)
	{
		bInCover = false;
	}
	else if (overlappingCoverVolume && !bInCover)
	{
		FVector lineTraceStart = GetActorLocation();
		FVector lineTraceEnd = GetActorLocation() + overlappingCoverVolume->GetForwardVector() * 10000;

		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, lineTraceStart, lineTraceEnd, CoverTraceChannel))
		{
			FVector targetLocation = Hit.Location;
			targetLocation -= overlappingCoverVolume->GetForwardVector() * GetCapsuleComponent()->GetScaledCapsuleRadius();
			DrawDebugSphere(GetWorld(), targetLocation, 10, 24, FColor::Yellow, false, 5, 0, 2);
			SetActorLocation(targetLocation);

			bInCover = true;
		}
	}
}

void ATPSCharacter::DetatchWeapon()
{
	CurrentWeapon->MeshComp->SetSimulatePhysics(true);
	CurrentWeapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
}
void ATPSCharacter::RefreshPickupIgnores()
{
	actorsToIgnoreForPickup.Empty();
	for (auto weapon : Weapons)
	{
		actorsToIgnoreForPickup.Add(weapon);
	}
}
void ATPSCharacter::PickUpWeapon()
{
	if (currentWeaponState == WeaponState::Idle && pickableWeapon)
	{
		CurrentWeapon->SetOwner(nullptr);
		CurrentWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		CurrentWeapon->SetActorLocation(pickableWeapon->GetActorLocation());
		CurrentWeapon->SetActorRotation(pickableWeapon->GetActorRotation());
		Weapons[currentWeaponSlot] = pickableWeapon;
		pickableWeapon->SetOwner(this);
		EquipWeaponAtSlot(currentWeaponSlot);
		RefreshPickupIgnores();
	}
}
void ATPSCharacter::PlayReloadAnim()
{
	if (currentWeaponState == WeaponState::Idle ||
		currentWeaponState == WeaponState::Shooting)
	{
		bPlayReloadAnimFlag = true;
		currentWeaponState = WeaponState::Reloading;
	}
}
void ATPSCharacter::ReloadAnimStarted()
{
	bPlayReloadAnimFlag = false;
}

void ATPSCharacter::FinishReload()
{
	if (CurrentWeapon && currentWeaponState == WeaponState::Reloading)
	{
		CurrentWeapon->Reload();
		currentWeaponState = CurrentWeapon->GetBulletTimer().IsValid()
			? WeaponState::Shooting : WeaponState::Idle;
	}
}

void ATPSCharacter::OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float DeltaHealth, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0)
	{
		bDead = true;
		OnDeath.Broadcast(this);
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		if (destroyOnDeath)
		{
			SetLifeSpan(5);
		}
		GetWorldTimerManager().SetTimer(WeaponDetachTimer, this, &ATPSCharacter::DetatchWeapon, 3, false, 0.2f);
		GetMesh()->CreateAndSetMaterialInstanceDynamicFromMaterial(0, deathMaterial);
		GetMesh()->SetScalarParameterValueOnMaterials("StartTime", UGameplayStatics::GetRealTimeSeconds(this));
	}
}


// Called to bind functionality to input
void ATPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

FVector ATPSCharacter::GetPawnViewLocation() const
{
	return Super::GetPawnViewLocation();
}


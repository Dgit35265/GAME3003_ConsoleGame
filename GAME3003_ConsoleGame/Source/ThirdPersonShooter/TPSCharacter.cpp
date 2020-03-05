// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TPSWeapon.h"
#include "TPSPickups.h"
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
	OriginalMeshLocation = GetMesh()->RelativeLocation; 

	isInvincible = false;
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

	//Hand IK
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

	//Foot IK --- Assignment2
	FVector LeftFootLTraceStart = GetMesh()->GetSocketLocation("FootLSocket");
	FVector RightFootLTraceStart = GetMesh()->GetSocketLocation("FootRSocket");
	LeftFootLTraceStart.Z = GetActorLocation().Z;
	RightFootLTraceStart.Z = GetActorLocation().Z;
	FVector LeftFootLTraceEnd = LeftFootLTraceStart + (FVector::DownVector * (GetCapsuleComponent()->GetScaledCapsuleHalfHeight() + IKDistance));
	FVector RightFootLTraceEnd = RightFootLTraceStart + (FVector::DownVector * (GetCapsuleComponent()->GetScaledCapsuleHalfHeight() + IKDistance));

	FHitResult LeftFootHit;
	FHitResult RightFootHit;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	//Left Foot Line Trace
	if (GetWorld()->LineTraceSingleByChannel(LeftFootHit, LeftFootLTraceStart, LeftFootLTraceEnd, ECollisionChannel::ECC_Visibility, QueryParams))
	{
		LeftFootOnGround = true;
		DrawDebugLine(GetWorld(), LeftFootLTraceStart, LeftFootHit.Location, FColor::Green, false, 2 * DeltaTime, 0, 3);
	}
	else
	{
		LeftFootOnGround = false;
		DrawDebugLine(GetWorld(), LeftFootLTraceStart, LeftFootLTraceEnd, FColor::Red, false, 2 * DeltaTime, 0, 3);
	}
	//Right Foot Line Trace
	if (GetWorld()->LineTraceSingleByChannel(RightFootHit, RightFootLTraceStart, RightFootLTraceEnd, ECollisionChannel::ECC_Visibility, QueryParams))
	{
		RightFootOnGround = true;
		DrawDebugLine(GetWorld(), RightFootLTraceStart, RightFootHit.Location, FColor::Green, false, 2 * DeltaTime, 0, 3);
	}
	else
	{
		RightFootOnGround = false;
		DrawDebugLine(GetWorld(), RightFootLTraceStart, RightFootLTraceEnd, FColor::Red, false, 2 * DeltaTime, 0, 3);
	}
	// Set Left & Right Foot IK Location
	if (LeftFootOnGround && RightFootOnGround && GetVelocity().Size() < 10)
	{
		//UE_LOG(LogTemp, Warning, TEXT("EnableIK"));
		EnableIK = true;
		FVector NewMeshPos = GetMesh()->GetComponentLocation();
		NewMeshPos.Z = FMath::Min(LeftFootHit.Location.Z, RightFootHit.Location.Z); //Get the Z value for player mesh base on the lowest foot z value
		GetMesh()->SetWorldLocation(NewMeshPos);
		LeftFootIK = GetMesh()->GetSocketLocation("FootLSocket");
		LeftFootIK.Z = LeftFootHit.Location.Z + FootIKOffset;
		LeftFootIK = GetMesh()->GetComponentTransform().Inverse().TransformPosition(LeftFootIK);
		RightFootIK = GetMesh()->GetSocketLocation("FootRSocket");
		RightFootIK.Z = RightFootHit.Location.Z + FootIKOffset;
		RightFootIK = GetMesh()->GetComponentTransform().Inverse().TransformPosition(RightFootIK);
	}
	else
	{
		EnableIK = false;
		GetMesh()->SetWorldLocation(GetTransform().TransformPosition(OriginalMeshLocation));
	}

	// Pickup
	FHitResult hit;
	FVector EyeLoc;
	FRotator EyeRot;
	GetActorEyesViewPoint(EyeLoc, EyeRot);

	//Setup if colliding with pickableWeapon
	if (UKismetSystemLibrary::BoxTraceSingle(this, EyeLoc + pickupBoxHalfSize.X * EyeRot.Vector(),
		EyeLoc + pickupDistance * EyeRot.Vector(), pickupBoxHalfSize, EyeRot,
		PickupTraceQueryChannel, false, actorsToIgnoreForPickup, EDrawDebugTrace::ForOneFrame,
		hit, true))
	{
		//PickableWeapon
		if (Cast<ATPSWeapon>(hit.Actor) && hit.Actor->GetOwner() == nullptr)
		{
			auto weapon = Cast<ATPSWeapon>(hit.Actor);
			pickableWeapon = weapon;
			//check if there are several weapons?
		}
		else
		{
			pickableWeapon = nullptr;
		}
		//Pickups
		if (Cast<ATPSPickups>(hit.Actor))
		{
			pickups = Cast<ATPSPickups>(hit.Actor);
		}
		else
		{
			pickups = nullptr;
		}
	}
	else
	{
		pickableWeapon = nullptr;
		pickups = nullptr;
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
	if (CurrentWeapon->GetBulletTimer().IsValid()) //check if currentweapon is firing
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
		if (i != slot) //??Refresh other weapons back to their slots
		{
			Weapons[i]->AttachToComponent(Cast<USceneComponent>(GetMesh()),
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				WeaponSlotSocketNames[i]);
		}
	}
	
	//Set selected weapon as current weapon
	CurrentWeapon = Weapons[slot];
	CurrentWeapon->AttachToComponent(Cast<USceneComponent>(GetMesh()),
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		HandSocketName);

	OnWeaponSwitch.Broadcast(CurrentWeapon, PrevWeapon);
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

#pragma region Pickup
void ATPSCharacter::RefreshPickupIgnores()
{
	actorsToIgnoreForPickup.Empty();
	for (auto weapon : Weapons)
	{
		actorsToIgnoreForPickup.Add(weapon);//Ignore weapon player owned
	}
}
void ATPSCharacter::PickUpWeapon()
{
	if (currentWeaponState == WeaponState::PickingUp && pickableWeapon)
	{
		CurrentWeapon->SetOwner(nullptr);
		CurrentWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		CurrentWeapon->SetActorLocation(pickableWeapon->GetActorLocation());
		CurrentWeapon->SetActorRotation(pickableWeapon->GetActorRotation());
		Weapons[currentWeaponSlot] = pickableWeapon;
		pickableWeapon->SetOwner(this);
		EquipWeaponAtSlot(currentWeaponSlot);
		RefreshPickupIgnores();
		currentWeaponState = WeaponState::Idle;
	}
}
void ATPSCharacter::Pickups()
{
	if (pickups)
	{
		pickups->PickupEffect();
	}
}
void ATPSCharacter::StartPickup()
{
	if (currentWeaponState == WeaponState::Idle && pickableWeapon)
	{
		GetWorldTimerManager().SetTimer(weaponPickupTimer, this, &ATPSCharacter::PickUpWeapon, pickupTime, false);
		currentWeaponState = WeaponState::PickingUp;
	}

	if (pickups)
	{
		DrawDebugLine(GetWorld(), pickups->GetActorLocation(), GetActorLocation(), FColor::Blue, false, 2.0f, 0, 10);
		pickups->SetOwner(this);
		GetWorldTimerManager().SetTimer(pickupTimer, this, &ATPSCharacter::Pickups, pickupTime, false);
	}
}
void ATPSCharacter::CancelPickup()
{
	if (currentWeaponState == WeaponState::PickingUp)
	{
		currentWeaponState = WeaponState::Idle;
	}

	GetWorldTimerManager().ClearTimer(weaponPickupTimer);
	GetWorldTimerManager().ClearTimer(pickupTimer);
}
float ATPSCharacter::GetPickupAlpha()
{
	return GetWorldTimerManager().GetTimerElapsed(weaponPickupTimer) / pickupTime;
}
AActor* ATPSCharacter::GetCurrentWeapon()
{
	return CurrentWeapon;
}
//Invinciblility
void ATPSCharacter::SetInvincible()
{
	isInvincible = true;
	GetWorldTimerManager().SetTimer(invincibleTimer, this, &ATPSCharacter::ResetInvincible, invincibleTime, false);
}
void ATPSCharacter::ResetInvincible()
{
	isInvincible = false;
}
bool ATPSCharacter::GetInvincible()
{
	return isInvincible;
}
#pragma endregion

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


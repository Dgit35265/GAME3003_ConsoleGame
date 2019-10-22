// Fill out your copyright notice in the Description page of Project Settings.


#include "TPScharacter.h"
#include "Components/InputComponent.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "TPSWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HealthComponent.h"
#include "GAME3003_Week01.h"

// Sets default values
ATPScharacter::ATPScharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Main Camera"));
	CameraComp->SetupAttachment(SpringArmComp);

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ATPScharacter::OnHealthChanged);
}

// Called when the game starts or when spawned
void ATPScharacter::BeginPlay()
{
	Super::BeginPlay();
	EndZoom();

	FActorSpawnParameters spawnParms;
	spawnParms.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<ATPSWeapon>(StarterWeaponClass, spawnParms);
	if (CurrentWeapon)
	{
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocketName);
	}
}

// Called every frame
void ATPScharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	dt = DeltaTime;
	if (bInCover)
	{
		if (bIsAiming)
		{
			GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
		}
		else
		{
			if (OverlappingCoverVolume)
			{
				GetMesh()->SetWorldRotation(OverlappingCoverVolume->GetComponentRotation().Add(0, 40, 0));
			}
		}
	}
	else
	{
		GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
	}

}

// Called to bind functionality to input
void ATPScharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATPScharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveSide", this, &ATPScharacter::MoveSide);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookSideways", this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ATPScharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ATPScharacter::EndCrouch);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATPScharacter::BeginJump);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ATPScharacter::StartZoom);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &ATPScharacter::EndZoom);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ATPScharacter::StartFire);
	PlayerInputComponent->BindAction("Shoot", IE_Released, this, &ATPScharacter::StopFire);
	PlayerInputComponent->BindAction("TakeCover", IE_Pressed, this, &ATPScharacter::TakeCover);
	PlayerInputComponent->BindAction("SwitchWeaponMode", IE_Pressed, this, &ATPScharacter::SwitchMode);

}

void ATPScharacter::MoveForward(float val)
{
	if(!bInCover)
	{ 
		GetMovementComponent()->AddInputVector(GetActorForwardVector() * val);
	}
}

void ATPScharacter::MoveSide(float val)
{
	if (bInCover)
	{
		FVector targetPos = GetActorLocation() + OverlappingCoverVolume->GetRightVector() * val * dt;
		FVector offsetFromCoverCenter = targetPos - OverlappingCoverVolume->GetComponentLocation();
		float dot = FVector::DotProduct(offsetFromCoverCenter, OverlappingCoverVolume->GetRightVector());
		bool isTargetInRange = abs(dot) < OverlappingCoverVolume->GetScaledBoxExtent().Y - 50;
		bool isMovingTowardCenter = dot * val < 0;
		if (isTargetInRange || isMovingTowardCenter)
		{
			GetCharacterMovement()->AddInputVector(OverlappingCoverVolume->GetRightVector() * val);
		}
	}
	else
	{
		GetMovementComponent()->AddInputVector(GetActorRightVector() * val);
	}
}

void ATPScharacter::BeginCrouch()
{
	Crouch();
}

void ATPScharacter::EndCrouch()
{
	UnCrouch();
}

void ATPScharacter::BeginJump()
{
	Jump();
}

FVector ATPScharacter::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

void ATPScharacter::StartZoom()
{
	bIsAiming = true;
	CameraComp->SetFieldOfView(zoomedFOV);
}

void ATPScharacter::EndZoom()
{
	bIsAiming = false;
	CameraComp->SetFieldOfView(defaultFOV);
}

void ATPScharacter::FireWeapon()
{
	if (CurrentWeapon)
	{
		if (bInCover)
		{
			if (bIsAiming)
			{
				CurrentWeapon->StartFire();
			}
		}		
		else
		{
			CurrentWeapon->StartFire();
		}
	}
}

void ATPScharacter::StartFire()
{
	if (CurrentWeapon)
	{
		if (bInCover)
		{
			if (bIsAiming)
			{
				CurrentWeapon->StartFire();
			}
		}
		else
		{
			CurrentWeapon->StartFire();
		}
	}
}

void ATPScharacter::StopFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}

void ATPScharacter::TakeCover()
{
	if (OverlappingCoverVolume)
	{
		if (bInCover)
		{
			bInCover = false;
		}
		else
		{
			FVector lineTraceStart = GetActorLocation();
			FVector lineTraceEnd = GetActorLocation() + OverlappingCoverVolume->GetForwardVector() * 10000;
			FHitResult HitResult;

			if (GetWorld()->LineTraceSingleByChannel(HitResult, lineTraceStart, lineTraceEnd, CoverTraceChannel))
			{
				FVector targetLocation = HitResult.Location;
				targetLocation -= OverlappingCoverVolume->GetForwardVector() * GetCapsuleComponent()->GetScaledCapsuleRadius();
				SetActorLocation(targetLocation);

				bInCover = true;
			}
		}
	}
}

void ATPScharacter::SwitchMode()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->SwitchMode();
	}
}

void ATPScharacter::OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float DeltaHealth, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) 
{
	if (Health <= 0)
	{
		bDead = true;
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		SetLifeSpan(5);
	}
}

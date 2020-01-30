// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPlayer.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ATPSPlayer::ATPSPlayer()
{
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	CameraComp->SetupAttachment(SpringArmComp);
}

void ATPSPlayer::StartZoom()
{
	Super::StartZoom();
	CameraComp->SetFieldOfView(zoomedFOV);
}

void ATPSPlayer::EndZoom()
{
	Super::EndZoom();
	CameraComp->SetFieldOfView(defaultFOV);
}

// Called to bind functionality to input
void ATPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATPSPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveSideways", this, &ATPSPlayer::MoveSideways);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookSideways", this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ATPSPlayer::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ATPSPlayer::EndCrouch);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ATPSPlayer::StartZoom);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &ATPSPlayer::EndZoom);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ATPSPlayer::StartFire);
	PlayerInputComponent->BindAction("Shoot", IE_Released, this, &ATPSPlayer::EndFire);
	PlayerInputComponent->BindAction("TakeCover", IE_Pressed, this, &ATPSPlayer::TakeCover);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ATPSPlayer::PlayReloadAnim);
	PlayerInputComponent->BindAction("EquipWeapon1", IE_Pressed, this, &ATPSPlayer::EquipWeapon1);
	PlayerInputComponent->BindAction("EquipWeapon2", IE_Pressed, this, &ATPSPlayer::EquipWeapon2);
}

FVector ATPSPlayer::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}
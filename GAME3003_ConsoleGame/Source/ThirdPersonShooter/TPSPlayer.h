// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPSCharacter.h"
#include "TPSPlayer.generated.h"

/**
 * 
 */
class UCameraComponent;
class USpringArmComponent;
UCLASS()
class THIRDPERSONSHOOTER_API ATPSPlayer : public ATPSCharacter
{
	GENERATED_BODY()
public:
	ATPSPlayer();
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PlayerProperties", meta = (ClampMin = 30, ClampMax = 120))
	float defaultFOV;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PlayerProperties", meta = (ClampMin = 30, ClampMax = 120))
	float zoomedFOV;

	virtual void StartZoom() override;
	virtual void EndZoom() override;
public:
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual FVector GetPawnViewLocation() const override;
};

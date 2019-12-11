// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TPScharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ATPSWeapon;
class UBoxComponent;
class UHealthComponent;

UCLASS()
class GAME3003_WEEK01_API ATPScharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPScharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float val);
	void MoveSide(float val);
	void BeginCrouch();
	void EndCrouch();
	void BeginJump();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerProperites")
	bool bIsAiming;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PlayerProperites", meta = (ClampMin = 30, ClampMax = 120))
	float defaultFOV;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PlayerProperites", meta = (ClampMin = 30, ClampMax = 120))
	float zoomedFOV;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponProperites")
	TSubclassOf<ATPSWeapon> StarterWeaponClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponProperites")
	FName WeaponSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponProperites")
	ATPSWeapon* CurrentWeapon;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CoverProperites")
	UBoxComponent* OverlappingCoverVolume;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CoverProperites")
	bool bInCover;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CoverProperites")
	float CoverTime;
	float dt;
	bool CoverTimerStart;

	UFUNCTION(BlueprintCallable)
	void StartZoom();
	UFUNCTION(BlueprintCallable)
	void EndZoom();
	void FireWeapon();
	UFUNCTION(BlueprintCallable)
	void StartFire();
	UFUNCTION(BlueprintCallable)
	void StopFire();
	UFUNCTION(BlueprintCallable)
	void TakeCover();
	void SwitchMode();

	// Health Params
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health Component")
	UHealthComponent* HealthComp;
	UFUNCTION()
	void OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float DeltaHealth, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerProperites")
	bool bDead;
	FTimerHandle WeaponDetachTimer;
	void DetachWeapon();
	UFUNCTION(BlueprintImplementableEvent, Category = "Health Component")
	void playerDead();
	UFUNCTION(BlueprintImplementableEvent, Category = "HealthComponent")
	void PrepareRegenerating();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponProperites")
	bool StopRegenerate;

	//Get Score by Killing Enemy
	UFUNCTION(BlueprintCallable, Category = "Scoring System")
	void ScoringSystem(float LastDamage);
	UFUNCTION(BlueprintImplementableEvent, Category = "Scoring System")
	void AddScore();
	UPROPERTY(BlueprintReadOnly, Category = "Scoring System")
	int KillScore;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PlayerProperites")
	UMaterialInterface* deathMaterial;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	FVector GetPawnViewLocation() const override;
};

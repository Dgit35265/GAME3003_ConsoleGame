// Fill out youVr copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TPSWeapon.generated.h"

class UCameraShake;

UCLASS()
class GAME3003_WEEK01_API ATPSWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATPSWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> damageType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocket;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* ImpactEffectBlood;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* ImpactEffectConcrete;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* TrailEffect;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName TrailEffectParam;

	FTimerHandle BulletTimer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float BaseDamege = 20;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float DamageMultiplier = 4;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> FireCameraShake;

	enum FireMode { SingleFire, AutoFire };
	FireMode WeaponMode;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	float rateOfFire = 6; // set fire rate
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	int ammo = 100;
	float baseBulletSpread = 80.f;
	float bulletSpreadAcc = 1.15f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	float curSpread;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Fire();
	void StartFire();
	void StopFire();
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void SwitchMode();
};

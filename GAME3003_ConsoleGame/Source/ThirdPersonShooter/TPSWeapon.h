// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TPSWeapon.generated.h"

class UCameraShake;

UCLASS()
class THIRDPERSONSHOOTER_API ATPSWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATPSWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* ImpactEffectBlood;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* ImpactEffectConcrete;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* TrailEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	FName TrailEffectParam;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> FireCameraShake;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	float fireRate;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	int magazineSize;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	int totalNumberOfBullets;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	int ammoCount;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon", meta = (ClampMin = 0, ClampMax = 1))
	float accuracy;
	FTimerHandle BulletTimer;
public:
	inline FTimerHandle const & GetBulletTimer() { return BulletTimer; }
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float BaseDamage = 20;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float DamageMultiplier = 4;

public:	
	void Reload();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Fire();
	bool firing;
	void StartFire();

	void EndFire();
};

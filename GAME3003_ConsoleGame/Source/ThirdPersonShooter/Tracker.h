// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tracker.generated.h"
class UNavigationSystemV1;
class USphereComponent;
class USoundCue;
class UHealthComponent;

UCLASS()
class THIRDPERSONSHOOTER_API ATracker : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATracker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tracker Properties")
	UStaticMeshComponent* MeshComp;

	UNavigationSystemV1* navSystem;
	FVector NextPoint;
	FVector GetNextPoint();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracker Properties")
	float MoveForce;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracker Properties")
	bool bUseVelocityChange;

	// Health Params
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tracker Properties")
	UHealthComponent* HealthComp;
	UFUNCTION()
	void OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float DeltaHealth, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	UMaterialInstanceDynamic* MatInstance;
	bool bDestroyed = false;
	void SelfDestruct();
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracker Properties")
	UParticleSystem* ExplosionEffect;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracker Properties")
	USoundCue* ExplosionSound;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracker Properties")
	float ExplosionRadius = 500;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tracker Properties")
	float ExplosionBaseDamage = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tracker Properties")
	USphereComponent* SelfDamageTrigger;
	void DamageSelf();
	bool bSelfDamageStarted = false;
	FTimerHandle SelfDamageTimer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

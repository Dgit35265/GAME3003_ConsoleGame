// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TPSProjectile.generated.h"

UCLASS()
class GAME3003_WEEK01_API ATPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATPSProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> explosionDamageType;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Explosion();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	float exploTime;
	float curTime;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

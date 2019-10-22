// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPSWeapon.h"
#include "TPSProjectile.h"
#include "TPSProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class GAME3003_WEEK01_API ATPSProjectileWeapon : public ATPSWeapon
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<ATPSProjectile> projectile;

	void Fire();
};

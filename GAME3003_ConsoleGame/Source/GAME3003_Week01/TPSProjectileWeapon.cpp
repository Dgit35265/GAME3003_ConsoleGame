// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSProjectileWeapon.h"
#include "Engine/World.h"


void ATPSProjectileWeapon::Fire() {

	AActor* MyOwner = GetOwner();

	if (MyOwner)
	{
		FVector spawnLocation;
		FRotator spawnRotation;
		FVector EyeLoc;
		FRotator EyeRot;
		MyOwner->GetActorEyesViewPoint(EyeLoc, EyeRot);

		MeshComp->GetSocketWorldLocationAndRotation("MuzzleFlashSocket", spawnLocation, spawnRotation);
		GetWorld()->SpawnActor<ATPSProjectile>(projectile, spawnLocation, EyeRot);
	}
}

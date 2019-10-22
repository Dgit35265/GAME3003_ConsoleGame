// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSProjectile.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATPSProjectile::ATPSProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	curTime = 0.0f;
	exploTime = 1.0f;
}

// Called every frame
void ATPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	curTime += DeltaTime;
	if (curTime >= exploTime) 
	{
		Destroy();
		Explosion();
	}
}

void ATPSProjectile::Explosion()
{
	FHitResult SphereTraceHitresult;
	TArray<AActor*> IgnoreP;

	//start and end location for sweeping
	FVector SweepStart = GetActorLocation();
	FVector SweepEnd = GetActorLocation();
	//create a sphere collision
	FCollisionShape SphereCol = FCollisionShape::MakeSphere(500.0f);

	//Do damage here
	UGameplayStatics::ApplyRadialDamage(GetWorld(), 50.0f, SweepStart, 200.0f, explosionDamageType, IgnoreP, this, nullptr, true);

	//Explosion Particle Effect here
	if(ExplosionEffect)
	{ 
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation(), GetActorRotation(), FVector(8.0f, 8.0f, 8.0f));
	}
	//Draw Debug Sphere
	//DrawDebugSphere(GetWorld(), GetActorLocation(), SphereCol.GetSphereRadius(), 50, FColor::Blue, true, 1.0f, 0, 1.0f);
}


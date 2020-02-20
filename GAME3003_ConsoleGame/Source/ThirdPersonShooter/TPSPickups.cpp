// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPickups.h"
#include "TPSCharacter.h"
#include "TPSWeapon.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATPSPickups::ATPSPickups()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	MeshComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATPSPickups::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATPSPickups::DamageBoost()
{
	Cast<ATPSWeapon>(Cast<ATPSCharacter>(this->GetOwner())->GetCurrentWeapon())->DamageBoost();
	Destroy();
}

void ATPSPickups::Invincibility()
{
	Cast<ATPSCharacter>(this->GetOwner())->SetInvincible();
	Destroy();
}

// Called every frame
void ATPSPickups::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATPSPickups::PickupEffect()
{
	if (this->GetOwner()) 
	{
		switch (pickupsType)
		{
		case PickupsType::DamageBooster:
			DamageBoost();
			break;
		case PickupsType::Invincibler:
			Invincibility();
			break;
		default:
			break;
		}
	}
}


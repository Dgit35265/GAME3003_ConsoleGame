// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

float UHealthComponent::GetHealth() const
{
	return Health;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
	Health = MaxHealth;

	AActor* MyOwner = GetOwner();

	if (MyOwner)
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
	}
}

void UHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.f)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);
	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Health Changed " + FString::SanitizeFloat(Health));
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::RegenerateHealth()
{
	if (Health < MaxHealth)
	{
		Health += RegenerateRate;
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Orange, "Health Changed " + FString::SanitizeFloat(Health));
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, "RegenerateRate " + FString::SanitizeFloat(RegenerateRate));
	}
	else
	{
		Health = MaxHealth;
	}
}

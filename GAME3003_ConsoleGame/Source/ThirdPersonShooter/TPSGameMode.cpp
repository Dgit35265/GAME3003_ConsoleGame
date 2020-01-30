// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSGameMode.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "HealthComponent.h"


ATPSGameMode::ATPSGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

void ATPSGameMode::StartPlay()
{
	Super::StartPlay();
	StartWave();
}

void ATPSGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckWaveState();
}

void ATPSGameMode::StartWave()
{
	waveNumber++;
	numberOfBotsToSpawn = 2 * waveNumber;
	// set up timer to SpawnBotTimerElapsed()
	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, 
		&ATPSGameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);
}

void ATPSGameMode::SpawnBotTimerElapsed()
{
	// spawn the bots using SpawnNewBot()
	SpawnNewBot();
	numberOfBotsToSpawn--;
	// Once completed call EndWave()
	if (numberOfBotsToSpawn <= 0)
	{
		EndWave();
	}
}
void ATPSGameMode::EndWave()
{
	// stop the bot spawn timer
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);
	//PrepareForNextWave();
}

void ATPSGameMode::PrepareForNextWave()
{
	// set up timer for StartWave()
	GetWorldTimerManager().SetTimer(TimerHandle_WaveStarter,
		this, &ATPSGameMode::StartWave, timeBetweenWaves, false);
}

void ATPSGameMode::CheckWaveState()
{
	bool bIsPreparingForNextWave = GetWorldTimerManager().IsTimerActive(TimerHandle_WaveStarter);
	if (numberOfBotsToSpawn > 0 || bIsPreparingForNextWave)
	{
		return;
	}
	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
	{
		APawn* pawn = It->Get();
		if (pawn == nullptr || pawn->IsPlayerControlled())
		{
			continue;
		}
		UHealthComponent* HealthComp = Cast<UHealthComponent>(
			pawn->GetComponentByClass(UHealthComponent::StaticClass()));
		if (HealthComp && HealthComp->GetHealth() > 0)
		{
			return;
		}
	}
	PrepareForNextWave();
}


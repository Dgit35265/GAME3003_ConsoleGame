// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSGameModeBase.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "HealthComponent.h"

ATPSGameModeBase::ATPSGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

void ATPSGameModeBase::StartPlay()
{
	Super::StartPlay();
	PrepareForNextWave();
}

void ATPSGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckWaveState();
}

void ATPSGameModeBase::StartWave()
{
	numberOfBotsToSpawn = 2 * waveNumber;
	//set up timer to SpawnBotTimerElasped()
	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this,
		&ATPSGameModeBase::SpawnBotTimerElapsed, 1.0f, true, 0.0f);
}

void ATPSGameModeBase::SpawnBotTimerElapsed()
{
	//spawn the bots using SpawnNewBot()
	SpawnNewBot();
	numberOfBotsToSpawn--;
	//Once completed call EndWave()
	if (numberOfBotsToSpawn <= 0)
	{
		EndWave();
	}
}

void ATPSGameModeBase::EndWave()
{
	//stop the bot spawn timer
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);
	//PrepareForNextWave();
	//Next step: Check Wave State
}

void ATPSGameModeBase::PrepareForNextWave()
{
	waveNumber++;
	ShowWave();
	//set up timer for StartWave()
	GetWorldTimerManager().SetTimer(TimerHandle_WaveStarter, this, 
		&ATPSGameModeBase::StartWave, timeBetweenWaves, false);
}

void ATPSGameModeBase::CheckWaveState()
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
		UHealthComponent* HealthComp = Cast<UHealthComponent>
			(pawn->GetComponentByClass(UHealthComponent::StaticClass()));
		if (HealthComp && HealthComp->GetHealth() > 0)
		{
			return;
		}
	}
	PrepareForNextWave();
}
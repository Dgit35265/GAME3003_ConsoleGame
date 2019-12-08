// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TPSGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAME3003_WEEK01_API ATPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
protected:
	FTimerHandle TimerHandle_BotSpawner;
	FTimerHandle TimerHandle_WaveStarter;
	UPROPERTY(EditDefaultsOnly, Category = "Game Mode")
	float timeBetweenWaves;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Wave Data")
	int waveNumber = 0;
	int numberOfBotsToSpawn;
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Mode")
	void SpawnNewBot();
	void SpawnBotTimerElapsed();
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Mode")
	void ShowWave();
	void StartWave();
	void EndWave();
	void PrepareForNextWave();
	void CheckWaveState();
public:
	ATPSGameModeBase();
	virtual void StartPlay() override;
	virtual void Tick(float DeltaTime) override;
};

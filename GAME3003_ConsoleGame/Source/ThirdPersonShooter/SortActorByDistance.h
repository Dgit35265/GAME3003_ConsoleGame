// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SortActorByDistance.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API USortActorByDistance : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable)
    static const TArray<AActor*> SortActorByDistance(UPARAM(ref)TArray<AActor*>& ArrayToSort, const FVector& TargetLocation, bool Ascending, TArray<float>& distances);

};

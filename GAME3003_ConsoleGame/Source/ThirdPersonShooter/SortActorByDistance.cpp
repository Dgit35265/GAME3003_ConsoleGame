#include "SortActorByDistance.h"
#include "Engine/World.h"
#include "GameFrameWork/PlayerController.h"

const TArray<AActor*> USortActorByDistance::SortActorByDistance(UPARAM(ref)TArray<AActor*>& ArrayToSort, const AActor* TargetActor, bool Ascending)
{
	//FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FVector TargetLocation = TargetActor->GetActorLocation();
	int CurrentIndex;
	for (int i = 0; i < ArrayToSort.Num(); ++i)
	{
		AActor* CurrentActor = ArrayToSort[i];
		CurrentIndex = i;
		//Selection Sorting
		for (int j = i; j < ArrayToSort.Num(); ++j)
		{
			float NewDis = (TargetLocation - ArrayToSort[j]->GetActorLocation()).Size();
			float CurDis = (TargetLocation - CurrentActor->GetActorLocation()).Size();
			if (Ascending)
			{
				if (NewDis < CurDis)
				{
					CurrentActor = ArrayToSort[j];
					CurrentIndex = j;
				}
			}
			else
			{
				if (NewDis > CurDis)
				{
					CurrentActor = ArrayToSort[j];
					CurrentIndex = j;
				}
			}
			Swap(ArrayToSort[i], ArrayToSort[CurrentIndex]);
		}
	}


	return ArrayToSort;
}

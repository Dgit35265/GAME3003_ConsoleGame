#include "SortActorByDistance.h"
#include "Engine/World.h"
#include "GameFrameWork/PlayerController.h"

const TArray<AActor*> USortActorByDistance::SortActorByDistance(UPARAM(ref)TArray<AActor*>& ArrayToSort, const FVector& TargetLocation, bool Ascending, TArray<float>& distances)
{
	//FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	//FVector TargetLocation = TargetActor->GetActorLocation();
	for (int i = 0; i < ArrayToSort.Num(); ++i)
	{
		int CurrentIndex = i;
		AActor* CurrentActor = ArrayToSort[i];
		//Selection Sorting
		for (int j = i; j < ArrayToSort.Num(); ++j)
		{
			float NewDis = FVector::Dist(TargetLocation, ArrayToSort[j]->GetActorLocation());
			float CurDis = FVector::Dist(TargetLocation, CurrentActor->GetActorLocation());		
			if (Ascending)
			{
				if (NewDis < CurDis)
				{
					CurrentActor = ArrayToSort[j];
					CurrentIndex = j;
					ArrayToSort.Swap(i, CurrentIndex);
				}
			}
			else
			{
				if (NewDis > CurDis)
				{
					CurrentActor = ArrayToSort[j];
					CurrentIndex = j;
					ArrayToSort.Swap(i, CurrentIndex);
				}
			}
			//Swap(ArrayToSort[i], ArrayToSort[CurrentIndex]);
		}
	}

	for (int i = 0; i < ArrayToSort.Num(); ++i)
	{
		float dis = FVector::Dist(TargetLocation, ArrayToSort[i]->GetActorLocation());
		distances.Add(dis);
	}

	return ArrayToSort;
}

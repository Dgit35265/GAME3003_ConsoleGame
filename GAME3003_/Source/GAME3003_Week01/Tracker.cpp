// Fill out your copyright notice in the Description page of Project Settings.


#include "Tracker.h"
#include "Components/StaticMeshComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "TPScharacter.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATracker::ATracker()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	//RootComponent->Mobility = EComponentMobility::Movable;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = MeshComp;
	MeshComp->SetSimulatePhysics(true);
	//MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCanEverAffectNavigation(false);
	MoveForce = 1000;
	bUseVelocityChange = true;
}

// Called when the game starts or when spawned
void ATracker::BeginPlay()
{
	Super::BeginPlay();
		
	navSystem = UNavigationSystemV1::GetCurrent(this);
	NextPoint = GetNextPoint();
	
}

FVector ATracker::GetNextPoint()
{
	ATPScharacter* player = Cast<ATPScharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (player)
	{
		UNavigationPath* path = navSystem->FindPathToActorSynchronously(this, GetActorLocation(), player); //store path points
		if (path->PathPoints.Num() > 1) {
			DrawDebugSphere(GetWorld(), path->PathPoints[1], 30, 12, FColor::Red, false, 1, 0, 3);

			return path->PathPoints[1];
		}
	}

	return GetActorLocation();
}

// Called every frame
void ATracker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float distanceToTarget = (NextPoint - GetActorLocation()).Size();

	if (distanceToTarget < 100)
	{
		// If I am close enough, calculate new next point
		NextPoint = GetNextPoint();
	}
	else
	{
		// Add force to get to next point
		FVector force = NextPoint - GetActorLocation();
		force.Normalize();
		force *= MoveForce;
		MeshComp->AddForce(force, NAME_None, bUseVelocityChange);
		DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + force, 20, FColor::Blue, false, 2 * DeltaTime, 0, 3);
	}

}

// Called to bind functionality to input
void ATracker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


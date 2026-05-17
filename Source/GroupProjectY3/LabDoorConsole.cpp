// Fill out your copyright notice in the Description page of Project Settings.


#include "LabDoorConsole.h"
#include "GroupProjectY3Character.h"

// Sets default values
ALabDoorConsole::ALabDoorConsole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALabDoorConsole::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALabDoorConsole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALabDoorConsole::Interact_Implementation(AActor* InteractingActor)
{
	if (AGroupProjectY3Character* Player = Cast<AGroupProjectY3Character>(InteractingActor))
	{
		if (Player->accessLevel < AccessLevelGranted && Player->keyLevel >= AccessLevelGranted)
		{
			UE_LOG(LogTemp, Warning, TEXT("Access Level is 1 now"));
			Player->accessLevel = AccessLevelGranted;
		}
	}
}

void ALabDoorConsole::InteractionDialogue_Implementation(AActor* InteractingActor)
{
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Computer.h"
#include "WatchController.h"
#include "TimerComponent.h"

// Sets default values
AComputer::AComputer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DataDownloadStart = 0;
	DataDownloadTotal = 100;
	isDataDownloaded = false;
	isDataDownloadStarted = false;

}

// Called when the game starts or when spawned
void AComputer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComputer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isDataDownloadStarted)
	{
		DataDownloadStart += DeltaTime;

		if (DataDownloadStart >= DataDownloadTotal)
		{
			DataDownloadStart = DataDownloadTotal;
			isDataDownloaded = true;

			//puzzle completed?
		}
	}
}

void AComputer::Interact_Implementation(AActor* InteractingActor)
{
}

void AComputer::InteractionDialogue_Implementation(AActor* InteractingActor)
{
}

void AComputer::PlaySound_Implementation(USoundBase* sound)
{
}

void AComputer::InteractPauseChronovertTimer_Implementation()
{
	WatchController->Timer->isTimerPaused = true;
}

void AComputer::InteractResumeChronovertTimer_Implementation()
{
	WatchController->Timer->isTimerPaused = false;
}

void AComputer::StartDataDownload()
{
	isDataDownloadStarted = true;
}

float AComputer::GetDataDownloadPercentage()
{
	return DataDownloadStart / DataDownloadTotal;
}


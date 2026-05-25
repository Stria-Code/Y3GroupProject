// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GroupProjectY3Character.h"

// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Player->isInPresent && !hasPresentAudioPlayed)
	{
		hasPresentAudioPlayed = true;
		hasPastAudioPlayed = false;

		if (CurrentAudio)
		{
			CurrentAudio->Stop();
		}

		if (PresentSound)
		{
			CurrentAudio = UGameplayStatics::SpawnSound2D(this, PresentSound);
		}
	}
	
	if(Player->isInPast && !hasPastAudioPlayed)
	{
		hasPresentAudioPlayed = false;
		hasPastAudioPlayed = true;

		if (CurrentAudio)
		{
			CurrentAudio->Stop();
		}

		if (PastSound)
		{
			CurrentAudio = UGameplayStatics::SpawnSound2D(this, PastSound);
		}
	}
}


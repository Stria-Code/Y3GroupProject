// Fill out your copyright notice in the Description page of Project Settings.


#include "USB.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GroupProjectY3Character.h"

// Sets default values
AUSB::AUSB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUSB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUSB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUSB::Interact_Implementation(AActor* InteractingActor)
{
	if (AGroupProjectY3Character* Player = Cast<AGroupProjectY3Character>(InteractingActor))
	{
		if (USBSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, USBSound, GetActorLocation());
		}

		Player->hasUSBStick = true;
	}

	Destroy();
}

void AUSB::PlaySound_Implementation(USoundBase* sound)
{
}


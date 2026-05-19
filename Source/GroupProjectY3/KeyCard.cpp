// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyCard.h"
#include "GroupProjectY3Character.h"

// Sets default values
AKeyCard::AKeyCard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKeyCard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKeyCard::Interact_Implementation(AActor* InteractingActor)
{
	if (AGroupProjectY3Character* Player = Cast<AGroupProjectY3Character>(InteractingActor))
	{
		if (Player->keyLevel < KeyLevelGranted)
		{
			Player->keyLevel = KeyLevelGranted;
		}
	}

	Destroy();
}

void AKeyCard::InteractionDialogueEvent_Implementation(AActor* InteractingActor)
{
}


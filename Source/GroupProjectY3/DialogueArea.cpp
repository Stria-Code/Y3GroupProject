// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueArea.h"

// Sets default values
ADialogueArea::ADialogueArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADialogueArea::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADialogueArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADialogueArea::InteractionDialogueEvent_Implementation(AActor* InteractingActor)
{
}


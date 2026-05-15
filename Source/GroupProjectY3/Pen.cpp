// Fill out your copyright notice in the Description page of Project Settings.


#include "Pen.h"

// Sets default values
APen::APen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APen::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APen::Interact_Implementation(AActor* InteractingActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Pen interacted with"));
}


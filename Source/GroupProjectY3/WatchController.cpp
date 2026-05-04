// Fill out your copyright notice in the Description page of Project Settings.


#include "WatchController.h"
#include "TimerComponent.h"

// Sets default values
AWatchController::AWatchController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Timer = CreateDefaultSubobject<UTimerComponent>(TEXT("TimerComponent"));
}

// Called when the game starts or when spawned
void AWatchController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWatchController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


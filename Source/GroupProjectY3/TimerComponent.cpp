// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerComponent.h"

// Sets default values for this component's properties
UTimerComponent::UTimerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	TimeRemaining = TimeDuration;
	isTimerFinished = false;
}


// Called when the game starts
void UTimerComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UTimerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UE_LOG(LogTemp, Warning, TEXT("Time Remaining: %f"), TimeRemaining);

	if (isTimerFinished)
	{
		return;
	}

	TimeRemaining -= DeltaTime;

	if (TimeRemaining <= 0.0f)
	{
		TimeRemaining = 0.0f;
		isTimerFinished = true;
	}
}


void UTimerComponent::StartTimer()
{
	TimeRemaining = TimeDuration;
	isTimerFinished = false;
}


float UTimerComponent::GetTimeRemaining() const
{
	return TimeRemaining;
}


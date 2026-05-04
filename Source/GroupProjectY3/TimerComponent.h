// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GROUPPROJECTY3_API UTimerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTimerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float TimeRemaining;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Timer")
	float TimeDuration = 10.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Timer")
	float isTimerFinished;

	UFUNCTION(BlueprintCallable, Category = "Timer")
	void StartTimer();

	UFUNCTION(BlueprintPure, Category = "Timer")
	float GetTimeRemaining() const;
};

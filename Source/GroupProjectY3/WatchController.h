// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WatchController.generated.h"


class UTimerComponent;

UCLASS()
class GROUPPROJECTY3_API AWatchController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWatchController();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UTimerComponent* Timer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

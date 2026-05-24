// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "Computer.generated.h"

class AWatchController;

UCLASS()
class GROUPPROJECTY3_API AComputer : public AActor, public IInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AComputer();

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Timer")
	AWatchController* WatchController;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact_Implementation(AActor* InteractingActor) override;
	virtual void InteractionDialogue_Implementation(AActor* InteractingActor) override;
	virtual void PlaySound_Implementation(USoundBase* sound) override;
	virtual void InteractPauseChronovertTimer_Implementation() override;
	virtual void InteractResumeChronovertTimer_Implementation() override;

	bool doesStopTimer = true;

	UFUNCTION(BlueprintCallable)
	void StartDataDownload();


	UFUNCTION(BlueprintCallable)
	float GetDataDownloadPercentage();

	float DataDownloadTotal;
	float DataDownloadStart;
	bool isDataDownloaded;
	bool isDataDownloadStarted;

};

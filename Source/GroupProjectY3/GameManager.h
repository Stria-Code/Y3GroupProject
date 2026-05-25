// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "GameManager.generated.h"

class AGroupProjectY3Character;

UCLASS()
class GROUPPROJECTY3_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* PresentSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* PastSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	AGroupProjectY3Character* Player;

	UPROPERTY()
	UAudioComponent* CurrentAudio;

	bool hasPastAudioPlayed;
	bool hasPresentAudioPlayed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};

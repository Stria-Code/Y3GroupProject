// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "KeyCard.generated.h"

class GroupProjectY3Character;

UCLASS()
class GROUPPROJECTY3_API AKeyCard : public AActor, public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyCard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact_Implementation(AActor* InteractingActor) override;
	virtual void InteractionDialogue_Implementation(AActor* InteractingActor) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KeyCard")
	int KeyLevelGranted;
};

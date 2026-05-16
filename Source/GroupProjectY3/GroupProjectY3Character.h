// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Engine/SceneCapture2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Blueprint/UserWidget.h"
#include "Engine/TextureRenderTarget2D.h"

#include "GroupProjectY3Character.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;
class AWatchController;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A basic first person character
 */
UCLASS(abstract)

class AGroupProjectY3Character : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: first person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* FirstPersonMesh;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	// Widget Instance
	UPROPERTY()
	UUserWidget* ChronovertWidget;

	UPROPERTY()
	USceneCaptureComponent2D* ChronovertSceneCaptureComponent;


protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* MouseLookAction;

	// Action to teleport player
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* changeTimeAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ChronovertAction;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PastCameraComponent;



	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Timer")
	AWatchController* WatchController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASceneCapture2D* ChronovertSceneCapture;

	// Render Target
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextureRenderTarget2D* ChronovertRenderTarget;

	// Widget Class
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ChronovertWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDoorScript* Door;

	virtual void BeginPlay() override;

	FVector PresentPosition;
	FVector PastPosition;

	bool isInPresent;
	bool isInPast;
	bool hasKey;

	UPROPERTY(BlueprintReadOnly)
	int keyLevel;

	bool isHit;
	FHitResult Hit;

	AActor* CurrentLookActor;

	bool isChronovertActive;

	void LookAtTarget();

public:
	AGroupProjectY3Character();

	virtual void Tick(float DeltaTime) override;

protected:

	/** Called from Input Actions for movement input */
	void MoveInput(const FInputActionValue& Value);

	/** Called from Input Actions for looking input */
	void LookInput(const FInputActionValue& Value);

	/** Handles aim inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoAim(float Yaw, float Pitch);

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles jump start inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStart();

	/** Handles jump end inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpEnd();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void ChangeTimeline();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoInteract();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void OpenChronovert();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void CloseChronovert();

protected:

	/** Set up input action bindings */
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;


public:

	/** Returns the first person mesh **/
	USkeletalMeshComponent* GetFirstPersonMesh() const { return FirstPersonMesh; }

	/** Returns first person camera component **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};


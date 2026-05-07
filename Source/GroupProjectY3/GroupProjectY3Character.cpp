// Copyright Epic Games, Inc. All Rights Reserved.

#include "GroupProjectY3Character.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GroupProjectY3.h"
#include "WatchController.h"
#include "TimerComponent.h"

AGroupProjectY3Character::AGroupProjectY3Character()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create the first person mesh that will be viewed only by this character's owner
	FirstPersonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Mesh"));
	FirstPersonMesh->SetupAttachment(GetMesh());
	FirstPersonMesh->SetOnlyOwnerSee(true);
	FirstPersonMesh->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
	FirstPersonMesh->SetCollisionProfileName(FName("NoCollision"));

	

	// Create the Camera Component	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(FirstPersonMesh, FName("head"));
	FirstPersonCameraComponent->SetRelativeLocationAndRotation(FVector(-2.8f, 5.89f, 0.0f), FRotator(0.0f, 90.0f, -90.0f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bEnableFirstPersonFieldOfView = true;
	FirstPersonCameraComponent->bEnableFirstPersonScale = true;
	FirstPersonCameraComponent->FirstPersonFieldOfView = 70.0f;
	FirstPersonCameraComponent->FirstPersonScale = 0.6f;

	// Create Past Camera Component
	PastCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Past Camera"));
	PastCameraComponent->SetupAttachment(FirstPersonMesh, FName("head"));
	PastCameraComponent->SetRelativeLocation(FVector(3000.f, 0.f, 0.f));
	PastCameraComponent->SetRelativeRotation(FRotator(0.0f, 90.0f, -90.0f));
	PastCameraComponent->bUsePawnControlRotation = true;
	PastCameraComponent->bEnableFirstPersonFieldOfView = true;
	PastCameraComponent->bEnableFirstPersonScale = true;
	PastCameraComponent->FirstPersonFieldOfView = 70.0f;
	PastCameraComponent->FirstPersonScale = 0.6f;


	// configure the character comps
	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::WorldSpaceRepresentation;

	GetCapsuleComponent()->SetCapsuleSize(34.0f, 96.0f);

	// Configure character movement
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->AirControl = 0.5f;



	isInPresent = true;
	isInPast = false;
}

void AGroupProjectY3Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AGroupProjectY3Character::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AGroupProjectY3Character::DoJumpEnd);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGroupProjectY3Character::MoveInput);

		// Looking/Aiming
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGroupProjectY3Character::LookInput);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AGroupProjectY3Character::LookInput);

		EnhancedInputComponent->BindAction(changeTimeAction, ETriggerEvent::Triggered, this, &AGroupProjectY3Character::ChangeTimeline);
	}
	else
	{
		UE_LOG(LogGroupProjectY3, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AGroupProjectY3Character::BeginPlay()
{
	Super::BeginPlay();

	//FVector PresentTargetLocation = FirstPersonCameraComponent->GetComponentLocation();
	//PresentPosition = PresentTargetLocation;

	//if (PastCameraComponent)
	//{
	//	FVector PastTargetLocation = PastCameraComponent->GetComponentLocation();
	//	PastPosition = PastTargetLocation;
	//}
	//else
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("cAMERA NOT SET"));
	//}
}

void AGroupProjectY3Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("TICK IS RUNNING"));

	if (isInPast && WatchController && WatchController->Timer)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Time: " + WatchController->Timer->GetTimeRemaining()));

		if (WatchController->Timer->isTimerFinished)
		{

			FVector CurrentLocation = GetActorLocation();
			CurrentLocation.Z -= 3050.f;

			UE_LOG(LogTemp, Warning, TEXT("Getting Teleported Back"));
			SetActorLocation(CurrentLocation);

			isInPresent = true;
			isInPast = false;


			/*FVector newPosition;

			if (PresentCamera)
			{
				FVector cameraPosition = PresentCamera->GetActorLocation();
				newPosition = cameraPosition;
			}

			UE_LOG(LogTemp, Warning, TEXT("Getting Teleported Back"));
			SetActorLocation(newPosition);

			isInPresent = true;
			isInPast = false;*/
		}
	}
}


void AGroupProjectY3Character::MoveInput(const FInputActionValue& Value)
{
	// get the Vector2D move axis
	FVector2D MovementVector = Value.Get<FVector2D>();

	// pass the axis values to the move input
	DoMove(MovementVector.X, MovementVector.Y);


}

void AGroupProjectY3Character::LookInput(const FInputActionValue& Value)
{
	// get the Vector2D look axis
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// pass the axis values to the aim input
	DoAim(LookAxisVector.X, LookAxisVector.Y);

}

void AGroupProjectY3Character::DoAim(float Yaw, float Pitch)
{
	if (GetController())
	{
		// pass the rotation inputs
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AGroupProjectY3Character::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		// pass the move inputs
		AddMovementInput(GetActorRightVector(), Right);
		AddMovementInput(GetActorForwardVector(), Forward);
	}
}

void AGroupProjectY3Character::DoJumpStart()
{
	// pass Jump to the character
	Jump();
}

void AGroupProjectY3Character::DoJumpEnd()
{
	// pass StopJumping to the character
	StopJumping();
}

void AGroupProjectY3Character::ChangeTimeline()
{
	if (isInPresent)
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation.Z += 3050.f;
		SetActorLocation(CurrentLocation);

		WatchController->Timer->StartTimer();

		isInPresent = false;
		isInPast = true;
	}





	/*else
	{
		FVector TargetLocation = FirstPersonCameraComponent->GetComponentLocation();

		SetActorLocation(TargetLocation);

		isInPresent = true;
		isInPast = false;
	}*/




		/*if (PastCamera)
		{
			FVector cameraPosition = PastCamera->GetActorLocation();
			newPosition = cameraPosition;
		}

		GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(newPosition);

		isInPresent = false;
		isInPast = true;

		if (isInPast && WatchController && WatchController->Timer)
		{
			UE_LOG(LogTemp, Warning, TEXT("Starting Timer"));
			WatchController->Timer->StartTimer();
		}
	}
	else if (isInPast)
	{
		if (PresentCamera)
		{
			FVector cameraPosition = PresentCamera->GetActorLocation();
			newPosition = cameraPosition;
		}



		GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(newPosition);
		isInPresent = true;
		isInPast = false;
	}*/
}


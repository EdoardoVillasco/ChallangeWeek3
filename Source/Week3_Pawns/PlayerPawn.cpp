// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerPawn::MovementTypeOne()
{
	AddActorWorldOffset(ConsumeMovementInputVector());

	AddMovementInput(GetActorForwardVector() * GetInputAxisValue("MoveForward") * MovementSpeed * GetWorld()->DeltaTimeSeconds); 
	AddMovementInput(GetActorRightVector() * GetInputAxisValue("MoveRight") * MovementSpeed * GetWorld()->DeltaTimeSeconds); 
}

void APlayerPawn::MovementTypeTwo()
{
	AddActorWorldOffset;

	float Forward = GetInputAxisValue("MoveForward") * MovementSpeed * GetWorld()->DeltaTimeSeconds;
	float Right = GetInputAxisValue("MoveRight") * MovementSpeed * GetWorld()->DeltaTimeSeconds;

}


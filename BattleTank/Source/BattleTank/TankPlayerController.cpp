// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


ATank* ATankPlayerController::GetControllerTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (GetControllerTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank BeginPlay possing %s"), *GetControllerTank()->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank BeginPlay possing None"));
	}
}


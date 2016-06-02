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
//Tick
//super
//AimTowardsCosshair
void ATankPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UE_LOG(LogTemp, Warning, TEXT("Player TICK REMOVE"));
	//AimTowardsCosshair
	AimTowardsCosshair();
}

void ATankPlayerController::AimTowardsCosshair()
{
	if (!GetControllerTank()) { return; }
	//get woild location
	//ray cast through ui regicule
	//move turret

}
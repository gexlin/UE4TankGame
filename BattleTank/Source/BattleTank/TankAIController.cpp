// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{

	Super::BeginPlay();
	if (GetControllerTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Tank Controller: %s"), *this->GetPawn()->GetName())
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Ai BeginPlay possing None"));
	}

	auto playertank = GetPlayerTank();
	if (playertank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI found player tank Tank Controller: %s"), *playertank->GetName())
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Ai BeginPlay possing None"));
	}
		
}

ATank * ATankAIController::GetControllerTank() const
{
		return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (PlayerPawn)
	{
		return Cast<ATank>(PlayerPawn);
	}
	return nullptr;

}

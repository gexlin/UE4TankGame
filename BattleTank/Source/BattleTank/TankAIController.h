// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "Tank.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
		
	void BeginPlay() override;

public:
	ATank* GetControllerTank() const;
	ATank* GetPlayerTank() const;
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
		ATank* GetControllerTank() const;
	
		virtual void BeginPlay() override;
		virtual void Tick(float DeltaSeconds) override;
		void AimTowardsCosshair();
};

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ChaiOfResp_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CHAIOFRESP_1_API AChaiOfResp_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AChaiOfResp_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AManejadorDeMovimiento* ManejadorDeMovimiento;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AManejadorDeAtaque* ManejadorDeAtaque;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AManejadorDeSalud* ManejadorDeSalud;

private:
	int Accion;

	
};

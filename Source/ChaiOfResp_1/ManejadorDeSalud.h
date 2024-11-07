// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ManejadorBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManejadorDeSalud.generated.h"

UCLASS()
class CHAIOFRESP_1_API AManejadorDeSalud : public AManejadorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AManejadorDeSalud();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void ManejarSolicitud(int _Solicitud) override;

};

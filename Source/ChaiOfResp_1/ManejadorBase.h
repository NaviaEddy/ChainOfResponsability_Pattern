// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IGestorSolicitudes.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManejadorBase.generated.h"

UCLASS()
class CHAIOFRESP_1_API AManejadorBase : public AActor, public IIGestorSolicitudes
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AManejadorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	IIGestorSolicitudes* SiguienteManejador;

public:
	virtual void ManejarSolicitud(int _Solicitud) override;
	virtual void EstablecerSiguienteManejador(IIGestorSolicitudes* _SiguienteManejador) override;


};

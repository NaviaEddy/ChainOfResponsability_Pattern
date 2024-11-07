// Copyright Epic Games, Inc. All Rights Reserved.
#include "ChaiOfResp_1GameModeBase.h"
#include "ManejadorDeMovimiento.h"
#include "ManejadorDeAtaque.h"
#include "ManejadorDeSalud.h"

AChaiOfResp_1GameModeBase::AChaiOfResp_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	Accion = 0;
}

void AChaiOfResp_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	ManejadorDeMovimiento = GetWorld()->SpawnActor<AManejadorDeMovimiento>(AManejadorDeMovimiento::StaticClass());
	ManejadorDeAtaque = GetWorld()->SpawnActor<AManejadorDeAtaque>(AManejadorDeAtaque::StaticClass());
	ManejadorDeSalud = GetWorld()->SpawnActor<AManejadorDeSalud>(AManejadorDeSalud::StaticClass());

	ManejadorDeAtaque->EstablecerSiguienteManejador(ManejadorDeMovimiento);
	ManejadorDeMovimiento->EstablecerSiguienteManejador(ManejadorDeSalud);

	Accion = 1;
	ManejadorDeAtaque->ManejarSolicitud(Accion);
	Accion = 2;
	ManejadorDeAtaque->ManejarSolicitud(Accion);
	Accion = 3;
	ManejadorDeAtaque->ManejarSolicitud(Accion);
	Accion = 4;
	ManejadorDeAtaque->ManejarSolicitud(Accion);

}

void AChaiOfResp_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "ManejadorBase.h"


// Sets default values
AManejadorBase::AManejadorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SiguienteManejador = nullptr;
}

// Called when the game starts or when spawned
void AManejadorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManejadorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AManejadorBase::ManejarSolicitud(int _Solicitud)
{
	SiguienteManejador->ManejarSolicitud(_Solicitud);
}

void AManejadorBase::EstablecerSiguienteManejador(IIGestorSolicitudes* _SiguienteManejador)
{
	SiguienteManejador = _SiguienteManejador;
}


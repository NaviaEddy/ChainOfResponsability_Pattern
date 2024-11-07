// Fill out your copyright notice in the Description page of Project Settings.


#include "ManejadorDeMovimiento.h"

// Sets default values
AManejadorDeMovimiento::AManejadorDeMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AManejadorDeMovimiento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManejadorDeMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AManejadorDeMovimiento::ManejarSolicitud(int _Solicitud)
{
	if (_Solicitud == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Movimiento hacia adelante")));
	}
	else
	{
		SiguienteManejador->ManejarSolicitud(_Solicitud);
	}
}


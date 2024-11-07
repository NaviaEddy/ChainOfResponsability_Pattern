// Fill out your copyright notice in the Description page of Project Settings.


#include "ManejadorDeAtaque.h"

// Sets default values
AManejadorDeAtaque::AManejadorDeAtaque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AManejadorDeAtaque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManejadorDeAtaque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AManejadorDeAtaque::ManejarSolicitud(int _Solicitud)
{
	if (_Solicitud == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Ataque Realizado")));
	}
	else
	{
		SiguienteManejador->ManejarSolicitud(_Solicitud);
	}
}


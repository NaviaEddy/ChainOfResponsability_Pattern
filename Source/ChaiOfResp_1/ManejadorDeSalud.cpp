// Fill out your copyright notice in the Description page of Project Settings.


#include "ManejadorDeSalud.h"

// Sets default values
AManejadorDeSalud::AManejadorDeSalud()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AManejadorDeSalud::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManejadorDeSalud::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AManejadorDeSalud::ManejarSolicitud(int _Solicitud)
{
	if (_Solicitud == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Recuperaste una vida")));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No hay mas manejadores, acceso denegado")));
	}
}


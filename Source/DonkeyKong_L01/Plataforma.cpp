// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
APlataforma::APlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	MeshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshPlataforma;

	// Supongamos que tienes un puntero al actor llamado MyActor
	FVector NewScale(1.5f, 5.0f, 1.0f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);


}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
	
	/*posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 200.0f, 0.0f);
	incrementoY= 2.0f;
	avanzar = false;*/
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if(!avanzar)
	{
		if(posicionActual.Y < posicionFinal.Y)
		{
			posicionActual.Y += incrementoY;
		}
		else
		{
			avanzar = true;
		}
	}
	else
	{
		if(posicionActual.Y > posicionInicial.Y)
		{
			posicionActual.Y -= incrementoY;
		}
		else
		{
			avanzar = false;
		}
	}
	SetActorLocation(posicionActual);*/
}


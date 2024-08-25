// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	MeshEnemigo->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshEnemigo;

	// Supongamos que tienes un puntero al actor llamado MyActor
	FVector NewScale(1.0f, 1.25f, 1.0f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);

	MeshEnemigo->SetSimulatePhysics(true);//SIMULADOR DE FISICAS PARA EL OBJETO
}

void AEnemigo::atacar()
{
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


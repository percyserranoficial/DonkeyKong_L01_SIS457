// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

UCLASS()
class DONKEYKONG_L01_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma();

protected:
	UStaticMeshComponent* MeshPlataforma;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//protected:
//		bool avanzar;
//		FVector posicionInicial;
//		FVector posicionActual;
//		FVector posicionFinal;
//		float incrementoY;

};

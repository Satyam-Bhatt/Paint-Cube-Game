// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorBlocks.h"
#include "Components/StaticMeshComponent.h"
#include "MovementClass.h"

// Sets default values
AColorBlocks::AColorBlocks()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ColorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Color Cube Mesh"));
	RootComponent = ColorMesh;

	MaterialCheck = CreateDefaultSubobject<UMaterialInterface>(TEXT("Material That Should be"));
}

// Called when the game starts or when spawned
void AColorBlocks::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AColorBlocks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int AColorBlocks::NumberSetter()
{
	UMaterialInterface* Material_Mine = ColorMesh->GetMaterial(0);

	if(Material_Mine == MaterialCheck || MaterialMatch == false)
	{
		Universal = 1;
	}
	else{
		Universal = 0;
	}
	return Universal;
}


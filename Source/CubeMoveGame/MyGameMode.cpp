// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "MovementClass.h"
#include "Kismet/GameplayStatics.h"
#include "MyPlayerController.h"

AMyGameMode::AMyGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMyGameMode::BeginPlay()
{
    Super::BeginPlay();

    CubeMovement = Cast<AMovementClass>(UGameplayStatics::GetPlayerPawn(this, 0));
    PlayerController_My = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
}

void AMyGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}



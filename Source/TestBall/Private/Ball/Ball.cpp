// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball/Ball.h"
#include "Components\StaticMeshComponent.h"


ABall::ABall()
{
 
    PrimaryActorTick.bCanEverTick = true;
}


void ABall::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

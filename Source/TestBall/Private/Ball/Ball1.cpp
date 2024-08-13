// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball/Ball1.h"
#include "Components\SphereComponent.h"
#include "Components\TBStaticMeshComponent.h"
#include "GameFramework\ProjectileMovementComponent.h"

// Sets default values
ABall1::ABall1()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    StaticMeshComponent = CreateDefaultSubobject<UTBStaticMeshComponent>("StaticMeshComponent");

    SetRootComponent(StaticMeshComponent);


}

// Called when the game starts or when spawned
void ABall1::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ABall1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

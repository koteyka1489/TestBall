// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/TBStaticMeshComponent.h"

UTBStaticMeshComponent::UTBStaticMeshComponent()
{
    SetSimulatePhysics(true);
}

void UTBStaticMeshComponent::BeginPlay()
{
    Super::BeginPlay();

    OnComponentHit.AddDynamic(this, &UTBStaticMeshComponent::HandleOnHit);
}

void UTBStaticMeshComponent::HandleOnHit(
    UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    UE_LOG(LogTemp, Warning, TEXT("Hit detected!"));
    
    
}



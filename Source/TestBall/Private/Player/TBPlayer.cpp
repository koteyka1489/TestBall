// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TBPlayer.h"

// Sets default values
ATBPlayer::ATBPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATBPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATBPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATBPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

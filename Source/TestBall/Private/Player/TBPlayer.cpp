// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TBPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework\SpringArmComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ATBPlayer::ATBPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent);


   // SphereComponentHead = CreateDefaultSubobject<USphereComponent>("SphereComponent");

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
    PlayerInputComponent->BindAxis("MoveForward", this, &ATBPlayer::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ATBPlayer::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ATBPlayer::AddControllerPitchInput);
    PlayerInputComponent->BindAxis("LookRight", this, &ATBPlayer::AddControllerYawInput);
}

void ATBPlayer::MoveForward(float Amount) 
{
    AddMovementInput(GetActorForwardVector(), Amount);
}

void ATBPlayer::MoveRight(float Amount) 
{
    AddMovementInput(GetActorRightVector(), Amount);
}



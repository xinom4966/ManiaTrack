// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer.h"
#include "ManiaTrackUI.h"

// Sets default values
ATimer::ATimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimer::BeginPlay()
{
	Super::BeginPlay();
	timer = 0.0f;
	playerController = Cast<AManiaTrackPlayerController>(GetWorld()->GetFirstPlayerController());
	
}

// Called every frame
void ATimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	timer += DeltaTime;
	playerController->GetVehicleUI()->UpdateTimer(timer);

}


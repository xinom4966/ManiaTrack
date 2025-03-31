// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint.h"
#include "Components/BoxComponent.h"
#include "ManiaTrackPawn.h"

// Sets default values
ACheckPoint::ACheckPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	defaultSceneRoot = CreateDefaultSubobject<USceneComponent>(FName("DefaultSceneRoot"));
	SetRootComponent(defaultSceneRoot);
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMesh"));
	staticMesh->SetupAttachment(defaultSceneRoot);
	box = CreateDefaultSubobject<UBoxComponent>(FName("Box"));
	box->SetBoxExtent(FVector(74.0f, 125.0f, 100.0f));
	box->SetupAttachment(staticMesh);
	box->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
}

// Called when the game starts or when spawned
void ACheckPoint::BeginPlay()
{
	Super::BeginPlay();
	box->OnComponentBeginOverlap.AddDynamic(this, &ACheckPoint::OverlapBegin);
	isActivated = false;
	
}

// Called every frame
void ACheckPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckPoint::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AManiaTrackPawn* pawn = Cast<AManiaTrackPawn>(OtherActor);
	if (pawn->isReset) {
		pawn->isReset = false;
		isActivated = false;
	}
	if (isActivated) {
		return;
	}
	
	if (!IsValid(pawn)) {
		return;
	}
	pawn->SetCheckPoint();
	isActivated = true;
}


// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ManiaTrackPawn.h"
#include "ManiaTrackSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class MANIATRACK_API AManiaTrackSportsCar : public AManiaTrackPawn
{
	GENERATED_BODY()
	
public:

	AManiaTrackSportsCar();
};

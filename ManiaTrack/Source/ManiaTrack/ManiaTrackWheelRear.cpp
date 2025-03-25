// Copyright Epic Games, Inc. All Rights Reserved.

#include "ManiaTrackWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UManiaTrackWheelRear::UManiaTrackWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}
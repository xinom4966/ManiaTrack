// Copyright Epic Games, Inc. All Rights Reserved.

#include "ManiaTrackWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UManiaTrackWheelFront::UManiaTrackWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}
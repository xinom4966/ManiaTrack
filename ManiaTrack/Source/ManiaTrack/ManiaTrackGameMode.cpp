// Copyright Epic Games, Inc. All Rights Reserved.

#include "ManiaTrackGameMode.h"
#include "ManiaTrackPlayerController.h"

AManiaTrackGameMode::AManiaTrackGameMode()
{
	PlayerControllerClass = AManiaTrackPlayerController::StaticClass();
}

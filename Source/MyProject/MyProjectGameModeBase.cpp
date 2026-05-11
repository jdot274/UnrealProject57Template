// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectGameModeBase.h"

AMyProjectGameModeBase::AMyProjectGameModeBase()
{
	// Default game mode constructor.
	// Override DefaultPawnClass, PlayerControllerClass, etc. in derived Blueprints or here.
	PrimaryActorTick.bCanEverTick = false;
}

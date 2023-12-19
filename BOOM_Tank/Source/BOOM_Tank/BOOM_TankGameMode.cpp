// Copyright Epic Games, Inc. All Rights Reserved.

#include "BOOM_TankGameMode.h"
#include "BOOM_TankCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABOOM_TankGameMode::ABOOM_TankGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

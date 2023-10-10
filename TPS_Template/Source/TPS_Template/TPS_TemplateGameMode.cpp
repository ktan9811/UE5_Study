// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS_TemplateGameMode.h"
#include "TPS_TemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_TemplateGameMode::ATPS_TemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "meMaGameMode.h"
#include "meMaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmeMaGameMode::AmeMaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

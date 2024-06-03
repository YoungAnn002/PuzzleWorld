// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleWorldGameMode.h"
#include "PuzzleWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleWorldGameMode::APuzzleWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

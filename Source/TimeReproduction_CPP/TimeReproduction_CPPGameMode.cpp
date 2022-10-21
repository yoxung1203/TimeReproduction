// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimeReproduction_CPPGameMode.h"
#include "TimeReproduction_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeReproduction_CPPGameMode::ATimeReproduction_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

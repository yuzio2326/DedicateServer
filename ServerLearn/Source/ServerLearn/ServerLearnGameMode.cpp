// Copyright Epic Games, Inc. All Rights Reserved.

#include "ServerLearnGameMode.h"
#include "ServerLearnCharacter.h"
#include "UObject/ConstructorHelpers.h"

AServerLearnGameMode::AServerLearnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

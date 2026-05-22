// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue5MultiplayerGameMode.h"
#include "ue5MultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue5MultiplayerGameMode::Aue5MultiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

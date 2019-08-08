// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4DedicatedServerGameMode.h"
#include "UE4DedicatedServerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4DedicatedServerGameMode::AUE4DedicatedServerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnotherGoGameMode.h"
#include "AnotherGoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnotherGoGameMode::AAnotherGoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

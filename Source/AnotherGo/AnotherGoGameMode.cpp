// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnotherGoGameMode.h"
#include "AnotherGoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnotherGoGameMode::AAnotherGoGameMode() : aString(TEXT("No Text"))
{
	/*
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	*/
	
}

void AAnotherGoGameMode::StartPlay() {

	Super::StartPlay();

	check(GEngine != nullptr);
}

void AAnotherGoGameMode::AFunction() {

	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Yellow, aString);
}

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AnotherGoGameMode.generated.h"

UCLASS()
class AAnotherGoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAnotherGoGameMode();

	virtual void StartPlay() override;

	UPROPERTY(EditAnywhere)
		FString aString;

	UFUNCTION(BlueprintCallable, Category = "Class Functions")
		void AFunction();

	UFUNCTION(BlueprintCallable, Category = "Class Functions")
		void SecondFunction();
};




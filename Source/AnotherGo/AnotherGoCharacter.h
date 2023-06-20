// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "AnotherGoCharacter.generated.h"

UCLASS(config=Game)
class AAnotherGoCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAnotherGoCharacter();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCameraComponent* mainCam;
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
		class USkeletalMeshComponent* skelMesh;
	UPROPERTY(BlueprintReadOnly)
		bool isTrackingRagdoll{ false };

	UFUNCTION(BlueprintCallable)
		void trackRagdoll();


private:
	
	UAnimInstance* animation;

};


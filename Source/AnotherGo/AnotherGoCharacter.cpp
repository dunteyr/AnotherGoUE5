// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnotherGoCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AAnotherGoCharacter

AAnotherGoCharacter::AAnotherGoCharacter()
{
	

}


void AAnotherGoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (isTrackingRagdoll)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, );
	}
}


void AAnotherGoCharacter::trackRagdoll()
{
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Made it to trackRagdoll()");

	check(mainCam != nullptr);

	if (mainCam != nullptr) 
	{
		check(skelMesh != nullptr);

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Main cam ref working");

		isTrackingRagdoll = true;
		auto springArm = mainCam->GetAttachParent();
		springArm->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
		springArm->AttachToComponent(skelMesh, FAttachmentTransformRules::KeepRelativeTransform, "HeadSocket");
		springArm->SetRelativeLocation(springArm->GetRelativeLocation() + FVector(0.0, 4.0, 0.0));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Main cam ref not working");
	}
}

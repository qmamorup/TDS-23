// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDS23GameMode.h"
#include "TDS23PlayerController.h"
#include "TDS23Character.h"
#include "UObject/ConstructorHelpers.h"

ATDS23GameMode::ATDS23GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATDS23PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
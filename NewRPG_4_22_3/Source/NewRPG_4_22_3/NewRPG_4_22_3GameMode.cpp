// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NewRPG_4_22_3GameMode.h"
#include "NewRPG_4_22_3PlayerController.h"
#include "NewRPG_4_22_3Character.h"
#include "UObject/ConstructorHelpers.h"

ANewRPG_4_22_3GameMode::ANewRPG_4_22_3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ANewRPG_4_22_3PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
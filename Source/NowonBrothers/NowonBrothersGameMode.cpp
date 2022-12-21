// Copyright Epic Games, Inc. All Rights Reserved.

#include "NowonBrothersGameMode.h"
#include "NowonBrothersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANowonBrothersGameMode::ANowonBrothersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

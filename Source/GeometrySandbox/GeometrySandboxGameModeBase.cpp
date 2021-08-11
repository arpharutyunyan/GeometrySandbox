
// Copyright Epic Games, Inc. All Rights Reserved.


#include "GeometrySandboxGameModeBase.h"
#include "SandboxPawn.h"

AGeometrySandboxGameModeBase::AGeometrySandboxGameModeBase() {
	DefaultPawnClass = ASandboxPawn::StaticClass();
}


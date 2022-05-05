// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ELogCategory.generated.h"

UENUM(BlueprintType)
enum class UELogCategory : uint8
{
	SDK,
	Gameplay,
	Multiplayer,
	Items,
	SaveSystem,
	Physics,
	Loading,
	Misc,
	MAX
};

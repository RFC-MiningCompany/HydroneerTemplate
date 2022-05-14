// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EFileSaveMethod.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EFileSaveMethod : uint8
{
	FM_Legacy UMETA(DisplayName = "FM_Legacy"),
	FM_Optimized UMETA(DisplayName = "FM_Optimized"),
	FM_MAX UMETA(DisplayName = "FM_MAX")
};

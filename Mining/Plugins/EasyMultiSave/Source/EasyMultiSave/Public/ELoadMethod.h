// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ELoadMethod.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ELoadMethod : uint8
{
  LM_Default UMETA(DisplayName = "LM_Default"),
  LM_Deferred UMETA(DisplayName = "LM_Deferred"),
  LM_Thread UMETA(DisplayName = "LM_Thread"),
  LM_MAX UMETA(DisplayName = "LM_MAX")
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CGameInstance.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MINING_API UCGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Discord Run Callbacks", Keywords = "EasyMultiSave Discord Run Callbacks"), Category = "Mining")
	void DiscordRunCallbacks();
};

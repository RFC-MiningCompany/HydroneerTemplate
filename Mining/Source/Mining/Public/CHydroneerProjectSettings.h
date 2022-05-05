// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CHydroneerProjectSettings.generated.h"

/**
 * 
 */
UCLASS(Config=Game)
class MINING_API UCHydroneerProjectSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Config)
	bool                                                       bDebugMainMenu;

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Hydroneer Project Settings", Keywords = "EasyMultiSave Get Hydroneer Project Settings"), Category = "Mining")
	static UCHydroneerProjectSettings* Get();
};

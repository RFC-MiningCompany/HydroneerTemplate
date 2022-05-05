// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EMSCustomSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class EASYMULTISAVE_API UEMSCustomSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FString SaveGameName;

	UPROPERTY()
	bool bUseSaveSlot; 
};

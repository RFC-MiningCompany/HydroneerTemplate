// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSaveSlotInfo.h"
#include "GameFramework/SaveGame.h"
#include "EMSProfileSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class EASYMULTISAVE_API UEMSProfileSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	FSaveSlotInfo SlotInfo;
};

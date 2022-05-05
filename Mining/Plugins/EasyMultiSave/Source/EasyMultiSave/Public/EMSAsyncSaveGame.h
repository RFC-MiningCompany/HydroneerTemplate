// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class EASYMULTISAVE_API UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	DECLARE_EVENT( UEMSAsyncSaveGame, FScriptMulticastDelegate )
	FScriptMulticastDelegate OnCompleted;
	
	UEMSAsyncSaveGame* AsyncSaveActors(UObject* WorldContextObject, int32_t Data);
};

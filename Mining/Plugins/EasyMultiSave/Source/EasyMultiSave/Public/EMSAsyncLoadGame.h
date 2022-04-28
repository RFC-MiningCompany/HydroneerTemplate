// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncLoadGame.generated.h"

/**
 * 
 */
UCLASS()
class EASYMULTISAVE_API UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()	
public:
	DECLARE_EVENT( UEMSAsyncLoadGame, FScriptMulticastDelegate )
	FScriptMulticastDelegate OnCompleted;

	UEMSAsyncLoadGame* AsyncLoadActors(UObject* WorldContextObject, int32_t Data, bool bFullReload);
};

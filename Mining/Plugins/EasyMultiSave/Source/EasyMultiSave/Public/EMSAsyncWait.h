// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncWait.generated.h"

/**
 * 
 */
UCLASS()
class EASYMULTISAVE_API UEMSAsyncWait : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	DECLARE_EVENT( UEMSAsyncWait, FScriptMulticastDelegate )
	FScriptMulticastDelegate OnCompleted;
	
	UEMSAsyncWait* AsyncWaitForOperation(UObject* WorldContextObject);
};

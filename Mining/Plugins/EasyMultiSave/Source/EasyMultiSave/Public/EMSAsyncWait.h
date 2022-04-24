// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncWait.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncWaitMulticastDelegate);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncWait : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FAsyncWaitMulticastDelegate OnCompleted;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EasyMultiSave")
	static UEMSAsyncWait* AsyncWaitForOperation(UObject* WorldContextObject);
};

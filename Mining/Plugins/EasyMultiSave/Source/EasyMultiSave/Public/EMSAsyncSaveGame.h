// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESaveTypeFlags.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncSaveGame.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncSaveGameMulticastDelegate);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FAsyncSaveGameMulticastDelegate OnCompleted;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EasyMultiSave")
	static UEMSAsyncSaveGame* AsyncSaveActors(UObject* WorldContextObject, ESaveTypeFlags Data);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ELoadTypeFlags.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncLoadGame.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncLoadGameMulticastDelegate);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()	
public:
	UPROPERTY(BlueprintAssignable)
	FAsyncLoadGameMulticastDelegate OnCompleted;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EasyMultiSave")
	static UEMSAsyncLoadGame* AsyncLoadActors(UObject* WorldContextObject, ELoadTypeFlags Data, bool bFullReload);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncPakDownloader.generated.h"

/**
 * 
 */
UCLASS()
class PAKLOADER_API UAsyncPakDownloader : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	DECLARE_MULTICAST_DELEGATE(FScriptMulticastDelegate)
	
	FScriptMulticastDelegate                             OnSuccess;
	
	FScriptMulticastDelegate                             OnFail;

	FScriptMulticastDelegate                             OnProgress;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Download Pak", Keywords = "PakLoader Download Pak"), Category = "PakLoader|Download")
	static UAsyncPakDownloader* DownloadPak(const FString& URL, const FString& SavePath);
};
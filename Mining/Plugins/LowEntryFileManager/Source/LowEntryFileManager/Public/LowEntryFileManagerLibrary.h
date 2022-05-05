// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LowEntryFileManagerLibrary.generated.h"

UCLASS()
class ULowEntryFileManagerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Files", Keywords = "LowEntryFileManager Get Files"), Category = "LowEntryFileManager")
	static TArray<FString> GetFiles(const FString& Directory);
};
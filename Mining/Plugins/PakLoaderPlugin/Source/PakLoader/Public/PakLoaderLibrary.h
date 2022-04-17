// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PakLoaderLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PAKLOADER_API UPakLoaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Class", Keywords = "PakLoader Get Pak File Class"), Category = "PakLoader")
	static UClass *GetPakFileClass(const FString& Filename);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Mounted Pak Filenames", Keywords = "PakLoader Get Mounted Pak Filenames"), Category = "PakLoader")
	TArray<FString> GetMountedPakFilenames();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Mount Pak File", Keywords = "PakLoader Mount Pak File"), Category = "PakLoader")
	bool MountPakFile(const FString& PakFilename, const FString& MountPath);
};

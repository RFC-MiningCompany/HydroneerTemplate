// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CHydroneerLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MINING_API UCHydroneerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "String To ClassRef", Keywords = "Mining String To ClassRef"), Category = "Mining")
	bool StringToClassRef(const FString& ClassStringName, UClass* OutClass);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sanitize String", Keywords = "Mining Sanitize String"), Category = "Mining")
	FString SanitizeString(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Rename Save", Keywords = "Mining Rename Save"), Category = "Mining")
	bool RenameSave(const FString& OriginalSaveName, const FString& NewSaveName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Reload Input", Keywords = "Mining Reload Input"), Category = "Mining")
	void ReloadInput(bool bReload);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Save Directory", Keywords = "Mining Get Save Directory"), Category = "Mining")
	FString GetSaveDirectory();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Save Backup Names", Keywords = "Mining Get Save Backup Names"), Category = "Mining")
	void GetSaveBackupNames(const FString& SaveName, TArray<FString>& OutBackups);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Highest Current Save Index", Keywords = "Mining Get Highest Current Save Index"), Category = "Mining")
	int32 GetHighestCurrentSaveIndex(const FString& SaveName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Appdata Local Dir", Keywords = "Mining Get Appdata Local Dir"), Category = "Mining")
	FString GetAppdataLocalDir();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Find Folders", Keywords = "Mining Find Folders"), Category = "Mining")
	TArray<FString> FindFolders(const FString& FilePath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy Over Directory", Keywords = "Mining Copy Over Directory"), Category = "Mining")
	void CopyOverDirectory(const FString& OldDirectory, const FString& NewDirectory);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Backup Save", Keywords = "Mining Backup Save"), Category = "Mining")
	void BackupSave(const FString& SaveName, bool bIncrementSave, int32 MaxIncrements);
};

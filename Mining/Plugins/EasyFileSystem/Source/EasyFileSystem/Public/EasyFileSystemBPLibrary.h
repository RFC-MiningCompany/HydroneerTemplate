// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EasyFileSystemBPLibrary.generated.h"

UCLASS()
class UEasyFileSystemBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Read Only", Keywords = "EasyFileSystem Set Read Only"), Category = "EasyFileSystem")
	static bool SetReadOnly(const FString& inPath, bool bNewReadOnlyValue);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save String To File", Keywords = "EasyFileSystem Save String To File"), Category = "EasyFileSystem")
	static bool SaveStringToFile(const FString& inPath, const FString& textData);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Array To File", Keywords = "EasyFileSystem Save Array To File"), Category = "EasyFileSystem")
	static bool SaveArrayToFile(const FString& inPath, TArray<uint8> Array);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Move File", Keywords = "EasyFileSystem Move File"), Category = "EasyFileSystem")
	static bool MoveFile(const FString& to, const FString& from);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Load File To String", Keywords = "EasyFileSystem Load File To String"), Category = "EasyFileSystem")
	static FString LoadFileToString(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Load File To Array", Keywords = "EasyFileSystem Load File To Array"), Category = "EasyFileSystem")
	static bool LoadFileToArray(const FString& inPath, TArray<uint8> Result);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Read Only", Keywords = "EasyFileSystem Is Read Only"), Category = "EasyFileSystem")
	static bool IsReadOnly(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get String Field Json", Keywords = "EasyFileSystem Get String Field Json"), Category = "EasyFileSystem")
	static FString GetStringFieldJson(const FString& Data, const FString& fieldName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Source Dir", Keywords = "EasyFileSystem Get Source Dir"), Category = "EasyFileSystem")
	static FString GetSourceDir();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Size File", Keywords = "EasyFileSystem Get Size File"), Category = "EasyFileSystem")
	static int32 GetSizeFile(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Project File Path", Keywords = "EasyFileSystem Get Project File Path"), Category = "EasyFileSystem")
	static FString GetProjectFilePath();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Integer Field Json", Keywords = "EasyFileSystem Get Integer Field Json"), Category = "EasyFileSystem")
	static int32 GetIntegerFieldJson(const FString& Data, const FString& fieldName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Filename On Disk", Keywords = "EasyFileSystem Get Filename On Disk"), Category = "EasyFileSystem")
	static FString GetFilenameOnDisk(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Extension", Keywords = "EasyFileSystem Get Extension"), Category = "EasyFileSystem")
	static FString GetExtension(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Engine Dir", Keywords = "EasyFileSystem Get Engine Dir"), Category = "EasyFileSystem")
	static FString GetEngineDir();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Bool Field Json", Keywords = "EasyFileSystem Get Bool Field Json"), Category = "EasyFileSystem")
	static bool GetBoolFieldJson(const FString& Data, const FString& fieldName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Find Files", Keywords = "EasyFileSystem Find Files"), Category = "EasyFileSystem")
	static TArray<FString> FindFiles(const FString& Directory, const FString& fileExtension);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "File Exists", Keywords = "EasyFileSystem File Exists"), Category = "EasyFileSystem")
	static bool FileExists(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Directory Exists", Keywords = "EasyFileSystem Directory Exists"), Category = "EasyFileSystem")
	static bool DirectoryExists(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete File", Keywords = "EasyFileSystem Delete File"), Category = "EasyFileSystem")
	static bool DeleteFile(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Directory", Keywords = "EasyFileSystem Delete Directory"), Category = "EasyFileSystem")
	static bool DeleteDirectory(const FString& Directory);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Directory", Keywords = "EasyFileSystem Create Directory"), Category = "EasyFileSystem")
	static bool CreateDirectory(const FString& inPath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy File", Keywords = "EasyFileSystem Copy File"), Category = "EasyFileSystem")
	static bool CopyFile(const FString& to, const FString& from);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy Directory Tree", Keywords = "EasyFileSystem Copy Directory Tree"), Category = "EasyFileSystem")
	static bool CopyDirectoryTree(const FString& destinationDirectory, const FString& Source, bool bOverwriteAllExisting);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Change Extension", Keywords = "EasyFileSystem Change Extension"), Category = "EasyFileSystem")
	static FString ChangeExtension(const FString& inPath, const FString& inNewExtension);
};

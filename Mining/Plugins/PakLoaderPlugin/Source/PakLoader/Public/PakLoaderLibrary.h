// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Materials/MaterialInstanceConstant.h"
#include "PakLoaderLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PAKLOADER_API UPakLoaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Un Register Mount Point", Keywords = "PakLoader Un Register Mount Point"), Category = "PakLoader")
	static void UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unmount Pak File", Keywords = "PakLoader Unmount Pak File"), Category = "PakLoader")
	static bool UnmountPakFile(const FString& PakFilename);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Try Convert Filename To Long Package Name", Keywords = "PakLoader Try Convert Filename To Long Package Name"), Category = "PakLoader")
	static bool TryConvertFilenameToLongPackageName(const FString& Filename, FString PackageName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "SHA1SUM", Keywords = "PakLoader SHA1SUM"), Category = "PakLoader")
	static FString SHA1SUM(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Runtime Log", Keywords = "PakLoader Runtime Log"), Category = "PakLoader")
	static void RuntimeLog(const FString& Text);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Register Mount Point", Keywords = "PakLoader Register Mount Point"), Category = "PakLoader")
	static void RegisterMountPoint(const FString& RootPath, const FString& ContentPath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Register Encryption Key", Keywords = "PakLoader Register Encryption Key"), Category = "PakLoader")
	static bool RegisterEncryptionKey(const FString& Guid, const FString& AesKey);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Project Persistent Download Dir", Keywords = "PakLoader Project Persistent Download Dir"), Category = "PakLoader")
	static FString ProjectPersistentDownloadDir();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Mount Pak File", Keywords = "PakLoader Mount Pak File"), Category = "PakLoader")
	static bool MountPakFile(const FString& PakFilename, const FString& MountPath);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Pak Asset Registry File", Keywords = "PakLoader Load Pak Asset Registry File"), Category = "PakLoader")
	static void LoadPakAssetRegistryFile(const FString& AssetRegistryFile);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid Pak File", Keywords = "PakLoader Is Valid Pak File"), Category = "PakLoader")
	static bool IsValidPakFile(const FString& PakFilename, int64 PakSize);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Packaged Build", Keywords = "PakLoader Is Packaged Build"), Category = "PakLoader")
	static bool IsPackagedBuild();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Short Name", Keywords = "PakLoader Get Short Name"), Category = "PakLoader")
	static FString GetShortName(const FString& LongName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Project Name", Keywords = "PakLoader Get Project Name"), Category = "PakLoader")
	static FString GetProjectName();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Texture 2D", Keywords = "PakLoader Get Pak File Texture 2D"), Category = "PakLoader")
	static UTexture2D* GetPakFileTexture2D(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Text", Keywords = "PakLoader Get Pak File Text"), Category = "PakLoader")
	static bool GetPakFileText(const FString& Filename, FString String);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Static Mesh", Keywords = "PakLoader Get Pak File Static Mesh"), Category = "PakLoader")
	static UStaticMesh* GetPakFileStaticMesh(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Sound", Keywords = "PakLoader Get Pak File Sound"), Category = "PakLoader")
	static USoundBase* GetPakFileSound(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Skeletal Mesh", Keywords = "PakLoader Get Pak File Skeletal Mesh"), Category = "PakLoader")
	static USkeletalMesh* GetPakFileSkeletalMesh(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Object", Keywords = "PakLoader Get Pak File Object"), Category = "PakLoader")
	static UObject* GetPakFileObject(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Material Instance Constant", Keywords = "PakLoader Get Pak File Material Instance Constant"), Category = "PakLoader")
	static UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Material", Keywords = "PakLoader Get Pak File Material"), Category = "PakLoader")
	static UMaterial* GetPakFileMaterial(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Class", Keywords = "PakLoader Get Pak File Class"), Category = "PakLoader")
	static UClass *GetPakFileClass(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Pak File Anim Sequence", Keywords = "PakLoader Get Pak File Anim Sequence"), Category = "PakLoader")
	static UAnimSequence* GetPakFileAnimSequence(const FString& Filename);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Mounted Pak Filenames", Keywords = "PakLoader Get Mounted Pak Filenames"), Category = "PakLoader")
	static TArray<FString> GetMountedPakFilenames();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Files In Pak Directory", Keywords = "PakLoader Get Files In Pak Directory"), Category = "PakLoader")
	static TArray<FString> GetFilesInPakDirectory(const FString& PakDirectory, bool bRecursively);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Files In Pak", Keywords = "PakLoader Get Files In Pak"), Category = "PakLoader")
	static TArray<FString> GetFilesInPak(const FString& PakFilename, bool bUAssetOnly);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Enable Runtime Log", Keywords = "PakLoader Enable Runtime Log"), Category = "PakLoader")
	static void EnableRuntimeLog(bool bEnable, const FString& NewLogPath);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Does Pak Directory Exist", Keywords = "PakLoader Does Pak Directory Exist"), Category = "PakLoader")
	static bool DoesPakDirectoryExist(const FString& PakDirectory);
};

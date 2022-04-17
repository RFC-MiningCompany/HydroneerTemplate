// Fill out your copyright notice in the Description page of Project Settings.


#include "PakLoaderLibrary.h"

UClass *UPakLoaderLibrary::GetPakFileClass(const FString& Filename) {
	return AActor::StaticClass();
}

UAnimSequence* UPakLoaderLibrary::GetPakFileAnimSequence(const FString& Filename)
{
	return nullptr;
}

TArray<FString> UPakLoaderLibrary::GetMountedPakFilenames() {
	return TArray<FString>();
}

TArray<FString> UPakLoaderLibrary::GetFilesInPakDirectory(const FString& PakDirectory, bool bRecursively)
{
	return TArray<FString>();
}

TArray<FString> UPakLoaderLibrary::GetFilesInPak(const FString& PakFilename, bool bUAssetOnly)
{
	return TArray<FString>();
}

void UPakLoaderLibrary::EnableRuntimeLog(bool bEnable, const FString& NewLogPath)
{}

bool UPakLoaderLibrary::DoesPakDirectoryExist(const FString& PakDirectory)
{
	return true;
}

void UPakLoaderLibrary::UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath)
{}

bool UPakLoaderLibrary::UnmountPakFile(const FString& PakFilename)
{
	return true;
}

bool UPakLoaderLibrary::TryConvertFilenameToLongPackageName(const FString& Filename, FString PackageName)
{
	return true;
}

FString UPakLoaderLibrary::SHA1SUM(const FString& Filename)
{
	return FString();
}

void UPakLoaderLibrary::RuntimeLog(const FString& Text)
{}

void UPakLoaderLibrary::RegisterMountPoint(const FString& RootPath, const FString& ContentPath)
{}

bool UPakLoaderLibrary::RegisterEncryptionKey(const FString& Guid, const FString& AesKey)
{
	return true;
}

FString UPakLoaderLibrary::ProjectPersistentDownloadDir()
{
	return FString();
}

bool UPakLoaderLibrary::MountPakFile(const class FString& PakFilename, const class FString& MountPath) {
	return true;
}

void UPakLoaderLibrary::LoadPakAssetRegistryFile(const FString& AssetRegistryFile)
{}

bool UPakLoaderLibrary::IsValidPakFile(const FString& PakFilename, int64 PakSize)
{
	return true;
}

bool UPakLoaderLibrary::IsPackagedBuild()
{
	return true;
}

FString UPakLoaderLibrary::GetShortName(const FString& LongName)
{
	return FString();
}

FString UPakLoaderLibrary::GetProjectName()
{
	return FString();
}

UTexture2D* UPakLoaderLibrary::GetPakFileTexture2D(const FString& Filename)
{
	return nullptr;
}

bool UPakLoaderLibrary::GetPakFileText(const FString& Filename, FString String)
{
	return true;
}

UStaticMesh* UPakLoaderLibrary::GetPakFileStaticMesh(const FString& Filename)
{
	return nullptr;
}

USoundBase* UPakLoaderLibrary::GetPakFileSound(const FString& Filename)
{
	return nullptr;
}

USkeletalMesh* UPakLoaderLibrary::GetPakFileSkeletalMesh(const FString& Filename)
{
	return nullptr;
}

UObject* UPakLoaderLibrary::GetPakFileObject(const FString& Filename)
{
	return nullptr;
}

UMaterialInstanceConstant* UPakLoaderLibrary::GetPakFileMaterialInstanceConstant(const FString& Filename)
{
	return nullptr;
}

UMaterial* UPakLoaderLibrary::GetPakFileMaterial(const FString& Filename)
{
	return nullptr;
}

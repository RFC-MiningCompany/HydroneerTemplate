// Fill out your copyright notice in the Description page of Project Settings.


#include "CHydroneerLibrary.h"

bool UCHydroneerLibrary::StringToClassRef(const FString& ClassStringName, UClass* OutClass)
{
	return true;
}

FString UCHydroneerLibrary::SanitizeString(const FString& Filename)
{
	return FString();
}

bool UCHydroneerLibrary::RenameSave(const FString& OriginalSaveName, const FString& NewSaveName)
{
	return true;
}

void UCHydroneerLibrary::ReloadInput(bool bReload)
{}

FString UCHydroneerLibrary::GetSaveDirectory()
{
	return FString();
}

void UCHydroneerLibrary::GetSaveBackupNames(const FString& SaveName, TArray<FString>& OutBackups)
{}

int32 UCHydroneerLibrary::GetHighestCurrentSaveIndex(const FString& SaveName)
{
	return 0;
}

FString UCHydroneerLibrary::GetAppdataLocalDir()
{
	return FString();
}

TArray<FString> UCHydroneerLibrary::FindFolders(const FString& FilePath)
{
	return TArray<FString>();
}

void UCHydroneerLibrary::CopyOverDirectory(const FString& OldDirectory, const FString& NewDirectory)
{}

void UCHydroneerLibrary::BackupSave(const FString& SaveName, bool bIncrementSave, int32 MaxIncrements)
{}

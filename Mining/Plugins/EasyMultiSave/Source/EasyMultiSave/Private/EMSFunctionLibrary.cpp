// Fill out your copyright notice in the Description page of Project Settings.


#include "EMSFunctionLibrary.h"

void UEMSFunctionLibrary::SetCurrentSaveUserName(const FString& Username)
{}

void UEMSFunctionLibrary::SetCurrentSaveGameName(const FString& SaveGameName)
{}

void UEMSFunctionLibrary::SetActorSaveProperties(bool bSkipSave, bool bPersistent, bool bSkipTransform)
{}

bool UEMSFunctionLibrary::SavePersistentObject()
{
	return true;
}

bool UEMSFunctionLibrary::SaveLocalProfile()
{
	return true;
}

bool UEMSFunctionLibrary::SaveCustom(UEMSCustomSaveGame* SaveGame)
{
	return true;
}

bool UEMSFunctionLibrary::IsSavingOrLoading()
{
	return true;
}

UTexture2D* UEMSFunctionLibrary::ImportSaveThumbnail(const FString& SaveGameName)
{
	UTexture2D* dummy = nullptr;
	return dummy;
}

TArray<FString> UEMSFunctionLibrary::GetSortedSaveSlots()
{
	return TArray<FString>();
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetSlotInfoSaveGame(FString SaveGameName)
{
	UEMSInfoSaveGame* dummy = nullptr;
	return dummy;
}

UEMSPersistentSaveGame* UEMSFunctionLibrary::GetPersistentSave()
{
	UEMSPersistentSaveGame* dummy = nullptr;
	return dummy;
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetNamedSlotInfo(const FString& SaveGameName)
{
	UEMSInfoSaveGame* dummy = nullptr;
	return dummy;
}

UEMSProfileSaveGame* UEMSFunctionLibrary::GetLocalProfileSaveGame()
{
	UEMSProfileSaveGame* dummy = nullptr;
	return dummy;
}

UEMSCustomSaveGame* UEMSFunctionLibrary::GetCustomSave(UClass* SaveGameClass)
{
	UEMSCustomSaveGame* dummy = nullptr;
	return dummy;
}

TArray<FString> UEMSFunctionLibrary::GetAllSaveUsers()
{
	return TArray<FString>();
}

void UEMSFunctionLibrary::ExportSaveThumbnail(UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName)
{}

bool UEMSFunctionLibrary::DoesSaveSlotExist(const FString& SaveGameName)
{
	return true;
}

void UEMSFunctionLibrary::DeleteSaveUser(const FString& Username)
{}

void UEMSFunctionLibrary::DeleteLocalProfile()
{}

void UEMSFunctionLibrary::DeleteCustomSave(UEMSCustomSaveGame* SaveGame)
{}

void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(const FString& SaveGameName)
{}
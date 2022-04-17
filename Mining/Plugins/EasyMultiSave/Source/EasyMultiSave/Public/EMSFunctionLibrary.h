#pragma once

#include "CoreMinimal.h"
#include "EMSCustomSaveGame.h"
#include "EMSInfoSaveGame.h"
#include "EMSPersistentSaveGame.h"
#include "EMSProfileSaveGame.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMSFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EASYMULTISAVE_API UEMSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Current SaveUser Name", Keywords = "EasyMultiSave Set Current SaveUser Name"), Category = "EasyMultiSave")
	void SetCurrentSaveUserName(const FString& Username);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Current SaveGame Name", Keywords = "EasyMultiSave Set Current SaveGame Name"), Category = "EasyMultiSave")
	void SetCurrentSaveGameName(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Actor SaveProperties", Keywords = "EasyMultiSave Set Actor SaveProperties"), Category = "EasyMultiSave")
	void SetActorSaveProperties(bool bSkipSave, bool bPersistent, bool bSkipTransform);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Persistent Object", Keywords = "EasyMultiSave Save Persistent Object"), Category = "EasyMultiSave")
	bool SavePersistentObject();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Local Profile", Keywords = "EasyMultiSave Save Local Profile"), Category = "EasyMultiSave")
	bool SaveLocalProfile();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Custom", Keywords = "EasyMultiSave Save Custom"), Category = "EasyMultiSave")
	bool SaveCustom(UEMSCustomSaveGame* SaveGame);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Saving Or Loading", Keywords = "EasyMultiSave Is Saving Or Loading"), Category = "EasyMultiSave")
	bool IsSavingOrLoading();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Import Save Thumbnail", Keywords = "EasyMultiSave Import Save Thumbnail"), Category = "EasyMultiSave")
	UTexture2D* ImportSaveThumbnail(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Sorted Save Slots", Keywords = "EasyMultiSave Get Sorted Save Slots"), Category = "EasyMultiSave")
	TArray<FString> GetSortedSaveSlots();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Slot Info SaveGame", Keywords = "EasyMultiSave Get Slot Info SaveGame"), Category = "EasyMultiSave")
	UEMSInfoSaveGame* GetSlotInfoSaveGame(FString SaveGameName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Persistent Save", Keywords = "EasyMultiSave Get Persistent Save"), Category = "EasyMultiSave")
	UEMSPersistentSaveGame* GetPersistentSave();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Named SlotInfo", Keywords = "EasyMultiSave Get Named SlotInfo"), Category = "EasyMultiSave")
	UEMSInfoSaveGame* GetNamedSlotInfo(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get LocalProfile SaveGame", Keywords = "EasyMultiSave Get LocalProfile SaveGame"), Category = "EasyMultiSave")
	UEMSProfileSaveGame* GetLocalProfileSaveGame();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Custom Save", Keywords = "EasyMultiSave Get Custom Save"), Category = "EasyMultiSave")
	UEMSCustomSaveGame* GetCustomSave(UClass* SaveGameClass);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get All Save Users", Keywords = "EasyMultiSave Get All Save Users"), Category = "EasyMultiSave")
	TArray<FString> GetAllSaveUsers();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Export Save Thumbnail", Keywords = "EasyMultiSave Export Save Thumbnail"), Category = "EasyMultiSave")
	void ExportSaveThumbnail(UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Does Save Slot Exist", Keywords = "EasyMultiSave Does Save Slot Exist"), Category = "EasyMultiSave")
	bool DoesSaveSlotExist(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Save User", Keywords = "EasyMultiSave Delete Save User"), Category = "EasyMultiSave")
	void DeleteSaveUser(const FString& Username);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Local Profile", Keywords = "EasyMultiSave Delete Local Profile"), Category = "EasyMultiSave")
	void DeleteLocalProfile();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Custom Save", Keywords = "EasyMultiSave Delete Custom Save"), Category = "EasyMultiSave")
	void DeleteCustomSave(UEMSCustomSaveGame* SaveGame);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete All Save Data For Slot", Keywords = "EasyMultiSave Delete All Save Data For Slot"), Category = "EasyMultiSave")
	void DeleteAllSaveDataForSlot(const FString& SaveGameName);
};

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
	static void SetCurrentSaveUserName(const FString& Username);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Current SaveGame Name", Keywords = "EasyMultiSave Set Current SaveGame Name"), Category = "EasyMultiSave")
	static void SetCurrentSaveGameName(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Actor SaveProperties", Keywords = "EasyMultiSave Set Actor SaveProperties"), Category = "EasyMultiSave")
	static void SetActorSaveProperties(bool bSkipSave, bool bPersistent, bool bSkipTransform);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Persistent Object", Keywords = "EasyMultiSave Save Persistent Object"), Category = "EasyMultiSave")
	static bool SavePersistentObject();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Local Profile", Keywords = "EasyMultiSave Save Local Profile"), Category = "EasyMultiSave")
	static bool SaveLocalProfile();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Custom", Keywords = "EasyMultiSave Save Custom"), Category = "EasyMultiSave")
	static bool SaveCustom(UEMSCustomSaveGame* SaveGame);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Saving Or Loading", Keywords = "EasyMultiSave Is Saving Or Loading"), Category = "EasyMultiSave")
	static bool IsSavingOrLoading();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Import Save Thumbnail", Keywords = "EasyMultiSave Import Save Thumbnail"), Category = "EasyMultiSave")
	static UTexture2D* ImportSaveThumbnail(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Sorted Save Slots", Keywords = "EasyMultiSave Get Sorted Save Slots"), Category = "EasyMultiSave")
	static TArray<FString> GetSortedSaveSlots();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Slot Info SaveGame", Keywords = "EasyMultiSave Get Slot Info SaveGame"), Category = "EasyMultiSave")
	static UEMSInfoSaveGame* GetSlotInfoSaveGame(FString SaveGameName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Persistent Save", Keywords = "EasyMultiSave Get Persistent Save"), Category = "EasyMultiSave")
	static UEMSPersistentSaveGame* GetPersistentSave();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Named SlotInfo", Keywords = "EasyMultiSave Get Named SlotInfo"), Category = "EasyMultiSave")
	static UEMSInfoSaveGame* GetNamedSlotInfo(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get LocalProfile SaveGame", Keywords = "EasyMultiSave Get LocalProfile SaveGame"), Category = "EasyMultiSave")
	static UEMSProfileSaveGame* GetLocalProfileSaveGame();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get Custom Save", Keywords = "EasyMultiSave Get Custom Save"), Category = "EasyMultiSave")
	static UEMSCustomSaveGame* GetCustomSave(UClass* SaveGameClass);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Get All Save Users", Keywords = "EasyMultiSave Get All Save Users"), Category = "EasyMultiSave")
	static TArray<FString> GetAllSaveUsers();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Export Save Thumbnail", Keywords = "EasyMultiSave Export Save Thumbnail"), Category = "EasyMultiSave")
	static void ExportSaveThumbnail(UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Does Save Slot Exist", Keywords = "EasyMultiSave Does Save Slot Exist"), Category = "EasyMultiSave")
	static bool DoesSaveSlotExist(const FString& SaveGameName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Save User", Keywords = "EasyMultiSave Delete Save User"), Category = "EasyMultiSave")
	static void DeleteSaveUser(const FString& Username);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Local Profile", Keywords = "EasyMultiSave Delete Local Profile"), Category = "EasyMultiSave")
	static void DeleteLocalProfile();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Custom Save", Keywords = "EasyMultiSave Delete Custom Save"), Category = "EasyMultiSave")
	static void DeleteCustomSave(UEMSCustomSaveGame* SaveGame);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete All Save Data For Slot", Keywords = "EasyMultiSave Delete All Save Data For Slot"), Category = "EasyMultiSave")
	static void DeleteAllSaveDataForSlot(const FString& SaveGameName);
};

/**
 * Name: Hydroneer
 * Version: 2.0L
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_GameController_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ComponentsToSave");
		
		ABP_GameController_C_ComponentsToSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.DeleteSaveFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::DeleteSaveFile(const class FString& SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DeleteSaveFile");
		
		ABP_GameController_C_DeleteSaveFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.FormatCloudPathToLocalPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString ABP_GameController_C::FormatCloudPathToLocalPath(const class FString& SourceString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FormatCloudPathToLocalPath");
		
		ABP_GameController_C_FormatCloudPathToLocalPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.FormatSaveSlotCloudPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      FilePath                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CloudPath                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::FormatSaveSlotCloudPath(const class FString& SaveSlot, const class FString& FilePath, class FString* CloudPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FormatSaveSlotCloudPath");
		
		ABP_GameController_C_FormatSaveSlotCloudPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CloudPath != nullptr)
			*CloudPath = params.CloudPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.GetFileDataFromCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CloudFilePath                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      LocalFilePath                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Conflict_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, OutParm)
	 */
	void ABP_GameController_C::GetFileDataFromCloud(const class FString& CloudFilePath, const class FString& LocalFilePath, bool* Conflict_, TArray<unsigned char>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetFileDataFromCloud");
		
		ABP_GameController_C_GetFileDataFromCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Conflict_ != nullptr)
			*Conflict_ = params.Conflict_;
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.IsMainController?
	 * 		Flags  -> ()
	 */
	bool ABP_GameController_C::IsMainController_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.IsMainController?");
		
		ABP_GameController_C_IsMainController__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PropagateCloudSaves
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::PropagateCloudSaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PropagateCloudSaves");
		
		ABP_GameController_C_PropagateCloudSaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.GetSaveSlotFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm)
	 */
	void ABP_GameController_C::GetSaveSlotFiles(const class FString& SaveSlot, TArray<class FString>* Files)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveSlotFiles");
		
		ABP_GameController_C_GetSaveSlotFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.GetSaveSlotDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString ABP_GameController_C::GetSaveSlotDirectory(const class FString& SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveSlotDirectory");
		
		ABP_GameController_C_GetSaveSlotDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.GetSaveDirectory
	 * 		Flags  -> ()
	 */
	class FString ABP_GameController_C::GetSaveDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveDirectory");
		
		ABP_GameController_C_GetSaveDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.LoadCurrentFilesFromCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Override_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Conflict_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        CloudTime                                                  (Parm, OutParm)
	 * 		class FText                                        LocalTime                                                  (Parm, OutParm)
	 */
	void ABP_GameController_C::LoadCurrentFilesFromCloud(bool Override_, bool* Conflict_, class FText* CloudTime, class FText* LocalTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LoadCurrentFilesFromCloud");
		
		ABP_GameController_C_LoadCurrentFilesFromCloud_Params params {};
		params.Override_ = Override_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Conflict_ != nullptr)
			*Conflict_ = params.Conflict_;
		if (CloudTime != nullptr)
			*CloudTime = params.CloudTime;
		if (LocalTime != nullptr)
			*LocalTime = params.LocalTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.WriteCurrentFilesToCloud
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::WriteCurrentFilesToCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.WriteCurrentFilesToCloud");
		
		ABP_GameController_C_WriteCurrentFilesToCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.MenuFocusTick
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::MenuFocusTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MenuFocusTick");
		
		ABP_GameController_C_MenuFocusTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ToggleMenuFocusTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameController_C::ToggleMenuFocusTimer(bool On_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ToggleMenuFocusTimer");
		
		ABP_GameController_C_ToggleMenuFocusTimer_Params params {};
		params.On_ = On_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ScanForItemsOnTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtentX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtentY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ScanForItemsOnTop(const struct FVector& Location, float ExtentX, float ExtentY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ScanForItemsOnTop");
		
		ABP_GameController_C_ScanForItemsOnTop_Params params {};
		params.ExtentX = ExtentX;
		params.ExtentY = ExtentY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SetHUD_Crosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Crosshairs                                       Crosshair                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::SetHUD_Crosshair(E_Crosshairs Crosshair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SetHUD_Crosshair");
		
		ABP_GameController_C_SetHUD_Crosshair_Params params {};
		params.Crosshair = Crosshair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.BoxTraceForRelics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::BoxTraceForRelics(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.BoxTraceForRelics");
		
		ABP_GameController_C_BoxTraceForRelics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SetStartPosition
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::SetStartPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SetStartPosition");
		
		ABP_GameController_C_SetStartPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.MoveVehicleToNearestUnstickPoint
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::MoveVehicleToNearestUnstickPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveVehicleToNearestUnstickPoint");
		
		ABP_GameController_C_MoveVehicleToNearestUnstickPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.Hrrm
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::Hrrm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.Hrrm");
		
		ABP_GameController_C_Hrrm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InitController
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::InitController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InitController");
		
		ABP_GameController_C_InitController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PlayerIsThief
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_WorldStore_C*                            Store                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::PlayerIsThief(class ABP_WorldStore_C* Store)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PlayerIsThief");
		
		ABP_GameController_C_PlayerIsThief_Params params {};
		params.Store = Store;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.Spawn Store Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::Spawn_Store_Item(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.Spawn Store Item");
		
		ABP_GameController_C_Spawn_Store_Item_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ChangeBuildRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XYZ_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ChangeBuildRotation(int32_t XYZ_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ChangeBuildRotation");
		
		ABP_GameController_C_ChangeBuildRotation_Params params {};
		params.XYZ_ = XYZ_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.TryPickupItem
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::TryPickupItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.TryPickupItem");
		
		ABP_GameController_C_TryPickupItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.LineTraceFromCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool ABP_GameController_C::LineTraceFromCharacter(struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LineTraceFromCharacter");
		
		ABP_GameController_C_LineTraceFromCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SetDiscordNote
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::SetDiscordNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SetDiscordNote");
		
		ABP_GameController_C_SetDiscordNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.StartFreeplacing
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::StartFreeplacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.StartFreeplacing");
		
		ABP_GameController_C_StartFreeplacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.DeniedDrop
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::DeniedDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DeniedDrop");
		
		ABP_GameController_C_DeniedDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PickUpItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::PickUpItem(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PickUpItem");
		
		ABP_GameController_C_PickUpItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.DigCheckForRelics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::DigCheckForRelics(class AActor* ActorHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DigCheckForRelics");
		
		ABP_GameController_C_DigCheckForRelics_Params params {};
		params.ActorHit = ActorHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.GetSaveSlotX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SlotName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsCloud_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameController_C::GetSaveSlotX(int32_t Slot, class FString* SlotName, bool* IsCloud_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveSlotX");
		
		ABP_GameController_C_GetSaveSlotX_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotName != nullptr)
			*SlotName = params.SlotName;
		if (IsCloud_ != nullptr)
			*IsCloud_ = params.IsCloud_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SpawnMusic
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::SpawnMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SpawnMusic");
		
		ABP_GameController_C_SpawnMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.RecallVehicle
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::RecallVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RecallVehicle");
		
		ABP_GameController_C_RecallVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.RemoveDirtVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::RemoveDirtVehicle(const struct FVector& Location1, const struct FVector& Location2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RemoveDirtVehicle");
		
		ABP_GameController_C_RemoveDirtVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CameraShakes                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::CameraShake(E_CameraShakes Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.CameraShake");
		
		ABP_GameController_C_CameraShake_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.RemoveDirtLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::RemoveDirtLine(const struct FVector& Position, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RemoveDirtLine");
		
		ABP_GameController_C_RemoveDirtLine_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ExitVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ExitVehicle(class AActor* Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ExitVehicle");
		
		ABP_GameController_C_ExitVehicle_Params params {};
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.EnterNewVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::EnterNewVehicle(class AActor* Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.EnterNewVehicle");
		
		ABP_GameController_C_EnterNewVehicle_Params params {};
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.UnhighlightObject
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::UnhighlightObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.UnhighlightObject");
		
		ABP_GameController_C_UnhighlightObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.HighlightObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::HighlightObject(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.HighlightObject");
		
		ABP_GameController_C_HighlightObject_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.TryHighlightObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameController_C::TryHighlightObject(const struct FHitResult& Hit, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.TryHighlightObject");
		
		ABP_GameController_C_TryHighlightObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SpawnInitialItems
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::SpawnInitialItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SpawnInitialItems");
		
		ABP_GameController_C_SpawnInitialItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.MovePlayerToNearestUnstickPoint
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::MovePlayerToNearestUnstickPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MovePlayerToNearestUnstickPoint");
		
		ABP_GameController_C_MovePlayerToNearestUnstickPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PostOpenUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 OpenUI                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::PostOpenUI(class UUserWidget* OpenUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PostOpenUI");
		
		ABP_GameController_C_PostOpenUI_Params params {};
		params.OpenUI = OpenUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.CloseAllUI
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::CloseAllUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.CloseAllUI");
		
		ABP_GameController_C_CloseAllUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.DropItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueDrop                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameController_C::DropItem(bool* TrueDrop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DropItem");
		
		ABP_GameController_C_DropItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrueDrop != nullptr)
			*TrueDrop = params.TrueDrop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PositionItemTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::PositionItemTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PositionItemTimer");
		
		ABP_GameController_C_PositionItemTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.CrosshairTrace
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::CrosshairTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.CrosshairTrace");
		
		ABP_GameController_C_CrosshairTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.MoveTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::MoveTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveTimeline__FinishedFunc");
		
		ABP_GameController_C_MoveTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.MoveTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::MoveTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveTimeline__UpdateFunc");
		
		ABP_GameController_C_MoveTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3");
		
		ABP_GameController_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2");
		
		ABP_GameController_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_Rotate_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_Rotate_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Rotate_K2Node_InputActionEvent_12");
		
		ABP_GameController_C_InpActEvt_Rotate_K2Node_InputActionEvent_12_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_Rotate2_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_Rotate2_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Rotate2_K2Node_InputActionEvent_11");
		
		ABP_GameController_C_InpActEvt_Rotate2_K2Node_InputActionEvent_11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_Pickup_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_10");
		
		ABP_GameController_C_InpActEvt_Pickup_K2Node_InputActionEvent_10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_Pickup_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_9");
		
		ABP_GameController_C_InpActEvt_Pickup_K2Node_InputActionEvent_9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_VehicleKey_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_VehicleKey_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_VehicleKey_K2Node_InputActionEvent_8");
		
		ABP_GameController_C_InpActEvt_VehicleKey_K2Node_InputActionEvent_8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_Rotate3_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_Rotate3_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Rotate3_K2Node_InputActionEvent_7");
		
		ABP_GameController_C_InpActEvt_Rotate3_K2Node_InputActionEvent_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_Wiki_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_Wiki_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Wiki_K2Node_InputActionEvent_6");
		
		ABP_GameController_C_InpActEvt_Wiki_K2Node_InputActionEvent_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_RMB_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_5");
		
		ABP_GameController_C_InpActEvt_RMB_K2Node_InputActionEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_RMB_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_4");
		
		ABP_GameController_C_InpActEvt_RMB_K2Node_InputActionEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC");
		
		ABP_GameController_C_OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_LMB_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_3");
		
		ABP_GameController_C_InpActEvt_LMB_K2Node_InputActionEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_LMB_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_2");
		
		ABP_GameController_C_InpActEvt_LMB_K2Node_InputActionEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");
		
		ABP_GameController_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpActEvt_EscMenu_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpActEvt_EscMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_EscMenu_K2Node_InputActionEvent_1");
		
		ABP_GameController_C_InpActEvt_EscMenu_K2Node_InputActionEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.MoveDirt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickUp_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::MoveDirt(bool PickUp_, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveDirt");
		
		ABP_GameController_C_MoveDirt_Params params {};
		params.PickUp_ = PickUp_;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.FreePlayer
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::FreePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FreePlayer");
		
		ABP_GameController_C_FreePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.autosave
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::autosave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.autosave");
		
		ABP_GameController_C_autosave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.LevelTerrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Remove                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVoxelIntBox                                Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::LevelTerrain(const struct FVoxelIntBox& Remove, const struct FVoxelIntBox& Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LevelTerrain");
		
		ABP_GameController_C_LevelTerrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.RemoveDirtByLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::RemoveDirtByLocation(const struct FVector& Location, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RemoveDirtByLocation");
		
		ABP_GameController_C_RemoveDirtByLocation_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.VehicleRemoveDirt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::VehicleRemoveDirt(const struct FVector& Location1, const struct FVector& Location2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.VehicleRemoveDirt");
		
		ABP_GameController_C_VehicleRemoveDirt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.HudAlertDropped
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::HudAlertDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.HudAlertDropped");
		
		ABP_GameController_C_HudAlertDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.NoLongerPlacingItem
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::NoLongerPlacingItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.NoLongerPlacingItem");
		
		ABP_GameController_C_NoLongerPlacingItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PlaceDownItem
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::PlaceDownItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PlaceDownItem");
		
		ABP_GameController_C_PlaceDownItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PositioningItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::PositioningItem(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PositioningItem");
		
		ABP_GameController_C_PositioningItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveTick");
		
		ABP_GameController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveBeginPlay");
		
		ABP_GameController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ToggleScreenshotCam
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::ToggleScreenshotCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ToggleScreenshotCam");
		
		ABP_GameController_C_ToggleScreenshotCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ActorSaved");
		
		ABP_GameController_C_ActorSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ChangeTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ChangeTime(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ChangeTime");
		
		ABP_GameController_C_ChangeTime_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PauseTime
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::PauseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PauseTime");
		
		ABP_GameController_C_PauseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.LerpToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Socket_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::LerpToCharacter(class ABP_ParentItem_C* Item, class USceneComponent* Socket_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LerpToCharacter");
		
		ABP_GameController_C_LerpToCharacter_Params params {};
		params.Item = Item;
		params.Socket_Component = Socket_Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.PickupLerpTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::PickupLerpTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PickupLerpTimer");
		
		ABP_GameController_C_PickupLerpTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.EMS Save
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::EMS_Save()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.EMS Save");
		
		ABP_GameController_C_EMS_Save_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.StartAutosaverTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::StartAutosaverTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.StartAutosaverTimer");
		
		ABP_GameController_C_StartAutosaverTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.StartGameLerp
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::StartGameLerp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.StartGameLerp");
		
		ABP_GameController_C_StartGameLerp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ActorPreSave");
		
		ABP_GameController_C_ActorPreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceivePossess");
		
		ABP_GameController_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveUnPossess");
		
		ABP_GameController_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SaveToCloud
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::SaveToCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SaveToCloud");
		
		ABP_GameController_C_SaveToCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.SensitivityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::SensitivityChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SensitivityChanged");
		
		ABP_GameController_C_SensitivityChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ToggleAutosaveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameController_C::ToggleAutosaveChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ToggleAutosaveChanged");
		
		ABP_GameController_C_ToggleAutosaveChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveDestroyed");
		
		ABP_GameController_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1");
		
		ABP_GameController_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ActorLoaded");
		
		ABP_GameController_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.ExecuteUbergraph_BP_GameController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameController_C::ExecuteUbergraph_BP_GameController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ExecuteUbergraph_BP_GameController");
		
		ABP_GameController_C_ExecuteUbergraph_BP_GameController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_GameController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameController.BP_GameController_C");
		return ptr;
	}

}



/**
 * Name: Hydroneer
 * Version: 2.0
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.UnhighlightCleanup
	 * 		Flags  -> ()
	 */
	void ABP_GameController_C::UnhighlightCleanup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.UnhighlightCleanup");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameController.BP_GameController_C.FindSpawnTransform
	 * 		Flags  -> ()
	 */
	struct FTransform ABP_GameController_C::FindSpawnTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FindSpawnTransform");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DeleteSaveFile");
		
		struct
		{
			class FString                                      SaveSlot;
		} params;
		params.SaveSlot = SaveSlot;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FormatCloudPathToLocalPath");
		
		struct
		{
			class FString                                      SourceString;
		} params;
		params.SourceString = SourceString;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FormatSaveSlotCloudPath");
		
		struct
		{
			class FString                                      SaveSlot;
			class FString                                      FilePath;
			class FString                                      CloudPath;
		} params;
		params.SaveSlot = SaveSlot;
		params.FilePath = FilePath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetFileDataFromCloud");
		
		struct
		{
			class FString                                      CloudFilePath;
			class FString                                      LocalFilePath;
			bool                                               Conflict_;
			TArray<unsigned char>                              Data;
		} params;
		params.CloudFilePath = CloudFilePath;
		params.LocalFilePath = LocalFilePath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.IsMainController?");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PropagateCloudSaves");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveSlotFiles");
		
		struct
		{
			class FString                                      SaveSlot;
			TArray<class FString>                              Files;
		} params;
		params.SaveSlot = SaveSlot;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveSlotDirectory");
		
		struct
		{
			class FString                                      SaveSlot;
		} params;
		params.SaveSlot = SaveSlot;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveDirectory");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LoadCurrentFilesFromCloud");
		
		struct
		{
			bool                                               Override_;
			bool                                               Conflict_;
			class FText                                        CloudTime;
			class FText                                        LocalTime;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.WriteCurrentFilesToCloud");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MenuFocusTick");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ToggleMenuFocusTimer");
		
		struct
		{
			bool                                               On_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ScanForItemsOnTop");
		
		struct
		{
			struct FVector                                     Location;
			float                                              ExtentX;
			float                                              ExtentY;
		} params;
		params.Location = Location;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SetHUD_Crosshair");
		
		struct
		{
			E_Crosshairs                                       Crosshair;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.BoxTraceForRelics");
		
		struct
		{
			struct FVector                                     Location;
		} params;
		params.Location = Location;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SetStartPosition");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveVehicleToNearestUnstickPoint");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.Hrrm");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InitController");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PlayerIsThief");
		
		struct
		{
			class ABP_WorldStore_C*                            Store;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.Spawn Store Item");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ChangeBuildRotation");
		
		struct
		{
			int32_t                                            XYZ_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.TryPickupItem");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LineTraceFromCharacter");
		
		struct
		{
			struct FHitResult                                  OutHit;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SetDiscordNote");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.StartFreeplacing");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DeniedDrop");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PickUpItem");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DigCheckForRelics");
		
		struct
		{
			class AActor*                                      ActorHit;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.GetSaveSlotX");
		
		struct
		{
			int32_t                                            Slot;
			class FString                                      SlotName;
			bool                                               IsCloud_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SpawnMusic");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RecallVehicle");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RemoveDirtVehicle");
		
		struct
		{
			struct FVector                                     Location1;
			struct FVector                                     Location2;
		} params;
		params.Location1 = Location1;
		params.Location2 = Location2;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.CameraShake");
		
		struct
		{
			E_CameraShakes                                     Type;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RemoveDirtLine");
		
		struct
		{
			struct FVector                                     Position;
			float                                              Radius;
		} params;
		params.Position = Position;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ExitVehicle");
		
		struct
		{
			class AActor*                                      Vehicle;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.EnterNewVehicle");
		
		struct
		{
			class AActor*                                      Vehicle;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.UnhighlightObject");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.HighlightObject");
		
		struct
		{
			class AActor*                                      Actor;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.TryHighlightObject");
		
		struct
		{
			struct FHitResult                                  Hit;
			bool                                               Result;
		} params;
		params.Hit = Hit;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SpawnInitialItems");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MovePlayerToNearestUnstickPoint");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PostOpenUI");
		
		struct
		{
			class UUserWidget*                                 OpenUI;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.CloseAllUI");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.DropItem");
		
		struct
		{
			bool                                               TrueDrop;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PositionItemTimer");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.CrosshairTrace");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveTimeline__FinishedFunc");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveTimeline__UpdateFunc");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Rotate_K2Node_InputActionEvent_12");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Rotate2_K2Node_InputActionEvent_11");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_10");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_9");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_VehicleKey_K2Node_InputActionEvent_8");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Rotate3_K2Node_InputActionEvent_7");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_Wiki_K2Node_InputActionEvent_6");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_5");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_4");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_3");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_2");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpActEvt_EscMenu_K2Node_InputActionEvent_1");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.MoveDirt");
		
		struct
		{
			bool                                               PickUp_;
			float                                              Radius;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.FreePlayer");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.autosave");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LevelTerrain");
		
		struct
		{
			struct FVoxelIntBox                                Remove;
			struct FVoxelIntBox                                Add;
		} params;
		params.Remove = Remove;
		params.Add = Add;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.RemoveDirtByLocation");
		
		struct
		{
			struct FVector                                     Location;
			float                                              Radius;
		} params;
		params.Location = Location;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.VehicleRemoveDirt");
		
		struct
		{
			struct FVector                                     Location1;
			struct FVector                                     Location2;
		} params;
		params.Location1 = Location1;
		params.Location2 = Location2;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.HudAlertDropped");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.NoLongerPlacingItem");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PlaceDownItem");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PositioningItem");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
		params.Item = Item;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ToggleScreenshotCam");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ChangeTime");
		
		struct
		{
			float                                              Amount;
		} params;
		params.Amount = Amount;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveBeginPlay");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PauseTime");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ActorSaved");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.LerpToCharacter");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			class USceneComponent*                             Socket_Component;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.PickupLerpTimer");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.EMS Save");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.StartAutosaverTimer");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.StartGameLerp");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ActorPreSave");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceivePossess");
		
		struct
		{
			class APawn*                                       PossessedPawn;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveUnPossess");
		
		struct
		{
			class APawn*                                       UnpossessedPawn;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SaveToCloud");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.SensitivityChanged");
		
		struct
		{
			float                                              NewValue;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ToggleAutosaveChanged");
		
		struct
		{
			bool                                               NewValue;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ReceiveDestroyed");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1");
		
		struct
		{
			float                                              AxisValue;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ActorLoaded");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameController.BP_GameController_C.ExecuteUbergraph_BP_GameController");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
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
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameController.BP_GameController_C");
		return ptr;
	}

}



/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.RemoveSessionID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::RemoveSessionID(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.RemoveSessionID");
		
		UBP_GameInstance_C_RemoveSessionID_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.AddSessionID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Remote_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameInstance_C::AddSessionID(int32_t SessionID, bool Remote_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.AddSessionID");
		
		UBP_GameInstance_C_AddSessionID_Params params {};
		params.SessionID = SessionID;
		params.Remote_ = Remote_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.SaveUserData
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::SaveUserData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SaveUserData");
		
		UBP_GameInstance_C_SaveUserData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.LoadUserData
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::LoadUserData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.LoadUserData");
		
		UBP_GameInstance_C_LoadUserData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.LoadMods
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::LoadMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.LoadMods");
		
		UBP_GameInstance_C_LoadMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ClearAndReloadInput
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::ClearAndReloadInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ClearAndReloadInput");
		
		UBP_GameInstance_C_ClearAndReloadInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.AmbianceVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::AmbianceVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.AmbianceVolumeChanged");
		
		UBP_GameInstance_C_AmbianceVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.MasterVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::MasterVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.MasterVolumeChanged");
		
		UBP_GameInstance_C_MasterVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.MusicVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::MusicVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.MusicVolumeChanged");
		
		UBP_GameInstance_C_MusicVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.GeneralVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::GeneralVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.GeneralVolumeChanged");
		
		UBP_GameInstance_C_GeneralVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.MachineryVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::MachineryVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.MachineryVolumeChanged");
		
		UBP_GameInstance_C_MachineryVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.PlayerVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::PlayerVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.PlayerVolumeChanged");
		
		UBP_GameInstance_C_PlayerVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.VehicleVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::VehicleVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.VehicleVolumeChanged");
		
		UBP_GameInstance_C_VehicleVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.WaterVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::WaterVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.WaterVolumeChanged");
		
		UBP_GameInstance_C_WaterVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.GamepadIconsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::GamepadIconsChanged(const class FString& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.GamepadIconsChanged");
		
		UBP_GameInstance_C_GamepadIconsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveInit");
		
		UBP_GameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ExplosionVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::ExplosionVolumeChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExplosionVolumeChanged");
		
		UBP_GameInstance_C_ExplosionVolumeChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.MultiMonitorToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameInstance_C::MultiMonitorToggle(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.MultiMonitorToggle");
		
		UBP_GameInstance_C_MultiMonitorToggle_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.SetDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::SetDLSSMode(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetDLSSMode");
		
		UBP_GameInstance_C_SetDLSSMode_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");
		
		UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_GameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}

}



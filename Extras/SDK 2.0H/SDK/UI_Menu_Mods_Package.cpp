/**
 * Name: Hydroneer
 * Version: 2.0H
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateItemResult                           Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::CB_CreateItem(const struct FCreateItemResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem"));
		
		struct
		{
			struct FCreateItemResult                           Data;
			bool                                               bWasSuccessful;
		} params;
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_Upload_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_Upload_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_Upload_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::CustomEvent_1(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_Mods.UI_Menu_Mods_C.CustomEvent_1"));
		
		struct
		{
			struct FSteamUGCQueryCompleted                     Data;
			bool                                               bWasSuccessful;
		} params;
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_Refresh_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_Refresh_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_Refresh_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::RefreshUGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::ExecuteUbergraph_UI_Menu_Mods(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_Menu_Mods_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_Mods_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_Menu_Mods.UI_Menu_Mods_C"));
		return ptr;
	}

}



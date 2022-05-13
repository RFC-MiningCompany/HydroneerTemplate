/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function UI_AddPlayer.UI_AddPlayer_C.CheckCanEnable
	 * 		Flags  -> ()
	 */
	void UUI_AddPlayer_C::CheckCanEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AddPlayer.UI_AddPlayer_C.CheckCanEnable");
		
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
	 * 		Name   -> Function UI_AddPlayer.UI_AddPlayer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_AddPlayer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AddPlayer.UI_AddPlayer_C.Construct");
		
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
	 * 		Name   -> Function UI_AddPlayer.UI_AddPlayer_C.BndEvt__UI_AddPlayer_H_ButtonWood1_C_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_AddPlayer_C::BndEvt__UI_AddPlayer_H_ButtonWood1_C_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AddPlayer.UI_AddPlayer_C.BndEvt__UI_AddPlayer_H_ButtonWood1_C_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_AddPlayer.UI_AddPlayer_C.BndEvt__UI_AddPlayer_H_ButtonWood2_C_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_AddPlayer_C::BndEvt__UI_AddPlayer_H_ButtonWood2_C_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AddPlayer.UI_AddPlayer_C.BndEvt__UI_AddPlayer_H_ButtonWood2_C_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_AddPlayer.UI_AddPlayer_C.BndEvt__UI_AddPlayer_H_ButtonWood2_RemoteLocalPlayer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_AddPlayer_C::BndEvt__UI_AddPlayer_H_ButtonWood2_RemoteLocalPlayer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AddPlayer.UI_AddPlayer_C.BndEvt__UI_AddPlayer_H_ButtonWood2_RemoteLocalPlayer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_AddPlayer.UI_AddPlayer_C.ExecuteUbergraph_UI_AddPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AddPlayer_C::ExecuteUbergraph_UI_AddPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AddPlayer.UI_AddPlayer_C.ExecuteUbergraph_UI_AddPlayer");
		
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
	 * 		Name   -> PredefindFunction UUI_AddPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AddPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AddPlayer.UI_AddPlayer_C");
		return ptr;
	}

}



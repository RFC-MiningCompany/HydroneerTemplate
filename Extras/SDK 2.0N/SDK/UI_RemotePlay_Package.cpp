/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function UI_RemotePlay.UI_RemotePlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RemotePlay_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_RemotePlay.UI_RemotePlay_C.Construct"));
		
		UUI_RemotePlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RemotePlay.UI_RemotePlay_C.BndEvt__UI_RemotePlay_HButton_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RemotePlay_C::BndEvt__UI_RemotePlay_HButton_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_RemotePlay.UI_RemotePlay_C.BndEvt__UI_RemotePlay_HButton_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_RemotePlay_C_BndEvt__UI_RemotePlay_HButton_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RemotePlay.UI_RemotePlay_C.BndEvt__UI_RemotePlay_HButton_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RemotePlay_C::BndEvt__UI_RemotePlay_HButton_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_RemotePlay.UI_RemotePlay_C.BndEvt__UI_RemotePlay_HButton_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_RemotePlay_C_BndEvt__UI_RemotePlay_HButton_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RemotePlay.UI_RemotePlay_C.ExecuteUbergraph_UI_RemotePlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RemotePlay_C::ExecuteUbergraph_UI_RemotePlay(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_RemotePlay.UI_RemotePlay_C.ExecuteUbergraph_UI_RemotePlay"));
		
		UUI_RemotePlay_C_ExecuteUbergraph_UI_RemotePlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_RemotePlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RemotePlay_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_RemotePlay.UI_RemotePlay_C"));
		return ptr;
	}

}



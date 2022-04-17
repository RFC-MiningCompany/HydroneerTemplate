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
	 * 		Name   -> Function UI_SaveEntry.UI_SaveEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SaveEntry_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_SaveEntry.UI_SaveEntry_C.Construct"));
		
		UUI_SaveEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SaveEntry.UI_SaveEntry_C.BndEvt__UI_SaveEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SaveEntry_C::BndEvt__UI_SaveEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_SaveEntry.UI_SaveEntry_C.BndEvt__UI_SaveEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_SaveEntry_C_BndEvt__UI_SaveEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SaveEntry.UI_SaveEntry_C.ExecuteUbergraph_UI_SaveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SaveEntry_C::ExecuteUbergraph_UI_SaveEntry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_SaveEntry.UI_SaveEntry_C.ExecuteUbergraph_UI_SaveEntry"));
		
		UUI_SaveEntry_C_ExecuteUbergraph_UI_SaveEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_SaveEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SaveEntry_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_SaveEntry.UI_SaveEntry_C"));
		return ptr;
	}

}



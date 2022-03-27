/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_Sub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::BndEvt__UI_Menu_ModItem_Sub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_Sub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.ExecuteUbergraph_UI_Menu_ModItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_ModItem_C::ExecuteUbergraph_UI_Menu_ModItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.ExecuteUbergraph_UI_Menu_ModItem");
		
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
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.Unsubscribe__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::Unsubscribe__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.Unsubscribe__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.Subscribe__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::Subscribe__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.Subscribe__DelegateSignature");
		
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
	 * 		Name   -> PredefindFunction UUI_Menu_ModItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_ModItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_ModItem.UI_Menu_ModItem_C");
		return ptr;
	}

}



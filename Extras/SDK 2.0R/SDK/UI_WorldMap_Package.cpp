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
	 * 		Name   -> Function UI_WorldMap.UI_WorldMap_C.UpdateSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InUse_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WorldMap_C::UpdateSelection(bool InUse_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.UpdateSelection");
		
		UUI_WorldMap_C_UpdateSelection_Params params {};
		params.InUse_ = InUse_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WorldMap.UI_WorldMap_C.Loop
	 * 		Flags  -> ()
	 */
	void UUI_WorldMap_C::Loop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.Loop");
		
		UUI_WorldMap_C_Loop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WorldMap.UI_WorldMap_C.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMap_C::Activate(int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.Activate");
		
		UUI_WorldMap_C_Activate_Params params {};
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WorldMap.UI_WorldMap_C.Deactivate
	 * 		Flags  -> ()
	 */
	void UUI_WorldMap_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.Deactivate");
		
		UUI_WorldMap_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WorldMap.UI_WorldMap_C.ExecuteUbergraph_UI_WorldMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMap_C::ExecuteUbergraph_UI_WorldMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.ExecuteUbergraph_UI_WorldMap");
		
		UUI_WorldMap_C_ExecuteUbergraph_UI_WorldMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_WorldMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WorldMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WorldMap.UI_WorldMap_C");
		return ptr;
	}

}



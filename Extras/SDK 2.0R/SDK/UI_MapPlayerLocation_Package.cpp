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
	 * 		Name   -> Function UI_MapPlayerLocation.UI_MapPlayerLocation_C.UpdateSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPlayerLocation_C::UpdateSelection(int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayerLocation.UI_MapPlayerLocation_C.UpdateSelection");
		
		UUI_MapPlayerLocation_C_UpdateSelection_Params params {};
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayerLocation.UI_MapPlayerLocation_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapPlayerLocation_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayerLocation.UI_MapPlayerLocation_C.PreConstruct");
		
		UUI_MapPlayerLocation_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayerLocation.UI_MapPlayerLocation_C.ExecuteUbergraph_UI_MapPlayerLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPlayerLocation_C::ExecuteUbergraph_UI_MapPlayerLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayerLocation.UI_MapPlayerLocation_C.ExecuteUbergraph_UI_MapPlayerLocation");
		
		UUI_MapPlayerLocation_C_ExecuteUbergraph_UI_MapPlayerLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_MapPlayerLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapPlayerLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapPlayerLocation.UI_MapPlayerLocation_C");
		return ptr;
	}

}



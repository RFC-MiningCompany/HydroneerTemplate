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
	 * 		Name   -> Function UI_CoinAmount.UI_CoinAmount_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CoinAmount_C::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CoinAmount.UI_CoinAmount_C.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CoinAmount.UI_CoinAmount_C.ExecuteUbergraph_UI_CoinAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CoinAmount_C::ExecuteUbergraph_UI_CoinAmount(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CoinAmount.UI_CoinAmount_C.ExecuteUbergraph_UI_CoinAmount");
		
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
	 * 		Name   -> PredefindFunction UUI_CoinAmount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CoinAmount_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CoinAmount.UI_CoinAmount_C");
		return ptr;
	}

}



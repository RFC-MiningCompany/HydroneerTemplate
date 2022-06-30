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
	 * 		Name   -> Function UI_SwatchPanel.UI_SwatchPanel_C.Init
	 * 		Flags  -> ()
	 */
	void UUI_SwatchPanel_C::Init()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchPanel.UI_SwatchPanel_C.Init");
		
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
	 * 		Name   -> Function UI_SwatchPanel.UI_SwatchPanel_C.UpdateSelectionColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SwatchPanel_C::UpdateSelectionColor(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchPanel.UI_SwatchPanel_C.UpdateSelectionColor");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SwatchPanel.UI_SwatchPanel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SwatchPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchPanel.UI_SwatchPanel_C.PreConstruct");
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SwatchPanel.UI_SwatchPanel_C.ExecuteUbergraph_UI_SwatchPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SwatchPanel_C::ExecuteUbergraph_UI_SwatchPanel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchPanel.UI_SwatchPanel_C.ExecuteUbergraph_UI_SwatchPanel");
		
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
	 * 		Name   -> Function UI_SwatchPanel.UI_SwatchPanel_C.OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SwatchPanel_C::OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchPanel.UI_SwatchPanel_C.OnUpdate__DelegateSignature");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_SwatchPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SwatchPanel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SwatchPanel.UI_SwatchPanel_C");
		return ptr;
	}

}



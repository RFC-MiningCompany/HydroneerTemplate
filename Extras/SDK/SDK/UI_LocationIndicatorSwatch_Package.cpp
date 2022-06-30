/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_LocationIndicatorSwatch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.Construct");
		
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
	 * 		Name   -> Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.LocationIndicatorColorChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_LocationIndicatorSwatch_C::LocationIndicatorColorChange(const class FString& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.LocationIndicatorColorChange");
		
		struct
		{
			class FString                                      NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LocationIndicatorSwatch_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.PreConstruct");
		
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
	 * 		Name   -> Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.BndEvt__UI_LocationIndicatorSwatch_UI_SwatchColor_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LocationIndicatorSwatch_C::BndEvt__UI_LocationIndicatorSwatch_UI_SwatchColor_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.BndEvt__UI_LocationIndicatorSwatch_UI_SwatchColor_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");
		
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
	 * 		Name   -> Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.ExecuteUbergraph_UI_LocationIndicatorSwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LocationIndicatorSwatch_C::ExecuteUbergraph_UI_LocationIndicatorSwatch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.ExecuteUbergraph_UI_LocationIndicatorSwatch");
		
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
	 * 		Name   -> Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_LocationIndicatorSwatch_C::OnSelected__DelegateSignature(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C.OnSelected__DelegateSignature");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_LocationIndicatorSwatch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LocationIndicatorSwatch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LocationIndicatorSwatch.UI_LocationIndicatorSwatch_C");
		return ptr;
	}

}



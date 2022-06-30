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
	 * 		Name   -> Function GameplaySettingsPage.GameplaySettingsPage_C.Construct
	 * 		Flags  -> ()
	 */
	void UGameplaySettingsPage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettingsPage.GameplaySettingsPage_C.Construct");
		
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
	 * 		Name   -> Function GameplaySettingsPage.GameplaySettingsPage_C.LocationIndicatorSwatchSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGameplaySettingsPage_C::LocationIndicatorSwatchSelected(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettingsPage.GameplaySettingsPage_C.LocationIndicatorSwatchSelected");
		
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
	 * 		Name   -> Function GameplaySettingsPage.GameplaySettingsPage_C.ExecuteUbergraph_GameplaySettingsPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameplaySettingsPage_C::ExecuteUbergraph_GameplaySettingsPage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettingsPage.GameplaySettingsPage_C.ExecuteUbergraph_GameplaySettingsPage");
		
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
	 * 		Name   -> PredefindFunction UGameplaySettingsPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplaySettingsPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameplaySettingsPage.GameplaySettingsPage_C");
		return ptr;
	}

}



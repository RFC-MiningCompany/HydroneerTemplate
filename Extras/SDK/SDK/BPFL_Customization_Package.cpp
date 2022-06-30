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
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.GetRelevantCustomizationOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPData_Head_C*>                       Heads                                                      (Parm, OutParm)
	 * 		TArray<class UPData_Hair_C*>                       Hair                                                       (Parm, OutParm)
	 * 		TArray<class UPData_Beard_C*>                      Beards                                                     (Parm, OutParm)
	 * 		TArray<class UPData_ClothingSet_C*>                ClothingSets                                               (Parm, OutParm)
	 */
	void UBPFL_Customization_C::GetRelevantCustomizationOptions(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, TArray<class UPData_Head_C*>* Heads, TArray<class UPData_Hair_C*>* Hair, TArray<class UPData_Beard_C*>* Beards, TArray<class UPData_ClothingSet_C*>* ClothingSets)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.GetRelevantCustomizationOptions");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
			class UObject*                                     __WorldContext;
			TArray<class UPData_Head_C*>                       Heads;
			TArray<class UPData_Hair_C*>                       Hair;
			TArray<class UPData_Beard_C*>                      Beards;
			TArray<class UPData_ClothingSet_C*>                ClothingSets;
		} params;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Heads != nullptr)
			*Heads = params.Heads;
		if (Hair != nullptr)
			*Hair = params.Hair;
		if (Beards != nullptr)
			*Beards = params.Beards;
		if (ClothingSets != nullptr)
			*ClothingSets = params.ClothingSets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.GetCustomizationOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_Character_Customization                  Options                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::GetCustomizationOptions(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, struct FS_Character_Customization* Options)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.GetCustomizationOptions");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
			class UObject*                                     __WorldContext;
			struct FS_Character_Customization                  Options;
		} params;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPFL_Customization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Customization_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Customization.BPFL_Customization_C");
		return ptr;
	}

}



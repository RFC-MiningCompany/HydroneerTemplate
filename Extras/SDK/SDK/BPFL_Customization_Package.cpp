/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_CharacterStyle                           Style                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomStyle(class UObject* __WorldContext, struct FS_CharacterStyle* Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomStyle");
		
		struct
		{
			class UObject*                                     __WorldContext;
			struct FS_CharacterStyle                           Style;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Style != nullptr)
			*Style = params.Style;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomSkinColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SkinColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomSkinColor(class UObject* __WorldContext, class FName* SkinColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomSkinColor");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class FName                                        SkinColor;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkinColor != nullptr)
			*SkinColor = params.SkinColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomHairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        HairColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomHairColor(class UObject* __WorldContext, class FName* HairColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomHairColor");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class FName                                        HairColor;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HairColor != nullptr)
			*HairColor = params.HairColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomBeardMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BeardIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomBeardMesh(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, int32_t* BeardIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomBeardMesh");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
			class UObject*                                     __WorldContext;
			int32_t                                            BeardIndex;
		} params;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BeardIndex != nullptr)
			*BeardIndex = params.BeardIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomHairMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HairIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomHairMesh(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, int32_t* HairIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomHairMesh");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
			class UObject*                                     __WorldContext;
			int32_t                                            HairIndex;
		} params;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HairIndex != nullptr)
			*HairIndex = params.HairIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.GetCurrentHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPData_Head_C*                               HeadData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::GetCurrentHead(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, class UPData_Head_C** HeadData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.GetCurrentHead");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
			class UObject*                                     __WorldContext;
			class UPData_Head_C*                               HeadData;
		} params;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadData != nullptr)
			*HeadData = params.HeadData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomClothingColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ClothingColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomClothingColor(class UObject* __WorldContext, class FName* ClothingColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomClothingColor");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class FName                                        ClothingColor;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClothingColor != nullptr)
			*ClothingColor = params.ClothingColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Customization.BPFL_Customization_C.RandomClothingMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClothingIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Customization_C::RandomClothingMesh(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, int32_t* ClothingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.RandomClothingMesh");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
			class UObject*                                     __WorldContext;
			int32_t                                            ClothingIndex;
		} params;
		params.Style = Style;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClothingIndex != nullptr)
			*ClothingIndex = params.ClothingIndex;
	}

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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.GetRelevantCustomizationOptions");
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Customization.BPFL_Customization_C.GetCustomizationOptions");
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Customization.BPFL_Customization_C");
		return ptr;
	}

}



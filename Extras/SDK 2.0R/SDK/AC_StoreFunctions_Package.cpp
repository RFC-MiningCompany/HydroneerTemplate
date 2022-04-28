﻿/**
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
	 * 		Name   -> Function AC_StoreFunctions.AC_StoreFunctions_C.CalcWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_ParentResource_C*>                Resources                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Weight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_StoreFunctions_C::CalcWeight(TArray<class ABP_ParentResource_C*>* Resources, float* Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_StoreFunctions.AC_StoreFunctions_C.CalcWeight");
		
		UAC_StoreFunctions_C_CalcWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Resources != nullptr)
			*Resources = params.Resources;
		if (Weight != nullptr)
			*Weight = params.Weight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_StoreFunctions.AC_StoreFunctions_C.CalcPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_ParentResource_C*>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Total                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_StoreFunctions_C::CalcPrice(TArray<class ABP_ParentResource_C*>* Array, int32_t* Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_StoreFunctions.AC_StoreFunctions_C.CalcPrice");
		
		UAC_StoreFunctions_C_CalcPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Total != nullptr)
			*Total = params.Total;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_StoreFunctions.AC_StoreFunctions_C.CalculateCraftedPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentCraftedResource_C*                 CraftedItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_StoreFunctions_C::CalculateCraftedPrice(class ABP_ParentCraftedResource_C* CraftedItem, int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_StoreFunctions.AC_StoreFunctions_C.CalculateCraftedPrice");
		
		UAC_StoreFunctions_C_CalculateCraftedPrice_Params params {};
		params.CraftedItem = CraftedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_StoreFunctions.AC_StoreFunctions_C.CalculateFishPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CaughtFish_C*                            Fish                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_StoreFunctions_C::CalculateFishPrice(class ABP_CaughtFish_C* Fish, int32_t* Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_StoreFunctions.AC_StoreFunctions_C.CalculateFishPrice");
		
		UAC_StoreFunctions_C_CalculateFishPrice_Params params {};
		params.Fish = Fish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cost != nullptr)
			*Cost = params.Cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_StoreFunctions.AC_StoreFunctions_C.ReplaceCoinsWithNewValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void UAC_StoreFunctions_C::ReplaceCoinsWithNewValue(int32_t NewValue, const struct FTransform& SpawnLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_StoreFunctions.AC_StoreFunctions_C.ReplaceCoinsWithNewValue");
		
		UAC_StoreFunctions_C_ReplaceCoinsWithNewValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_StoreFunctions.AC_StoreFunctions_C.GetTotalCoinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_StoreFunctions_C::GetTotalCoinValue(int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_StoreFunctions.AC_StoreFunctions_C.GetTotalCoinValue");
		
		UAC_StoreFunctions_C_GetTotalCoinValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_StoreFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_StoreFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_StoreFunctions.AC_StoreFunctions_C");
		return ptr;
	}

}



﻿/**
 * Name: Hydroneer
 * Version: 2.0H
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitDirt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DirtResource_C*                          Dirt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitDirt(class ABP_DirtResource_C* Dirt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function AC_Splitter.AC_Splitter_C.SplitDirt"));
		
		struct
		{
			class ABP_DirtResource_C*                          Dirt;
		} params;
		params.Dirt = Dirt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Coin_C*                                  Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitCoins(class ABP_Coin_C* Coins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function AC_Splitter.AC_Splitter_C.SplitCoins"));
		
		struct
		{
			class ABP_Coin_C*                                  Coins;
		} params;
		params.Coins = Coins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_Splitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Splitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AC_Splitter.AC_Splitter_C"));
		return ptr;
	}

}



﻿/**
 * Name: Hydroneer
 * Version: 2.0F
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
	 * 		Name   -> Function BP_Coin.BP_Coin_C.CombineCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Coin_C*                                  OtherCoins                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::CombineCoins(class ABP_Coin_C* OtherCoins)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.CombineCoins"));
		
		struct
		{
			class ABP_Coin_C*                                  OtherCoins;
		} params;
		params.OtherCoins = OtherCoins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.UserConstructionScript"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.CheckForCostumeChange
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::CheckForCostumeChange()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.CheckForCostumeChange"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.RemoveCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::RemoveCoins(int32_t AmountToRemove)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.RemoveCoins"));
		
		struct
		{
			int32_t                                            AmountToRemove;
		} params;
		params.AmountToRemove = AmountToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.PlayCoinSound
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::PlayCoinSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.PlayCoinSound"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.ReceiveBeginPlay"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.RestackCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_Coin_C*>                          Coins                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Coin_C::RestackCoins(TArray<class ABP_Coin_C*> Coins)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.RestackCoins"));
		
		struct
		{
			TArray<class ABP_Coin_C*>                          Coins;
		} params;
		params.Coins = Coins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.OverrideLoaded"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideHighlighted
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::OverrideHighlighted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.OverrideHighlighted"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideUnhighlighted
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::OverrideUnhighlighted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.OverrideUnhighlighted"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::OverrideHit(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.OverrideHit"));
		
		struct
		{
			class AActor*                                      OtherActor;
		} params;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.ExecuteUbergraph_BP_Coin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::ExecuteUbergraph_BP_Coin(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Coin.BP_Coin_C.ExecuteUbergraph_BP_Coin"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Coin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Coin_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Coin.BP_Coin_C"));
		return ptr;
	}

}



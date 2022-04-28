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
	 * 		Name   -> Function BP_Coin.BP_Coin_C.CombineCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Coin_C*                                  OtherCoins                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::CombineCoins(class ABP_Coin_C* OtherCoins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.CombineCoins");
		
		ABP_Coin_C_CombineCoins_Params params {};
		params.OtherCoins = OtherCoins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.UserConstructionScript");
		
		ABP_Coin_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.CheckForCostumeChange
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::CheckForCostumeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.CheckForCostumeChange");
		
		ABP_Coin_C_CheckForCostumeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.RemoveCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::RemoveCoins(int32_t AmountToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.RemoveCoins");
		
		ABP_Coin_C_RemoveCoins_Params params {};
		params.AmountToRemove = AmountToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.PlayCoinSound
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::PlayCoinSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.PlayCoinSound");
		
		ABP_Coin_C_PlayCoinSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.ReceiveBeginPlay");
		
		ABP_Coin_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.RestackCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_Coin_C*>                          Coins                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Coin_C::RestackCoins(TArray<class ABP_Coin_C*> Coins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.RestackCoins");
		
		ABP_Coin_C_RestackCoins_Params params {};
		params.Coins = Coins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.OverrideLoaded");
		
		ABP_Coin_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideHighlighted
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::OverrideHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.OverrideHighlighted");
		
		ABP_Coin_C_OverrideHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideUnhighlighted
	 * 		Flags  -> ()
	 */
	void ABP_Coin_C::OverrideUnhighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.OverrideUnhighlighted");
		
		ABP_Coin_C_OverrideUnhighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.OverrideHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::OverrideHit(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.OverrideHit");
		
		ABP_Coin_C_OverrideHit_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coin.BP_Coin_C.ExecuteUbergraph_BP_Coin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coin_C::ExecuteUbergraph_BP_Coin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coin.BP_Coin_C.ExecuteUbergraph_BP_Coin");
		
		ABP_Coin_C_ExecuteUbergraph_BP_Coin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Coin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Coin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Coin.BP_Coin_C");
		return ptr;
	}

}



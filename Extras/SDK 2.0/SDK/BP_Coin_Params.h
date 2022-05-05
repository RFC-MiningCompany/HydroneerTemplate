#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Coin.BP_Coin_C.CombineCoins
	 */
	struct ABP_Coin_C_CombineCoins_Params
	{
	public:
		class ABP_Coin_C*                                          OtherCoins;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Coin.BP_Coin_C.UserConstructionScript
	 */
	struct ABP_Coin_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.CheckForCostumeChange
	 */
	struct ABP_Coin_C_CheckForCostumeChange_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.RemoveCoins
	 */
	struct ABP_Coin_C_RemoveCoins_Params
	{
	public:
		int32_t                                                    AmountToRemove;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Coin.BP_Coin_C.PlayCoinSound
	 */
	struct ABP_Coin_C_PlayCoinSound_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.ReceiveBeginPlay
	 */
	struct ABP_Coin_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.RestackCoins
	 */
	struct ABP_Coin_C_RestackCoins_Params
	{
	public:
		TArray<class ABP_Coin_C*>                                  Coins;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function BP_Coin.BP_Coin_C.OverrideLoaded
	 */
	struct ABP_Coin_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.OverrideHighlighted
	 */
	struct ABP_Coin_C_OverrideHighlighted_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.OverrideUnhighlighted
	 */
	struct ABP_Coin_C_OverrideUnhighlighted_Params
	{
	};

	/**
	 * Function BP_Coin.BP_Coin_C.OverrideHit
	 */
	struct ABP_Coin_C_OverrideHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Coin.BP_Coin_C.ExecuteUbergraph_BP_Coin
	 */
	struct ABP_Coin_C_ExecuteUbergraph_BP_Coin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

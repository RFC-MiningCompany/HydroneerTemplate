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
	 * Function BP_GameState.BP_GameState_C.ComponentsToSave
	 */
	struct ABP_GameState_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_GameState.BP_GameState_C.AddVehiclesToSaveObject
	 */
	struct ABP_GameState_C_AddVehiclesToSaveObject_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.LoadVehicles
	 */
	struct ABP_GameState_C_LoadVehicles_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.UpdateAllStockBoards
	 */
	struct ABP_GameState_C_UpdateAllStockBoards_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.InitStockPrices
	 */
	struct ABP_GameState_C_InitStockPrices_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.DecrementStockPrice
	 */
	struct ABP_GameState_C_DecrementStockPrice_Params
	{
	public:
		E_Stocks_E_Stocks                                          Stock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_Stocks_C*                                        StockMarket;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameState.BP_GameState_C.ChangeStockPrices
	 */
	struct ABP_GameState_C_ChangeStockPrices_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ActorSaved
	 */
	struct ABP_GameState_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.NewGame
	 */
	struct ABP_GameState_C_NewGame_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ActorLoaded
	 */
	struct ABP_GameState_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.StartAutoSaver
	 */
	struct ABP_GameState_C_StartAutoSaver_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.autosave
	 */
	struct ABP_GameState_C_autosave_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
	 */
	struct ABP_GameState_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ActorPreSave
	 */
	struct ABP_GameState_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
	 */
	struct ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

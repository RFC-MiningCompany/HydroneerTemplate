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
	 * Function AC_StoreFunctions.AC_StoreFunctions_C.CalcWeight
	 */
	struct UAC_StoreFunctions_C_CalcWeight_Params
	{
	public:
		TArray<class ABP_ParentResource_C*>                        Resources;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Weight;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_StoreFunctions.AC_StoreFunctions_C.CalcPrice
	 */
	struct UAC_StoreFunctions_C_CalcPrice_Params
	{
	public:
		TArray<class ABP_ParentResource_C*>                        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Total;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_StoreFunctions.AC_StoreFunctions_C.CalculateCraftedPrice
	 */
	struct UAC_StoreFunctions_C_CalculateCraftedPrice_Params
	{
	public:
		class ABP_ParentCraftedResource_C*                         CraftedItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Price;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_StoreFunctions.AC_StoreFunctions_C.CalculateFishPrice
	 */
	struct UAC_StoreFunctions_C_CalculateFishPrice_Params
	{
	public:
		class ABP_CaughtFish_C*                                    Fish;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Cost;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_StoreFunctions.AC_StoreFunctions_C.ReplaceCoinsWithNewValue
	 */
	struct UAC_StoreFunctions_C_ReplaceCoinsWithNewValue_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          SpawnLocation;                                           // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function AC_StoreFunctions.AC_StoreFunctions_C.GetTotalCoinValue
	 */
	struct UAC_StoreFunctions_C_GetTotalCoinValue_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

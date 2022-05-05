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
	 * Function AC_Splitter.AC_Splitter_C.SplitDirt
	 */
	struct UAC_Splitter_C_SplitDirt_Params
	{
	public:
		class ABP_DirtResource_C*                                  Dirt;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Splitter.AC_Splitter_C.SplitCoins
	 */
	struct UAC_Splitter_C_SplitCoins_Params
	{
	public:
		class ABP_Coin_C*                                          Coins;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

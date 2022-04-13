#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Function BP_WorldMap.BP_WorldMap_C.OverridePickedup
	 */
	struct ABP_WorldMap_C_OverridePickedup_Params
	{	};

	/**
	 * Function BP_WorldMap.BP_WorldMap_C.OverrideDroppedItem
	 */
	struct ABP_WorldMap_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WorldMap.BP_WorldMap_C.ExecuteUbergraph_BP_WorldMap
	 */
	struct ABP_WorldMap_C_ExecuteUbergraph_BP_WorldMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

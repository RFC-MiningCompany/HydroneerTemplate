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
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.TryRepair
	 */
	struct ABP_MagnifyingGlass_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.DoneRepair
	 */
	struct ABP_MagnifyingGlass_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.FindDurability
	 */
	struct ABP_MagnifyingGlass_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverridePickedup
	 */
	struct ABP_MagnifyingGlass_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.LineTracer
	 */
	struct ABP_MagnifyingGlass_C_LineTracer_Params
	{
	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverrideDroppedItem
	 */
	struct ABP_MagnifyingGlass_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ReturnDurability
	 */
	struct ABP_MagnifyingGlass_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ExecuteUbergraph_BP_MagnifyingGlass
	 */
	struct ABP_MagnifyingGlass_C_ExecuteUbergraph_BP_MagnifyingGlass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.TryRepair
	 */
	struct ABP_LogicDurabilityReader_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.DoneRepair
	 */
	struct ABP_LogicDurabilityReader_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.FindDurability
	 */
	struct ABP_LogicDurabilityReader_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePlacedDown
	 */
	struct ABP_LogicDurabilityReader_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePickedup
	 */
	struct ABP_LogicDurabilityReader_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverrideLoaded
	 */
	struct ABP_LogicDurabilityReader_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReadTime
	 */
	struct ABP_LogicDurabilityReader_C_ReadTime_Params
	{
	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReturnDurability
	 */
	struct ABP_LogicDurabilityReader_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ExecuteUbergraph_BP_LogicDurabilityReader
	 */
	struct ABP_LogicDurabilityReader_C_ExecuteUbergraph_BP_LogicDurabilityReader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

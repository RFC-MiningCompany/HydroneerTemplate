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
	 * Function BP_LogicRepeater.BP_LogicRepeater_C.OverridePlacedDown
	 */
	struct ABP_LogicRepeater_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicRepeater.BP_LogicRepeater_C.OverrideLoaded
	 */
	struct ABP_LogicRepeater_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicRepeater.BP_LogicRepeater_C.ItemPickedUp
	 */
	struct ABP_LogicRepeater_C_ItemPickedUp_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicRepeater.BP_LogicRepeater_C.Repeat
	 */
	struct ABP_LogicRepeater_C_Repeat_Params
	{
	};

	/**
	 * Function BP_LogicRepeater.BP_LogicRepeater_C.ExecuteUbergraph_BP_LogicRepeater
	 */
	struct ABP_LogicRepeater_C_ExecuteUbergraph_BP_LogicRepeater_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

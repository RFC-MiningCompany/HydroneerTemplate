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
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.TrySetDevMaterial
	 */
	struct ABP_ParentPipeIntake_C_TrySetDevMaterial_Params
	{
	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.CreateProxyItem
	 */
	struct ABP_ParentPipeIntake_C_CreateProxyItem_Params
	{
	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.UserConstructionScript
	 */
	struct ABP_ParentPipeIntake_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverrideLoaded
	 */
	struct ABP_ParentPipeIntake_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.WaterFlow
	 */
	struct ABP_ParentPipeIntake_C_WaterFlow_Params
	{
	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverridePickedup
	 */
	struct ABP_ParentPipeIntake_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverridePlacedDown
	 */
	struct ABP_ParentPipeIntake_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.ExecuteUbergraph_BP_ParentPipeIntake
	 */
	struct ABP_ParentPipeIntake_C_ExecuteUbergraph_BP_ParentPipeIntake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

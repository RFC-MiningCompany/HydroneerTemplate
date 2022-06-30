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
	 * Function BP_Spanner.BP_Spanner_C.TryRepair
	 */
	struct ABP_Spanner_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.FindDurability
	 */
	struct ABP_Spanner_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.ReturnDurability
	 */
	struct ABP_Spanner_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.LMBDownWhileCarrying
	 */
	struct ABP_Spanner_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.DoneRepair
	 */
	struct ABP_Spanner_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.OverrideAnimFinished
	 */
	struct ABP_Spanner_C_OverrideAnimFinished_Params
	{
	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.OverrideHit
	 */
	struct ABP_Spanner_C_OverrideHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Spanner.BP_Spanner_C.ExecuteUbergraph_BP_Spanner
	 */
	struct ABP_Spanner_C_ExecuteUbergraph_BP_Spanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

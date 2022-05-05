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
	 * Function BP_ParentDrill.BP_ParentDrill_C.ComponentsToSave_1
	 */
	struct ABP_ParentDrill_C_ComponentsToSave_1_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.CalcDrillCooldown
	 */
	struct ABP_ParentDrill_C_CalcDrillCooldown_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.CalcNewDurability
	 */
	struct ABP_ParentDrill_C_CalcNewDurability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.DirtHitCheck
	 */
	struct ABP_ParentDrill_C_DirtHitCheck_Params
	{
	public:
		bool                                                       HitDirt_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DQA;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.TryRepair
	 */
	struct ABP_ParentDrill_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.FindDurability
	 */
	struct ABP_ParentDrill_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.LMBDownIsTarget
	 */
	struct ABP_ParentDrill_C_LMBDownIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Insigator;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.OverrideWaterIn
	 */
	struct ABP_ParentDrill_C_OverrideWaterIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RootPressure;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.DrillCooldown
	 */
	struct ABP_ParentDrill_C_DrillCooldown_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.OverridePlayOneShotAnim
	 */
	struct ABP_ParentDrill_C_OverridePlayOneShotAnim_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.ToggleLight
	 */
	struct ABP_ParentDrill_C_ToggleLight_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.OverridePickedup
	 */
	struct ABP_ParentDrill_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.ReturnDurability
	 */
	struct ABP_ParentDrill_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.SpawnDirt
	 */
	struct ABP_ParentDrill_C_SpawnDirt_Params
	{
	public:
		int32_t                                                    DirtQuality;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Weight;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.DoneRepair
	 */
	struct ABP_ParentDrill_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.OverrideDrillStop
	 */
	struct ABP_ParentDrill_C_OverrideDrillStop_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.OverrideDrillStart
	 */
	struct ABP_ParentDrill_C_OverrideDrillStart_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.OverrideEmptyWaterPipe
	 */
	struct ABP_ParentDrill_C_OverrideEmptyWaterPipe_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.ActorLoaded
	 */
	struct ABP_ParentDrill_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_ParentDrill.BP_ParentDrill_C.ExecuteUbergraph_BP_ParentDrill
	 */
	struct ABP_ParentDrill_C_ExecuteUbergraph_BP_ParentDrill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

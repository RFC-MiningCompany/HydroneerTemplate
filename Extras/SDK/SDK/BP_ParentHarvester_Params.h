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
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.ComponentsToSave_1
	 */
	struct ABP_ParentHarvester_C_ComponentsToSave_1_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.TryRepair
	 */
	struct ABP_ParentHarvester_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.FindDurability
	 */
	struct ABP_ParentHarvester_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.ReturnDurability
	 */
	struct ABP_ParentHarvester_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.OverrideWaterIn
	 */
	struct ABP_ParentHarvester_C_OverrideWaterIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RootPressure;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.OverrideEmptyWaterPipe
	 */
	struct ABP_ParentHarvester_C_OverrideEmptyWaterPipe_Params
	{
	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.OverridePickedup
	 */
	struct ABP_ParentHarvester_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.ToggleHarvester
	 */
	struct ABP_ParentHarvester_C_ToggleHarvester_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.SpinTimer
	 */
	struct ABP_ParentHarvester_C_SpinTimer_Params
	{
	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.DoneRepair
	 */
	struct ABP_ParentHarvester_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.BndEvt__Harvesting_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentHarvester_C_BndEvt__Harvesting_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentHarvester.BP_ParentHarvester_C.ExecuteUbergraph_BP_ParentHarvester
	 */
	struct ABP_ParentHarvester_C_ExecuteUbergraph_BP_ParentHarvester_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

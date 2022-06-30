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
	 * Function BP_HookFilter.BP_HookFilter_C.ComponentsToSave_1
	 */
	struct ABP_HookFilter_C_ComponentsToSave_1_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_HookFilter.BP_HookFilter_C.HookFunctionality
	 */
	struct ABP_HookFilter_C_HookFunctionality_Params
	{
	public:
		class ABP_ParentItem_C*                                    HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_HookFilter.BP_HookFilter_C.ReturnDurability
	 */
	struct ABP_HookFilter_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_HookFilter.BP_HookFilter_C.TryRepair
	 */
	struct ABP_HookFilter_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_HookFilter.BP_HookFilter_C.DoneRepair
	 */
	struct ABP_HookFilter_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_HookFilter.BP_HookFilter_C.FindDurability
	 */
	struct ABP_HookFilter_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_HookFilter.BP_HookFilter_C.ExecuteUbergraph_BP_HookFilter
	 */
	struct ABP_HookFilter_C_ExecuteUbergraph_BP_HookFilter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

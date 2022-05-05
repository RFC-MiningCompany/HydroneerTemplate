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
	 * Function BP_ToolBag.BP_ToolBag_C.ComponentsToSave
	 */
	struct ABP_ToolBag_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.TryRepair
	 */
	struct ABP_ToolBag_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.FindDurability
	 */
	struct ABP_ToolBag_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.ReturnDurability
	 */
	struct ABP_ToolBag_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.RefreshTools
	 */
	struct ABP_ToolBag_C_RefreshTools_Params
	{
	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.LMBDownWhileCarrying
	 */
	struct ABP_ToolBag_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.DoneRepair
	 */
	struct ABP_ToolBag_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.OverrideAnimFinished
	 */
	struct ABP_ToolBag_C_OverrideAnimFinished_Params
	{
	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.ActorLoaded
	 */
	struct ABP_ToolBag_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_ToolBag.BP_ToolBag_C.ExecuteUbergraph_BP_ToolBag
	 */
	struct ABP_ToolBag_C_ExecuteUbergraph_BP_ToolBag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

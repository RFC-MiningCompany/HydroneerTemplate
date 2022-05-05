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
	 * Function BP_LogicLever.BP_LogicLever_C.OverrideLoaded
	 */
	struct ABP_LogicLever_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicLever.BP_LogicLever_C.LMBDownIsTarget
	 */
	struct ABP_LogicLever_C_LMBDownIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Insigator;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicLever.BP_LogicLever_C.OverrideAnimFinished
	 */
	struct ABP_LogicLever_C_OverrideAnimFinished_Params
	{
	};

	/**
	 * Function BP_LogicLever.BP_LogicLever_C.ExecuteUbergraph_BP_LogicLever
	 */
	struct ABP_LogicLever_C_ExecuteUbergraph_BP_LogicLever_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

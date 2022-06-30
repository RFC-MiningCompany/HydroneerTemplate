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
	 * Function BP_GrindingWheel.BP_GrindingWheel_C.GrindGem
	 */
	struct ABP_GrindingWheel_C_GrindGem_Params
	{
	public:
		class ABP_ParentResource_C*                                UncutGem;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GrindingWheel.BP_GrindingWheel_C.SpinWheel
	 */
	struct ABP_GrindingWheel_C_SpinWheel_Params
	{
	};

	/**
	 * Function BP_GrindingWheel.BP_GrindingWheel_C.LMBDownIsTarget
	 */
	struct ABP_GrindingWheel_C_LMBDownIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Insigator;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GrindingWheel.BP_GrindingWheel_C.ExecuteUbergraph_BP_GrindingWheel
	 */
	struct ABP_GrindingWheel_C_ExecuteUbergraph_BP_GrindingWheel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

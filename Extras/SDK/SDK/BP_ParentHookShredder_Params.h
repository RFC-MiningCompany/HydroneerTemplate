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
	 * Function BP_ParentHookShredder.BP_ParentHookShredder_C.ShredTimer
	 */
	struct ABP_ParentHookShredder_C_ShredTimer_Params
	{
	};

	/**
	 * Function BP_ParentHookShredder.BP_ParentHookShredder_C.HookFunctionality
	 */
	struct ABP_ParentHookShredder_C_HookFunctionality_Params
	{
	public:
		class ABP_ParentItem_C*                                    HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentHookShredder.BP_ParentHookShredder_C.OverridePickedup
	 */
	struct ABP_ParentHookShredder_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentHookShredder.BP_ParentHookShredder_C.OverrideParentNoWater
	 */
	struct ABP_ParentHookShredder_C_OverrideParentNoWater_Params
	{
	};

	/**
	 * Function BP_ParentHookShredder.BP_ParentHookShredder_C.BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentHookShredder_C_BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_ParentHookShredder.BP_ParentHookShredder_C.ExecuteUbergraph_BP_ParentHookShredder
	 */
	struct ABP_ParentHookShredder_C_ExecuteUbergraph_BP_ParentHookShredder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

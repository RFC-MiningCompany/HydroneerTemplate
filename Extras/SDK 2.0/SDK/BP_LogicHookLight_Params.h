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
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.TurnOffLight
	 */
	struct ABP_LogicHookLight_C_TurnOffLight_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.HookFunctionality
	 */
	struct ABP_LogicHookLight_C_HookFunctionality_Params
	{
	public:
		class ABP_ParentItem_C*                                    HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.UserConstructionScript
	 */
	struct ABP_LogicHookLight_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.Timeline_0__FinishedFunc
	 */
	struct ABP_LogicHookLight_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.Timeline_0__UpdateFunc
	 */
	struct ABP_LogicHookLight_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.Timeline_1__FinishedFunc
	 */
	struct ABP_LogicHookLight_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.Timeline_1__UpdateFunc
	 */
	struct ABP_LogicHookLight_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.OverrideLoaded
	 */
	struct ABP_LogicHookLight_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.RaiseBrightness
	 */
	struct ABP_LogicHookLight_C_RaiseBrightness_Params
	{
	public:
		bool                                                       Up_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.ChangeColor
	 */
	struct ABP_LogicHookLight_C_ChangeColor_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.NewLogicInput
	 */
	struct ABP_LogicHookLight_C_NewLogicInput_Params
	{
	public:
		class ABP_ParentLogic_C*                                   LogicItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.OverridePickedup
	 */
	struct ABP_LogicHookLight_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicHookLight.BP_LogicHookLight_C.ExecuteUbergraph_BP_LogicHookLight
	 */
	struct ABP_LogicHookLight_C_ExecuteUbergraph_BP_LogicHookLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_LogicHookDiode.BP_LogicHookDiode_C.HookFunctionality
	 */
	struct ABP_LogicHookDiode_C_HookFunctionality_Params
	{
	public:
		class ABP_ParentItem_C*                                    HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicHookDiode.BP_LogicHookDiode_C.OverridePartHooked
	 */
	struct ABP_LogicHookDiode_C_OverridePartHooked_Params
	{
	public:
		class ABP_ParentBuild_C*                                   HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicHookDiode.BP_LogicHookDiode_C.OverrideLoaded
	 */
	struct ABP_LogicHookDiode_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicHookDiode.BP_LogicHookDiode_C.ExecuteUbergraph_BP_LogicHookDiode
	 */
	struct ABP_LogicHookDiode_C_ExecuteUbergraph_BP_LogicHookDiode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

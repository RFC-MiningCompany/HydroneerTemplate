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
	 * Function BP_ParentHook.BP_ParentHook_C.HookFunctionality
	 */
	struct ABP_ParentHook_C_HookFunctionality_Params
	{
	public:
		class ABP_ParentItem_C*                                    HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.PartHooked
	 */
	struct ABP_ParentHook_C_PartHooked_Params
	{
	public:
		class ABP_ParentBuild_C*                                   HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.Unhook from Parent
	 */
	struct ABP_ParentHook_C_Unhook_from_Parent_Params
	{
	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.TraceForParents
	 */
	struct ABP_ParentHook_C_TraceForParents_Params
	{
	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.OverridePlacedDown
	 */
	struct ABP_ParentHook_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.OverridePickedup
	 */
	struct ABP_ParentHook_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.OverrideParentNoWater
	 */
	struct ABP_ParentHook_C_OverrideParentNoWater_Params
	{
	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.OverridePartHooked
	 */
	struct ABP_ParentHook_C_OverridePartHooked_Params
	{
	public:
		class ABP_ParentBuild_C*                                   HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.OverrideLogicIn
	 */
	struct ABP_ParentHook_C_OverrideLogicIn_Params
	{
	public:
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.ActorLoaded
	 */
	struct ABP_ParentHook_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_ParentHook.BP_ParentHook_C.ExecuteUbergraph_BP_ParentHook
	 */
	struct ABP_ParentHook_C_ExecuteUbergraph_BP_ParentHook_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

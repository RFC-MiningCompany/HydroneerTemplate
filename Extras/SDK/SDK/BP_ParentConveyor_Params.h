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
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.HookFunctionality
	 */
	struct ABP_ParentConveyor_C_HookFunctionality_Params
	{
	public:
		class ABP_ParentItem_C*                                    HookedTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.ChangeBeltSpeed
	 */
	struct ABP_ParentConveyor_C_ChangeBeltSpeed_Params
	{
	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.UserConstructionScript
	 */
	struct ABP_ParentConveyor_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.OverridePlacedDown
	 */
	struct ABP_ParentConveyor_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideStartPlacing
	 */
	struct ABP_ParentConveyor_C_OverrideStartPlacing_Params
	{
	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideDroppedItem
	 */
	struct ABP_ParentConveyor_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.ItemPickedUp
	 */
	struct ABP_ParentConveyor_C_ItemPickedUp_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideParentNoWater
	 */
	struct ABP_ParentConveyor_C_OverrideParentNoWater_Params
	{
	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.ShovelOnToConveyor
	 */
	struct ABP_ParentConveyor_C_ShovelOnToConveyor_Params
	{
	public:
		int32_t                                                    Quality;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.ItemExitConveyor
	 */
	struct ABP_ParentConveyor_C_ItemExitConveyor_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ForwardVec;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentConveyor.BP_ParentConveyor_C.ExecuteUbergraph_BP_ParentConveyor
	 */
	struct ABP_ParentConveyor_C_ExecuteUbergraph_BP_ParentConveyor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

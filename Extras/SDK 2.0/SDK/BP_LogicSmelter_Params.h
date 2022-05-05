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
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.ComponentsToSave_1
	 */
	struct ABP_LogicSmelter_C_ComponentsToSave_1_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.SetNewLiquidType
	 */
	struct ABP_LogicSmelter_C_SetNewLiquidType_Params
	{
	public:
		E_MetalType_E_MetalType                                    InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.FindLiquidClass
	 */
	struct ABP_LogicSmelter_C_FindLiquidClass_Params
	{
	public:
		class ABP_ParentResource_C*                                NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_MetalType_E_MetalType                                    Type;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.SetLiquidHeight
	 */
	struct ABP_LogicSmelter_C_SetLiquidHeight_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__FinishedFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__UpdateFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__Create Bar__EventFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_0__Create_Bar__EventFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__FinishedFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__UpdateFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicSmelter_C_BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.NewItemInPot
	 */
	struct ABP_LogicSmelter_C_NewItemInPot_Params
	{
	public:
		class ABP_ParentResource_C*                                Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.RotateDoors
	 */
	struct ABP_LogicSmelter_C_RotateDoors_Params
	{
	public:
		bool                                                       Open_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.CreateBar
	 */
	struct ABP_LogicSmelter_C_CreateBar_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.TipBar
	 */
	struct ABP_LogicSmelter_C_TipBar_Params
	{
	public:
		bool                                                       Up_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.PourParticles
	 */
	struct ABP_LogicSmelter_C_PourParticles_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLoaded
	 */
	struct ABP_LogicSmelter_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.ToggleFlame
	 */
	struct ABP_LogicSmelter_C_ToggleFlame_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.DropBar
	 */
	struct ABP_LogicSmelter_C_DropBar_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePickedup
	 */
	struct ABP_LogicSmelter_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.TestForSparks
	 */
	struct ABP_LogicSmelter_C_TestForSparks_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.ReturnDurability
	 */
	struct ABP_LogicSmelter_C_ReturnDurability_Params
	{
	public:
		float                                                      DurabilityAmount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.TryRepair
	 */
	struct ABP_LogicSmelter_C_TryRepair_Params
	{
	public:
		class ABP_ParentItem_C*                                    RepairingTool;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.DoneRepair
	 */
	struct ABP_LogicSmelter_C_DoneRepair_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.FindDurability
	 */
	struct ABP_LogicSmelter_C_FindDurability_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLogicIn
	 */
	struct ABP_LogicSmelter_C_OverrideLogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePlacedDown
	 */
	struct ABP_LogicSmelter_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.ExecuteUbergraph_BP_LogicSmelter
	 */
	struct ABP_LogicSmelter_C_ExecuteUbergraph_BP_LogicSmelter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

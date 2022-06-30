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
	 * Function BP_Crucible.BP_Crucible_C.LoopResourcesForTargets
	 */
	struct ABP_Crucible_C_LoopResourcesForTargets_Params
	{
	public:
		class UClass*                                              Ore;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Bar;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_ParentResource_C*>                        Items;                                                   // 0x0010(0x0010)  (Parm, OutParm)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.FindTestClass
	 */
	struct ABP_Crucible_C_FindTestClass_Params
	{
	public:
		E_MetalType_E_MetalType                                    CurrentMoltenType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_ParentResource_C*>                        Class;                                                   // 0x0008(0x0010)  (Parm, OutParm)
		int32_t                                                    BarOut;                                                  // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.UserConstructionScript
	 */
	struct ABP_Crucible_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.StoredItemPickedUp
	 */
	struct ABP_Crucible_C_StoredItemPickedUp_Params
	{
	public:
		class ABP_ParentItem_C*                                    ItemPickedUp;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.WaterParticleHit
	 */
	struct ABP_Crucible_C_WaterParticleHit_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Crucible_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Crucible.BP_Crucible_C.SpawnBar
	 */
	struct ABP_Crucible_C_SpawnBar_Params
	{
	public:
		class ABP_Mould_C*                                         Mould;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.PlayPourAnim
	 */
	struct ABP_Crucible_C_PlayPourAnim_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.OverrideLoaded
	 */
	struct ABP_Crucible_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.UpdateVisuals
	 */
	struct ABP_Crucible_C_UpdateVisuals_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.LMBDownWhileCarrying
	 */
	struct ABP_Crucible_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.HeatUpdated
	 */
	struct ABP_Crucible_C_HeatUpdated_Params
	{
	public:
		float                                                      Heat;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.FullHeat
	 */
	struct ABP_Crucible_C_FullHeat_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.InFire
	 */
	struct ABP_Crucible_C_InFire_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.OutOfFire
	 */
	struct ABP_Crucible_C_OutOfFire_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.InWater
	 */
	struct ABP_Crucible_C_InWater_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.ItemStored
	 */
	struct ABP_Crucible_C_ItemStored_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Crucible_C_BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.ExecuteUbergraph_BP_Crucible
	 */
	struct ABP_Crucible_C_ExecuteUbergraph_BP_Crucible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_RodTrader.BP_RodTrader_C.ComponentsToSave
	 */
	struct ABP_RodTrader_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ChangeMeshes
	 */
	struct ABP_RodTrader_C_ChangeMeshes_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ChangeTargetFish
	 */
	struct ABP_RodTrader_C_ChangeTargetFish_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.DoWeHaveFish?
	 */
	struct ABP_RodTrader_C_DoWeHaveFish__Params
	{
	public:
		bool                                                       HaveFish_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ArrayIndex;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.Timeline_0__FinishedFunc
	 */
	struct ABP_RodTrader_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.Timeline_0__UpdateFunc
	 */
	struct ABP_RodTrader_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.OverrideMouseClicked
	 */
	struct ABP_RodTrader_C_OverrideMouseClicked_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_RodTrader_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_RodTrader_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ButtonSound
	 */
	struct ABP_RodTrader_C_ButtonSound_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ActorSaved
	 */
	struct ABP_RodTrader_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ReleaseTheRod
	 */
	struct ABP_RodTrader_C_ReleaseTheRod_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.SpawnRod
	 */
	struct ABP_RodTrader_C_SpawnRod_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ActorPreSave
	 */
	struct ABP_RodTrader_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.Animate
	 */
	struct ABP_RodTrader_C_Animate_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ActorLoaded
	 */
	struct ABP_RodTrader_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ExecuteUbergraph_BP_RodTrader
	 */
	struct ABP_RodTrader_C_ExecuteUbergraph_BP_RodTrader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

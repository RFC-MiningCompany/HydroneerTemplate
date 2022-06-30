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
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.Add to Contents
	 */
	struct ABP_IcehelmMasterwork_C_Add_to_Contents_Params
	{
	public:
		struct FS_ResourceEnumAndWeight                            Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.IsClassInOurRequirements?
	 */
	struct ABP_IcehelmMasterwork_C_IsClassInOurRequirements__Params
	{
	public:
		class UClass*                                              Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRequired_;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_MetalType_E_MetalType                                    Type;                                                    // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.FindWeightNeededOfSpecific
	 */
	struct ABP_IcehelmMasterwork_C_FindWeightNeededOfSpecific_Params
	{
	public:
		E_MetalType_E_MetalType                                    Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Weight;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpawnAdditionalBars
	 */
	struct ABP_IcehelmMasterwork_C_SpawnAdditionalBars_Params
	{
	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.Has All Required Contents?
	 */
	struct ABP_IcehelmMasterwork_C_Has_All_Required_Contents__Params
	{
	public:
		bool                                                       HasAllRequirements_;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.PlayAnimationAndSounds
	 */
	struct ABP_IcehelmMasterwork_C_PlayAnimationAndSounds_Params
	{
	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpawnItem
	 */
	struct ABP_IcehelmMasterwork_C_SpawnItem_Params
	{
	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ResetAll
	 */
	struct ABP_IcehelmMasterwork_C_ResetAll_Params
	{
	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.OverrideMouseClicked
	 */
	struct ABP_IcehelmMasterwork_C_OverrideMouseClicked_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_IcehelmMasterwork_C_BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_IcehelmMasterwork_C_BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_IcehelmMasterwork_C_BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ExecuteUbergraph_BP_IcehelmMasterwork
	 */
	struct ABP_IcehelmMasterwork_C_ExecuteUbergraph_BP_IcehelmMasterwork_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

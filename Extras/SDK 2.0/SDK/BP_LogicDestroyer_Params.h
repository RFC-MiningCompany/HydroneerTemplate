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
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverrideLoaded
	 */
	struct ABP_LogicDestroyer_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverridePickedup
	 */
	struct ABP_LogicDestroyer_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverrideLogicIn
	 */
	struct ABP_LogicDestroyer_C_OverrideLogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.Spinner
	 */
	struct ABP_LogicDestroyer_C_Spinner_Params
	{
	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicDestroyer_C_BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.StopSpinning
	 */
	struct ABP_LogicDestroyer_C_StopSpinning_Params
	{
	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverridePlacedDown
	 */
	struct ABP_LogicDestroyer_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.StartSpinning
	 */
	struct ABP_LogicDestroyer_C_StartSpinning_Params
	{
	};

	/**
	 * Function BP_LogicDestroyer.BP_LogicDestroyer_C.ExecuteUbergraph_BP_LogicDestroyer
	 */
	struct ABP_LogicDestroyer_C_ExecuteUbergraph_BP_LogicDestroyer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

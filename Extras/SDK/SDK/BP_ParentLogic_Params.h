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
	 * Function BP_ParentLogic.BP_ParentLogic_C.AttachmentFunctionalityCheck
	 */
	struct ABP_ParentLogic_C_AttachmentFunctionalityCheck_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.CastLogicOut
	 */
	struct ABP_ParentLogic_C_CastLogicOut_Params
	{
	public:
		class USceneComponent*                                     OutComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideLogicIn
	 */
	struct ABP_ParentLogic_C_OverrideLogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.SpawnLogic
	 */
	struct ABP_ParentLogic_C_SpawnLogic_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.StackOverflowPrevention
	 */
	struct ABP_ParentLogic_C_StackOverflowPrevention_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.LogicIn
	 */
	struct ABP_ParentLogic_C_LogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideWaterIn
	 */
	struct ABP_ParentLogic_C_OverrideWaterIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quality;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Pressure;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.ExecuteUbergraph_BP_ParentLogic
	 */
	struct ABP_ParentLogic_C_ExecuteUbergraph_BP_ParentLogic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

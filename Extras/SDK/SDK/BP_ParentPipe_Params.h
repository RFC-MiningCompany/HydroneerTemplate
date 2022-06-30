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
	 * Function BP_ParentPipe.BP_ParentPipe_C.AttachmentFunctionalityCheck
	 */
	struct ABP_ParentPipe_C_AttachmentFunctionalityCheck_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPass_;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.OverrideWaterIn
	 */
	struct ABP_ParentPipe_C_OverrideWaterIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RootPressure;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.SpawnWater
	 */
	struct ABP_ParentPipe_C_SpawnWater_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.StackOverflowPrevention
	 */
	struct ABP_ParentPipe_C_StackOverflowPrevention_Params
	{
	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.TimerTillEmpty
	 */
	struct ABP_ParentPipe_C_TimerTillEmpty_Params
	{
	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.OverrideEmptyWaterPipe
	 */
	struct ABP_ParentPipe_C_OverrideEmptyWaterPipe_Params
	{
	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.WaterIn
	 */
	struct ABP_ParentPipe_C_WaterIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RootPressure;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.CastWaterOut
	 */
	struct ABP_ParentPipe_C_CastWaterOut_Params
	{
	public:
		class USceneComponent*                                     OutComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quality;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Pressure;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RootPressure;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPipe.BP_ParentPipe_C.ExecuteUbergraph_BP_ParentPipe
	 */
	struct ABP_ParentPipe_C_ExecuteUbergraph_BP_ParentPipe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

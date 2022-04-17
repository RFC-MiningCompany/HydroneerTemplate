#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Function BP_BedFancy.BP_BedFancy_C.Dummy
	 */
	struct ABP_BedFancy_C_Dummy_Params
	{	};

	/**
	 * Function BP_BedFancy.BP_BedFancy_C.ReceiveBeginPlay
	 */
	struct ABP_BedFancy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BedFancy.BP_BedFancy_C.ReceiveActorBeginOverlap
	 */
	struct ABP_BedFancy_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BedFancy.BP_BedFancy_C.ReceiveTick
	 */
	struct ABP_BedFancy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BedFancy.BP_BedFancy_C.ExecuteUbergraph_BP_BedFancy
	 */
	struct ABP_BedFancy_C_ExecuteUbergraph_BP_BedFancy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

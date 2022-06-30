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
	 * Function BP_DirtResource.BP_DirtResource_C.Cooldown
	 */
	struct ABP_DirtResource_C_Cooldown_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.OverrideHit
	 */
	struct ABP_DirtResource_C_OverrideHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.ReceiveBeginPlay
	 */
	struct ABP_DirtResource_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.ToggleSaveDirtChunksChanged
	 */
	struct ABP_DirtResource_C_ToggleSaveDirtChunksChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.ExecuteUbergraph_BP_DirtResource
	 */
	struct ABP_DirtResource_C_ExecuteUbergraph_BP_DirtResource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

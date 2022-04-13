#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.SetCraftedScale
	 */
	struct ABP_ParentCraftedResource_C_SetCraftedScale_Params
	{	};

	/**
	 * Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.UserConstructionScript
	 */
	struct ABP_ParentCraftedResource_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ActorLoaded
	 */
	struct ABP_ParentCraftedResource_C_ActorLoaded_Params
	{	};

	/**
	 * Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ReceiveTick
	 */
	struct ABP_ParentCraftedResource_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ExecuteUbergraph_BP_ParentCraftedResource
	 */
	struct ABP_ParentCraftedResource_C_ExecuteUbergraph_BP_ParentCraftedResource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

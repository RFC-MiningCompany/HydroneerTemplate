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
	 * Function BP_ShelfToolRack.BP_ShelfToolRack_C.UserConstructionScript
	 */
	struct ABP_ShelfToolRack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ShelfToolRack.BP_ShelfToolRack_C.ActorLoaded
	 */
	struct ABP_ShelfToolRack_C_ActorLoaded_Params
	{	};

	/**
	 * Function BP_ShelfToolRack.BP_ShelfToolRack_C.ReceiveTick
	 */
	struct ABP_ShelfToolRack_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShelfToolRack.BP_ShelfToolRack_C.ExecuteUbergraph_BP_ShelfToolRack
	 */
	struct ABP_ShelfToolRack_C_ExecuteUbergraph_BP_ShelfToolRack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

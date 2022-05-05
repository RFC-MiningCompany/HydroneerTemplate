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
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.TraceForVoxelWorld
	 */
	struct ABP_ParentLogicExplosives_C_TraceForVoxelWorld_Params
	{
	public:
		class ABP_HydroVoxelWorld_C*                               VoxWorld;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.FindOverlappingActors
	 */
	struct ABP_ParentLogicExplosives_C_FindOverlappingActors_Params
	{
	public:
		TArray<class ABP_ParentItem_C*>                            Items;                                                   // 0x0000(0x0010)  (Parm, OutParm)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.SpawnScrap
	 */
	struct ABP_ParentLogicExplosives_C_SpawnScrap_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.CreateHoles
	 */
	struct ABP_ParentLogicExplosives_C_CreateHoles_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.OverrideLoaded
	 */
	struct ABP_ParentLogicExplosives_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.OverridePlacedDown
	 */
	struct ABP_ParentLogicExplosives_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.OverrideDroppedItem
	 */
	struct ABP_ParentLogicExplosives_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.LoopForItems
	 */
	struct ABP_ParentLogicExplosives_C_LoopForItems_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.CheckOverlaps
	 */
	struct ABP_ParentLogicExplosives_C_CheckOverlaps_Params
	{
	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.OverrideLogicIn
	 */
	struct ABP_ParentLogicExplosives_C_OverrideLogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogicExplosives.BP_ParentLogicExplosives_C.ExecuteUbergraph_BP_ParentLogicExplosives
	 */
	struct ABP_ParentLogicExplosives_C_ExecuteUbergraph_BP_ParentLogicExplosives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

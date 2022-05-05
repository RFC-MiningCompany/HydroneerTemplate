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
	 * Function BP_HydroVoxelWorld.BP_HydroVoxelWorld_C.ComponentsToSave
	 */
	struct ABP_HydroVoxelWorld_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_HydroVoxelWorld.BP_HydroVoxelWorld_C.ActorPreSave
	 */
	struct ABP_HydroVoxelWorld_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_HydroVoxelWorld.BP_HydroVoxelWorld_C.ActorLoaded
	 */
	struct ABP_HydroVoxelWorld_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_HydroVoxelWorld.BP_HydroVoxelWorld_C.ActorSaved
	 */
	struct ABP_HydroVoxelWorld_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_HydroVoxelWorld.BP_HydroVoxelWorld_C.ExecuteUbergraph_BP_HydroVoxelWorld
	 */
	struct ABP_HydroVoxelWorld_C_ExecuteUbergraph_BP_HydroVoxelWorld_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_RelicSpawner.BP_RelicSpawner_C.ComponentsToSave
	 */
	struct ABP_RelicSpawner_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_RelicSpawner.BP_RelicSpawner_C.ActorPreSave
	 */
	struct ABP_RelicSpawner_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_RelicSpawner.BP_RelicSpawner_C.ActorSaved
	 */
	struct ABP_RelicSpawner_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_RelicSpawner.BP_RelicSpawner_C.SpawnRelic
	 */
	struct ABP_RelicSpawner_C_SpawnRelic_Params
	{
	};

	/**
	 * Function BP_RelicSpawner.BP_RelicSpawner_C.ActorLoaded
	 */
	struct ABP_RelicSpawner_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_RelicSpawner.BP_RelicSpawner_C.ExecuteUbergraph_BP_RelicSpawner
	 */
	struct ABP_RelicSpawner_C_ExecuteUbergraph_BP_RelicSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

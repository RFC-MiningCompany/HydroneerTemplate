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
	 * Function AC_Explosive.AC_Explosive_C.GetRandomSpaceInRadius
	 */
	struct UAC_Explosive_C_GetRandomSpaceInRadius_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.TraceForVoxelWorld
	 */
	struct UAC_Explosive_C_TraceForVoxelWorld_Params
	{
	public:
		class ABP_HydroVoxelWorld_C*                               VoxWorld;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.CreateHoles
	 */
	struct UAC_Explosive_C_CreateHoles_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.FindOverlappingActors
	 */
	struct UAC_Explosive_C_FindOverlappingActors_Params
	{
	public:
		TArray<class ABP_ParentItem_C*>                            Items;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.SpawnScrap
	 */
	struct UAC_Explosive_C_SpawnScrap_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.CheckOverlaps
	 */
	struct UAC_Explosive_C_CheckOverlaps_Params
	{	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.LoopForItems
	 */
	struct UAC_Explosive_C_LoopForItems_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.Explode
	 */
	struct UAC_Explosive_C_Explode_Params
	{	};

	/**
	 * Function AC_Explosive.AC_Explosive_C.ExecuteUbergraph_AC_Explosive
	 */
	struct UAC_Explosive_C_ExecuteUbergraph_AC_Explosive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

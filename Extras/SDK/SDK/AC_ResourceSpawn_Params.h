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
	 * Function AC_ResourceSpawn.AC_ResourceSpawn_C.BalanceResources
	 */
	struct UAC_ResourceSpawn_C_BalanceResources_Params
	{
	public:
		float                                                      DQA_In;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DQA_Out;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_ResourceSpawn.AC_ResourceSpawn_C.GetDirtDepth
	 */
	struct UAC_ResourceSpawn_C_GetDirtDepth_Params
	{
	public:
		struct FVector                                             AtLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HydroVoxelWorld_C*                               VoxelWorld;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    QualityValue;                                            // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnActorDontUsethis
	 */
	struct UAC_ResourceSpawn_C_SpawnActorDontUsethis_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      Weight;                                                  // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Impulse;                                                 // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_ResourceSpawn.AC_ResourceSpawn_C.CalcDQA
	 */
	struct UAC_ResourceSpawn_C_CalcDQA_Params
	{
	public:
		class USceneComponent*                                     VoxelWorld;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     DiggingComp;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Z_;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DirtQualityAverage;                                      // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnFish
	 */
	struct UAC_ResourceSpawn_C_SpawnFish_Params
	{
	public:
		struct FVector                                             Spawn_Transform_Location;                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Luck;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_CaughtFish_C*                                    Fish;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnResource
	 */
	struct UAC_ResourceSpawn_C_SpawnResource_Params
	{
	public:
		int32_t                                                    DirtLoads;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DirtQualityAverage;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          SpawnTrans;                                              // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

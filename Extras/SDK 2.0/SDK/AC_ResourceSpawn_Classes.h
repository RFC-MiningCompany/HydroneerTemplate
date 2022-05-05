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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AC_ResourceSpawn.AC_ResourceSpawn_C
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UAC_ResourceSpawn_C : public UActorComponent
	{
	public:
		void BalanceResources(float DQA_In, float* DQA_Out);
		void GetDirtDepth(const struct FVector& AtLocation, class ABP_HydroVoxelWorld_C* VoxelWorld, int32_t* QualityValue);
		void SpawnActorDontUsethis(class UClass* Class, const struct FTransform& SpawnTransform, float Weight, float Impulse);
		void CalcDQA(class USceneComponent* VoxelWorld, class USceneComponent* DiggingComp, bool Z_, int32_t* DirtQualityAverage);
		void SpawnFish(const struct FVector& Spawn_Transform_Location, int32_t Luck, class ABP_CaughtFish_C** Fish);
		void SpawnResource(int32_t DirtLoads, int32_t DirtQualityAverage, const struct FTransform& SpawnTrans, float Impulse);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

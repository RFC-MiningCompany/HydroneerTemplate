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
	 * BlueprintGeneratedClass BP_HydroVoxelWorld.BP_HydroVoxelWorld_C
	 * Size -> 0x0040 (FullSize[0x08B0] - InheritedSize[0x0870])
	 */
	class ABP_HydroVoxelWorld_C : public AVoxelWorld
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0870(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     TOPSOIL;                                                 // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHorizontal_;                                           // 0x0880(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_UQ9X[0x7];                                   // 0x0881(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelCompressedWorldSave                           CompressedSave;                                          // 0x0888(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
		bool                                                       BeenEdited_;                                             // 0x08A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NR89[0x3];                                   // 0x08A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmountSaved;                                             // 0x08AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void ActorPreSave();
		void ActorLoaded();
		void ActorSaved();
		void ExecuteUbergraph_BP_HydroVoxelWorld(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

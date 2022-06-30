#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_DirtResource.BP_DirtResource_C
	 * Size -> 0x0017 (FullSize[0x0390] - InheritedSize[0x0379])
	 */
	class ABP_DirtResource_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_2I5R[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		int32_t                                                    DirtQuality;                                             // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MaxDirtSize;                                             // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetChunkMaterial();
		void UserConstructionScript();
		void Cooldown();
		void OverrideHit(class AActor* OtherActor);
		void ReceiveBeginPlay();
		void ToggleSaveDirtChunksChanged(bool NewValue);
		void ExecuteUbergraph_BP_DirtResource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

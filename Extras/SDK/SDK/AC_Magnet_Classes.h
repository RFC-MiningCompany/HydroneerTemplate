#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * BlueprintGeneratedClass AC_Magnet.AC_Magnet_C
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UAC_Magnet_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ABP_ParentItem_C*>                            Resources;                                               // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        MagTimerHandle;                                          // 0x00C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     NewVar_1;                                                // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void NewItem(class ABP_ParentItem_C* Item);
		void RemoveItem(class ABP_ParentItem_C* Item);
		void StartMagnet(class USceneComponent* AttractLocation);
		void StopMagnet();
		void MagnetTimer();
		void PrepItemsMag();
		void PrepItemsDrop();
		void ExecuteUbergraph_AC_Magnet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

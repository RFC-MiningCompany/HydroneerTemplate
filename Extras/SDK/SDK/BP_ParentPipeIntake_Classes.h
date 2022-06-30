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
	 * BlueprintGeneratedClass BP_ParentPipeIntake.BP_ParentPipeIntake_C
	 * Size -> 0x0045 (FullSize[0x03F5] - InheritedSize[0x03B0])
	 */
	class ABP_ParentPipeIntake_C : public ABP_ParentPipe_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                Clip4;                                                   // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Clip3;                                                   // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Clip2;                                                   // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Clip1;                                                   // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        WaterFlowHandle;                                         // 0x03E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     IntakeSound;                                             // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BasePressure;                                            // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Dev_;                                                    // 0x03F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void TrySetDevMaterial();
		void CreateProxyItem();
		void UserConstructionScript();
		void OverrideLoaded();
		void WaterFlow();
		void OverridePickedup();
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void ExecuteUbergraph_BP_ParentPipeIntake(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

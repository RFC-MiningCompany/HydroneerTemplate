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
	 * BlueprintGeneratedClass BP_ParentBar.BP_ParentBar_C
	 * Size -> 0x001F (FullSize[0x0398] - InheritedSize[0x0379])
	 */
	class ABP_ParentBar_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_QX8C[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAC_Heat_C*                                          AC_Heat;                                                 // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void HeatUpdated(float Heat);
		void InFire(bool SlowBurn_);
		void OutOfFire();
		void FullHeat();
		void InWater(bool WaterBody_);
		void WaterParticleHit();
		void SetCraftedSize();
		void SetResourceSize();
		void ExecuteUbergraph_BP_ParentBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

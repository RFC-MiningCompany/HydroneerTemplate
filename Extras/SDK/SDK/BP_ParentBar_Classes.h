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
	 * BlueprintGeneratedClass BP_ParentBar.BP_ParentBar_C
	 * Size -> 0x001F (FullSize[0x0378] - InheritedSize[0x0359])
	 */
	class ABP_ParentBar_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_Y4PM[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAC_Heat_C*                                          AC_Heat;                                                 // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void HeatUpdated(float Heat);
		void InFire();
		void OutOfFire();
		void FullHeat();
		void InWater();
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

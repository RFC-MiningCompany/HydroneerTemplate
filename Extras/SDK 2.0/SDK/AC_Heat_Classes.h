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
	 * BlueprintGeneratedClass AC_Heat.AC_Heat_C
	 * Size -> 0x000D (FullSize[0x00BD] - InheritedSize[0x00B0])
	 */
	class UAC_Heat_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Heat;                                                    // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoCooldown_;                                             // 0x00BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InWater();
		void WaterParticleHit();
		void HeatUpdated(float Heat);
		void FullHeat();
		void StartHeat(float HeatIncrement);
		void StopHeat();
		void IncreaseHeat();
		void DecreaseHeat();
		void ResetFullHeat();
		void ZeroHeat();
		void InFire();
		void OutOfFire();
		void ExecuteUbergraph_AC_Heat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

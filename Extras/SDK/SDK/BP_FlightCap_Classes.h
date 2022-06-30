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
	 * BlueprintGeneratedClass BP_FlightCap.BP_FlightCap_C
	 * Size -> 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
	 */
	class ABP_FlightCap_C : public ABP_ParentHat_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideHatOn(class ABP_GameCharacter_C* Character);
		void OverrideHatOff(class ABP_GameCharacter_C* Character);
		void ExecuteUbergraph_BP_FlightCap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

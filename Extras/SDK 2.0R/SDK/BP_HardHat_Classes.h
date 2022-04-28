#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * BlueprintGeneratedClass BP_HardHat.BP_HardHat_C
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class ABP_HardHat_C : public ABP_ParentHat_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideHatOn(class ABP_GameCharacter_C* Character);
		void OverrideHatOff(class ABP_GameCharacter_C* Character);
		void ExecuteUbergraph_BP_HardHat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_ParentBuildSeedBag.BP_ParentBuildSeedBag_C
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class ABP_ParentBuildSeedBag_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void ExecuteUbergraph_BP_ParentBuildSeedBag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

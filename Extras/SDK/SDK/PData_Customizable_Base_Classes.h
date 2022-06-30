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
	 * BlueprintGeneratedClass PData_Customizable_Base.PData_Customizable_Base_C
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UPData_Customizable_Base_C : public UPrimaryDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              Icon[0x28];                                              // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

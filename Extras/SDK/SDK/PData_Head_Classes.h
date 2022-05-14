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
	 * BlueprintGeneratedClass PData_Head.PData_Head_C
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UPData_Head_C : public UPData_Customizable_Generic_C
	{
	public:
		TArray<class UPData_Hair_C*>                               Hair;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UPData_Beard_C*>                              Beards;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass PData_ClothingSet.PData_ClothingSet_C
	 * Size -> 0x0168 (FullSize[0x01D8] - InheritedSize[0x0070])
	 */
	class UPData_ClothingSet_C : public UPData_Customizable_Base_C
	{
	public:
		struct FS_CharacterClothing                                Hat;                                                     // 0x0070(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FS_CharacterClothing                                Shirt;                                                   // 0x00E8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FS_CharacterClothing                                Pants;                                                   // 0x0160(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

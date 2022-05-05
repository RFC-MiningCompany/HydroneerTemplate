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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_DTMasterworkMoulds.S_DTMasterworkMoulds
	 * Size -> 0x0040
	 */
	struct FS_DTMasterworkMoulds
	{
	public:
		class FText                                                Name_19_BDAAD5534ED637B65E392B82E8844517;                // 0x0000(0x0018) Edit, BlueprintVisible
		class UClass*                                              CraftableClass_5_A1018E4D4AB08DE2F4A8A0ABC2545E1F;       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StoreSellPrice_22_426D9A36487FF8738860B1A7E298F99F;      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S92B[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh_12_E95105BA46848F65220581B740FE2257;                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_ResourceEnumAndWeight>                    Requirements_13_8D84B51546F36C758B7B19A998B47358;        // 0x0030(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

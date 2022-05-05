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
	 * UserDefinedStruct S_CharacterClothing.S_CharacterClothing
	 * Size -> 0x0078
	 */
	struct FS_CharacterClothing
	{
	public:
		unsigned char                                              Mesh_16_72D0A517426BD3A330494EA6D6E0AFC8[0x28];          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<E_MeshParts>                                        HideMeshes_9_FA85043147784D4D2DEEECB7CB33D73A;           // 0x0028(0x0010) Edit, BlueprintVisible
		class FText                                                Name_31_2D372E924DA7AEB6DBD263AF728EC999;                // 0x0038(0x0018) Edit, BlueprintVisible
		unsigned char                                              Icon_28_A99889F44D1E5F74E7FA3580A5AF5D90[0x28];          // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_MeshMaterials.S_MeshMaterials
	 * Size -> 0x0018
	 */
	struct FS_MeshMaterials
	{
	public:
		class UStaticMeshComponent*                                Mesh_6_1E94922D47610C5A84F37491AE7951C9;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          Materials_7_A395965E4C64C2850B9659BFFE15DF97;            // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

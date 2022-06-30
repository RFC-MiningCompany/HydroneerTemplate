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
	 * Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	 */
	struct UNavRelevantComponent_SetNavigationRelevancy_Params
	{
	public:
		bool                                                       bRelevant;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function NavigationSystem.NavModifierVolume.SetAreaClass
	 */
	struct ANavModifierVolume_SetAreaClass_Params
	{
	public:
		class UClass*                                              NewAreaClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	 */
	struct ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params
	{
	public:
		struct FBox                                                Bounds;                                                  // 0x0000(0x001C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              OldArea;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              NewArea;                                                 // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReplaceLinks;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

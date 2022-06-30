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
	 * Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	 */
	struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
	{
	public:
		class ULandscapeComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	 */
	struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
	{
	public:
		TArray<class USplineMeshComponent*>                        ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

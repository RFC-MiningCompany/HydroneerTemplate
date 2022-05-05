/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionBlendMaterialAttributesBarycentric.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelHelpers.MaterialExpressionBlendMaterialAttributesBarycentric");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionPack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelHelpers.MaterialExpressionPack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionUnpack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionUnpack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelHelpers.MaterialExpressionUnpack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelColorWheel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelColorWheel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelHelpers.VoxelColorWheel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VoxelHelpers.VoxelHelpersLibrary.CreateProcMeshPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProceduralMeshComponent*                    Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Step                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelHelpersLibrary::CreateProcMeshPlane(class UProceduralMeshComponent* Mesh, int32_t SizeX, int32_t SizeY, float Step)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VoxelHelpers.VoxelHelpersLibrary.CreateProcMeshPlane");
		
		struct
		{
			class UProceduralMeshComponent*                    Mesh;
			int32_t                                            SizeX;
			int32_t                                            SizeY;
			float                                              Step;
		} params;
		params.Mesh = Mesh;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		params.Step = Step;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelHelpersLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelHelpersLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelHelpers.VoxelHelpersLibrary");
		return ptr;
	}

}



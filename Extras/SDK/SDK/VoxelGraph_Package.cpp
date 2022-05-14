/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction UVoxelGraphGeneratorHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphGeneratorHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphGeneratorHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVDI_Capsule_Graph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDI_Capsule_Graph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VDI_Capsule_Graph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVDI_Example_Crater_Graph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDI_Example_Crater_Graph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VDI_Example_Crater_Graph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVDI_Ravine_Graph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDI_Ravine_Graph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VDI_Ravine_Graph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVDI_Sphere_Graph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDI_Sphere_Graph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VDI_Sphere_Graph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVG_Example_Craters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVG_Example_Craters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VG_Example_Craters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVG_Example_Dunes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVG_Example_Dunes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VG_Example_Dunes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVG_Example_Erosion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVG_Example_Erosion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VG_Example_Erosion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVG_Example_FastCraters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVG_Example_FastCraters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VG_Example_FastCraters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVG_Example_MultiIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVG_Example_MultiIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VG_Example_MultiIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNodeHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNodeHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNodeHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExposedNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExposedNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExposedNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelAssetPickerNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelAssetPickerNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelAssetPickerNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPureNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPureNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelPureNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FLess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FLess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FLess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FLessEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FLessEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FLessEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FGreater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FGreater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FGreater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FGreaterEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FGreaterEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FGreaterEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FNotEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FNotEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FNotEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ILess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ILess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ILessEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ILessEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILessEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IGreater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IGreater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IGreater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IGreaterEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IGreaterEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IGreaterEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_INotEqual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_INotEqual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_INotEqual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BiomeMapSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BiomeMapSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BiomeMapSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BiomeMerge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BiomeMerge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BiomeMerge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNodeWithDependencies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNodeWithDependencies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNodeWithDependencies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNodeWithContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNodeWithContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNodeWithContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_LOD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_LOD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LOD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VoxelSize.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VoxelSize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoxelSize");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_WorldSize.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_WorldSize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldSize");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CompileTimeConstant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CompileTimeConstant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CompileTimeConstant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelCoordinateNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelCoordinateNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelCoordinateNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_XF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_XF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_XF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_YF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_YF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_YF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ZF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ZF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ZF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalY.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalY::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalY");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalZ.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalZ::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalZ");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_LocalToGlobal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_LocalToGlobal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LocalToGlobal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GlobalToLocal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GlobalToLocal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalToLocal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_TransformVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_TransformVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TransformVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_InverseTransformVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_InverseTransformVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_InverseTransformVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Curve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Curve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Curve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CurveColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CurveColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CurveColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_DataAssetSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_DataAssetSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_DataAssetSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMaterialNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMaterialNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelMaterialNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeMaterialFromSingleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeMaterialFromSingleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromSingleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetDoubleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetDoubleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetDoubleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeMaterialFromColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeMaterialFromColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeMaterialFromDoubleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromDoubleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CreateDoubleIndexMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CreateDoubleIndexMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CreateDoubleIndexMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSetterNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSetterNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelSetterNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MaterialSetter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MaterialSetter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MaterialSetter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetDoubleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetDoubleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetDoubleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_WorldGeneratorSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_WorldGeneratorSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldGeneratorSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_XI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_XI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_XI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_YI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_YI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_YI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ZI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ZI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ZI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_PerlinWormDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_PerlinWormDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_PerlinWormDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_Cave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_Cave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_Cave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_Cliffs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_Cliffs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_Cliffs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_FloatingIslandOnion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_FloatingIslandOnion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_FloatingIslandOnion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_HeightmapComposition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_HeightmapComposition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_HeightmapComposition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_HollowPlanet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_HollowPlanet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_HollowPlanet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_IQNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_IQNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_IQNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_LayeredPlanet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_LayeredPlanet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_LayeredPlanet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_LayeredWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_LayeredWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_LayeredWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_Planet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_Planet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_Planet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_Ravines.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_Ravines::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_Ravines");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_RingWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_RingWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_RingWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelExample_Tool_NoisyColors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExample_Tool_NoisyColors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelExample_Tool_NoisyColors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetSingleIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetSingleIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetSingleIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetMultiIndexWetness.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetMultiIndexWetness::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetMultiIndexWetness");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_AddMultiIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_AddMultiIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_AddMultiIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetUVs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetUVs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetUVs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SetValueNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SetValueNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetValueNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FunctionSeparator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FunctionSeparator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FunctionSeparator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FlowMerge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FlowMerge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FlowMerge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SampleFoliageMaterialIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SampleFoliageMaterialIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SampleFoliageMaterialIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetBiomeIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetBiomeIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetBiomeIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DGavoronoiNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DGavoronoiNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGavoronoiNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNodeFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNodeFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DGavoronoiNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DGavoronoiNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGavoronoiNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNodeWithDerivativeFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeWithDerivativeFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DErosion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DErosion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DErosion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GeneratorSamplerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GeneratorSamplerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GeneratorSamplerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GeneratorMerge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GeneratorMerge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GeneratorMerge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SingleGeneratorSamplerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SingleGeneratorSamplerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SingleGeneratorSamplerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetGeneratorValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetGeneratorValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetGeneratorValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetGeneratorMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetGeneratorMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetGeneratorMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetGeneratorCustomOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetGeneratorCustomOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetGeneratorCustomOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetLandscapeCollectionIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetLandscapeCollectionIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetLandscapeCollectionIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetMaterialCollectionIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetMaterialCollectionIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetMaterialCollectionIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GradientPerturb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GradientPerturb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GradientPerturb");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GradientPerturbFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GradientPerturbFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GradientPerturbFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DGradientPerturb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DGradientPerturb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGradientPerturb");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DGradientPerturbFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DGradientPerturbFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGradientPerturbFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DGradientPerturb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DGradientPerturb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DGradientPerturb");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DGradientPerturbFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DGradientPerturbFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DGradientPerturbFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphAssetNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphAssetNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphAssetNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetCustomOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetCustomOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetCustomOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EditGetHardness.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EditGetHardness::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetHardness");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphDataItemConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphDataItemConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphDataItemConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroInputOutputNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroInputOutputNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroInputOutputNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroInputNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroInputNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroInputNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroOutputNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroOutputNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroOutputNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacro.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacro::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacro");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphMacroNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphMacroNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphOutputsConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphOutputsConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphOutputsConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphPreviewSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphPreviewSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphPreviewSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_HeightmapSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_HeightmapSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_HeightmapSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_HeightSplitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_HeightSplitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_HeightSplitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_If.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_If::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_If");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IfWithDefaultToFalse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IfWithDefaultToFalse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IfWithDefaultToFalse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IfWithDefaultToTrue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IfWithDefaultToTrue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IfWithDefaultToTrue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLocalVariableBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLocalVariableBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLocalVariableDeclaration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLocalVariableDeclaration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableDeclaration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLocalVariableUsage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLocalVariableUsage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableUsage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetIndex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetIndex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetIndex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetUVChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetUVChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetUVChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMax.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMax::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMax");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMax.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMax::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMax");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FAdd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FAdd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FAdd");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMultiply.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMultiply::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMultiply");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FSubstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FSubstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FSubstract");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FDivide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FDivide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FDivide");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IAdd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IAdd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IAdd");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMultiply.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMultiply::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMultiply");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ISubstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ISubstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ISubstract");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IDivide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IDivide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IDivide");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ILeftBitShift.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ILeftBitShift::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILeftBitShift");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IRightBitShift.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IRightBitShift::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IRightBitShift");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FloatOfInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FloatOfInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FloatOfInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Round.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Round::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Round");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Lerp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Lerp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Lerp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SafeLerp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SafeLerp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SafeLerp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SmoothStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SmoothStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SmoothStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Clamp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Clamp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Clamp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BAnd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BAnd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BAnd");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BOr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BOr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BOr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BNot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BNot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BNot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SwitchInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SwitchInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SwitchFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SwitchFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SwitchColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SwitchColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_1MinusX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_1MinusX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_1MinusX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_OneOverX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_OneOverX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_OneOverX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MinusX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MinusX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MinusX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sqrt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sqrt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sqrt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Pow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Pow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Pow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FMod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FMod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMod");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FAbs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FAbs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FAbs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IAbs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IAbs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IAbs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Ceil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Ceil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Ceil");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Floor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Floor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Floor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VectorLength.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VectorLength::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VectorLength");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Fraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Fraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Fraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FSign.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FSign::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FSign");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ISign.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ISign::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ISign");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_InvSqrt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_InvSqrt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_InvSqrt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Loge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Loge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Loge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Exp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Exp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Exp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Asin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Asin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Asin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sinh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sinh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sinh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Cos.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Cos::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Cos");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Acos.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Acos::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Acos");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SinCos.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SinCos::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SinCos");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Tan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Tan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Tan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Atan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Atan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Atan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Atan2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Atan2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Atan2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VectorRotateAngleAxis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VectorRotateAngleAxis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VectorRotateAngleAxis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BreakColorInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BreakColorInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BreakColorInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BreakColorFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BreakColorFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BreakColorFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeColorInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeColorInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeColorInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeColorFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeColorFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeColorFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RGBToHSV.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RGBToHSV::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RGBToHSV");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_HSVToRGB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_HSVToRGB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_HSVToRGB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_InverseTransformPositionXZ.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_InverseTransformPositionXZ::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_InverseTransformPositionXZ");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Pi.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Pi::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Pi");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NormalizeSum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NormalizeSum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NormalizeSum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGraphNodeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGraphNodeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphNodeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_NoiseNodeWithDerivative.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_NoiseNodeWithDerivative::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeWithDerivative");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DValueNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DValueNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DValueNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DValueNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DValueNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DValueNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DPerlinNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DPerlinNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DPerlinNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DPerlinNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DPerlinNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DPerlinNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DSimplexNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DSimplexNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DSimplexNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DSimplexNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DSimplexNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DSimplexNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCubicNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCubicNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCubicNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCubicNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCubicNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCubicNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DValueNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DValueNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DValueNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DValueNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DValueNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DValueNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DPerlinNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DPerlinNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DPerlinNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DPerlinNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DPerlinNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DPerlinNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DSimplexNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DSimplexNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DSimplexNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DSimplexNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DSimplexNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DSimplexNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCubicNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCubicNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCubicNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCubicNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCubicNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCubicNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CellularNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CellularNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CellularNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCellularNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCellularNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCellularNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCellularNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCellularNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCellularNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IQNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IQNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IQNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DIQNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DIQNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DIQNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DIQNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DIQNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DIQNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DIQNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DIQNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DIQNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DIQNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DIQNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DIQNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CraterNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CraterNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CraterNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CraterNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CraterNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CraterNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCraterNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCraterNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCraterNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCraterNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCraterNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCraterNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DCraterNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DCraterNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCraterNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DCraterNoiseFractal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DCraterNoiseFractal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCraterNoiseFractal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_StaticClampFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_StaticClampFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_StaticClampFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RangeAnalysisDebuggerFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RangeAnalysisDebuggerFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Sleep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Sleep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sleep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RangeUnion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RangeUnion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RangeUnion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IsSingleBool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IsSingleBool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IsSingleBool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_GetRangeAnalysis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_GetRangeAnalysis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetRangeAnalysis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SmartMin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SmartMin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SmartMin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SmartMax.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SmartMax::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SmartMax");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_FloatParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_FloatParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FloatParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_IntParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_IntParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IntParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ColorParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ColorParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ColorParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BoolParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BoolParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BoolParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_DataItemSample.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_DataItemSample::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_DataItemSample");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_DataItemParameters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_DataItemParameters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_DataItemParameters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RandomFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RandomFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RandomFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RandomInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RandomInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RandomInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSDFNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSDFNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelSDFNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SphereSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SphereSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SphereSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_BoxSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_BoxSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BoxSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RoundBoxSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RoundBoxSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RoundBoxSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_TorusSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_TorusSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TorusSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CappedTorusSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CappedTorusSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CappedTorusSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_LinkSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_LinkSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LinkSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CylinderSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CylinderSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CylinderSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ConeSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ConeSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ConeSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_ConeFastSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_ConeFastSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ConeFastSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_InfiniteConeSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_InfiniteConeSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_InfiniteConeSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_PlaneSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_PlaneSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_PlaneSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_HexPrismSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_HexPrismSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_HexPrismSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_TriPrismSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_TriPrismSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TriPrismSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CapsuleSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CapsuleSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CapsuleSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VerticalCapsuleSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VerticalCapsuleSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VerticalCapsuleSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VerticalCappedCylinderSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VerticalCappedCylinderSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VerticalCappedCylinderSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CappedCylinderSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CappedCylinderSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CappedCylinderSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RoundedCylinderSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RoundedCylinderSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RoundedCylinderSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VerticalCappedConeSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VerticalCappedConeSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VerticalCappedConeSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_CappedConeSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_CappedConeSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CappedConeSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SolidAngleSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SolidAngleSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SolidAngleSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VerticalRoundConeSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VerticalRoundConeSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VerticalRoundConeSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_RoundConeSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_RoundConeSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RoundConeSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_EllipsoidSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_EllipsoidSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EllipsoidSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_OctahedronSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_OctahedronSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_OctahedronSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_OctahedronFastSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_OctahedronFastSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_OctahedronFastSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_PyramidSDF.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_PyramidSDF::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_PyramidSDF");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SmoothUnion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SmoothUnion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SmoothUnion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SmoothSubtraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SmoothSubtraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SmoothSubtraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_SmoothIntersection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_SmoothIntersection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SmoothIntersection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSeedNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSeedNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelSeedNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_Seed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_Seed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Seed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_AddSeeds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_AddSeeds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_AddSeeds");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_MakeSeeds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_MakeSeeds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeSeeds");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_TextureSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_TextureSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TextureSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VoxelTextureSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VoxelTextureSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoxelTextureSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_VoronoiNoiseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_VoronoiNoiseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoronoiNoiseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DVoronoiNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DVoronoiNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DVoronoiNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_2DWhiteNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_2DWhiteNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DWhiteNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelNode_3DWhiteNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNode_3DWhiteNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DWhiteNoise");
		return ptr;
	}

}



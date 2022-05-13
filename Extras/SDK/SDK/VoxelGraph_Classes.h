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
	 * Class VoxelGraph.VoxelGraphGeneratorHelper
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UVoxelGraphGeneratorHelper : public UVoxelTransformableGenerator
	{
	public:
		bool                                                       bEnableRangeAnalysis;                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XPP[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VDI_Capsule_Graph
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UVDI_Capsule_Graph : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Noise_Amplitude;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VDI_Example_Crater_Graph
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVDI_Example_Crater_Graph : public UVoxelGraphGeneratorHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VDI_Ravine_Graph
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVDI_Ravine_Graph : public UVoxelGraphGeneratorHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VDI_Sphere_Graph
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVDI_Sphere_Graph : public UVoxelGraphGeneratorHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VG_Example_Craters
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UVG_Example_Craters : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Radius;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0YK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VG_Example_Dunes
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UVG_Example_Dunes : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Direction_X;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Direction_Y;                                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Dune_Frequency;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Noise_Frequency;                                         // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_467E[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VG_Example_Erosion
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UVG_Example_Erosion : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Erosion_Material_Offset;                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Erosion_Material_Strength;                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Erosion_Strength;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rocks[0x28];                                             // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Snow[0x28];                                              // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Valleys_Height;                                          // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40XQ[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VG_Example_FastCraters
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVG_Example_FastCraters : public UVoxelGraphGeneratorHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VG_Example_MultiIndex
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UVG_Example_MultiIndex : public UVoxelGraphGeneratorHelper
	{
	public:
		unsigned char                                              Layer_1[0x28];                                           // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Layer_2[0x28];                                           // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Layer_3[0x28];                                           // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Layer_4[0x28];                                           // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UVoxelNode : public UObject
	{
	public:
		TArray<struct FVoxelPin>                                   InputPins;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVoxelPin>                                   OutputPins;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UVoxelGraphGenerator*                                Graph;                                                   // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputPinCount;                                           // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RG49[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNodeHelper
	 * Size -> 0x0040 (FullSize[0x0098] - InheritedSize[0x0058])
	 */
	class UVoxelNodeHelper : public UVoxelNode
	{
	public:
		unsigned char                                              UnknownData_TW95[0x40];                                  // 0x0058(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExposedNode
	 * Size -> 0x00B8 (FullSize[0x0150] - InheritedSize[0x0098])
	 */
	class UVoxelExposedNode : public UVoxelNodeHelper
	{
	public:
		class FString                                              DisplayName;                                             // 0x0098(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UniqueName;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQAE[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UIMin;                                                   // 0x00D8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UIMax;                                                   // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           CustomMetaData;                                          // 0x00F8(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bCanBeRenamed;                                           // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2D3T[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelAssetPickerNode
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UVoxelAssetPickerNode : public UVoxelExposedNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelPureNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelPureNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FLess
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FLess : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FLessEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FLessEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FGreater
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FGreater : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FGreaterEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FGreaterEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FNotEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FNotEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ILess
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ILess : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ILessEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ILessEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IGreater
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IGreater : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IGreaterEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IGreaterEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_INotEqual
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_INotEqual : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BiomeMapSampler
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UVoxelNode_BiomeMapSampler : public UVoxelExposedNode
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Threshold;                                               // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GPO[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBiomeMapElement>                            Biomes;                                                  // 0x0160(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BiomeMerge
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UVoxelNode_BiomeMerge : public UVoxelNode
	{
	public:
		TArray<class FString>                                      Biomes;                                                  // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJX1[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNodeWithDependencies
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNodeWithDependencies : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNodeWithContext
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNodeWithContext : public UVoxelNodeWithDependencies
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_LOD
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_LOD : public UVoxelNodeWithContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VoxelSize
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VoxelSize : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_WorldSize
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_WorldSize : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CompileTimeConstant
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CompileTimeConstant : public UVoxelNodeHelper
	{
	public:
		class FName                                                Name;                                                    // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelPinCategory                                          Type;                                                    // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAMY[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FString>                           Constants;                                               // 0x00A8(0x0050) Edit, Transient, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelCoordinateNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelCoordinateNode : public UVoxelNodeWithDependencies
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_XF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_XF : public UVoxelCoordinateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_YF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_YF : public UVoxelCoordinateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ZF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ZF : public UVoxelCoordinateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalX
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GlobalX : public UVoxelCoordinateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalY
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GlobalY : public UVoxelCoordinateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalZ
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GlobalZ : public UVoxelCoordinateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_LocalToGlobal
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_LocalToGlobal : public UVoxelNodeWithContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalToLocal
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GlobalToLocal : public UVoxelNodeWithContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_TransformVector
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_TransformVector : public UVoxelNodeWithContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_InverseTransformVector
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_InverseTransformVector : public UVoxelNodeWithContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Curve
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_Curve : public UVoxelExposedNode
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CurveColor
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_CurveColor : public UVoxelExposedNode
	{
	public:
		class UCurveLinearColor*                                   Curve;                                                   // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_DataAssetSampler
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UVoxelNode_DataAssetSampler : public UVoxelExposedNode
	{
	public:
		class UVoxelDataAsset*                                     Asset;                                                   // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBilinearInterpolation;                                  // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAF0[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelMaterialNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelMaterialNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeMaterialFromSingleIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MakeMaterialFromSingleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetDoubleIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GetDoubleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeMaterialFromColor
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MakeMaterialFromColor : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeMaterialFromDoubleIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MakeMaterialFromDoubleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CreateDoubleIndexMaterial
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CreateDoubleIndexMaterial : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelSetterNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelSetterNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MaterialSetter
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MaterialSetter : public UVoxelSetterNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetDoubleIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SetDoubleIndex : public UVoxelNode_MaterialSetter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_WorldGeneratorSampler
	 * Size -> 0x0078 (FullSize[0x01C8] - InheritedSize[0x0150])
	 */
	class UVoxelNode_WorldGeneratorSampler : public UVoxelExposedNode
	{
	public:
		struct FVoxelGeneratorPicker                               WorldGenerator;                                          // 0x0150(0x0068) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Seeds;                                                   // 0x01B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_XI
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_XI : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_YI
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_YI : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ZI
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ZI : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_PerlinWormDistance
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_PerlinWormDistance : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_Cave
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UVoxelExample_Cave : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Bottom_Noise_Frequency;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom_Noise_Scale;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Bottom_Noise_Seed;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Global_Height_Seed;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Top_Noise_Seed;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Noise_Frequency;                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Noise_Scale;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom_Top_Merge_Smoothness;                             // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Global_Height_Merge_Smoothness;                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Global_Height_Noise_Frequency;                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Global_Height_Noise_Scale;                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Global_Height_Offset;                                    // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cave_Height;                                             // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cave_Radius;                                             // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cave_Walls_Smoothness;                                   // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2PZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_Cliffs
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UVoxelExample_Cliffs : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Cliffs_Slope;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Overhangs;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Base_Shape_Frequency;                                    // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Base_Shape_Offset;                                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Base_Shape_Seed;                                         // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Sides_Noise_Seed;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Top_Noise_Seed;                                          // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sides_Noise_Amplitude;                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sides_Noise_Frequency;                                   // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Noise_Frequency;                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Noise_Scale;                                         // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_FloatingIslandOnion
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UVoxelExample_FloatingIslandOnion : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Height;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Perturb_Amplitude;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Perturb_Frequency;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Noise_Frequency;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Noise_Height;                                        // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_HeightmapComposition
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UVoxelExample_HeightmapComposition : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Depth;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Flip_X;                                                  // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Flip_Y;                                                  // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08ZK[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              heightmap_x0_y0[0x28];                                   // 0x0036(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              heightmap_x0_y1[0x28];                                   // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              heightmap_x1_y0[0x28];                                   // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              heightmap_x1_y1[0x28];                                   // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Size_X;                                                  // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size_Y;                                                  // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_HollowPlanet
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UVoxelExample_HollowPlanet : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Intersection_Smoothness;                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Noise_Bias;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Noise_Frequency;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Noise_Scale;                                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Use_IQ_Noise;                                            // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI5H[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_IQNoise
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UVoxelExample_IQNoise : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Frequency;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO0Z[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_LayeredPlanet
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UVoxelExample_LayeredPlanet : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Frequency;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F3W[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              None1[0x28];                                             // 0x0034(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Seed;                                                    // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Slice_Mode;                                              // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UKS[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_LayeredWorld
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UVoxelExample_LayeredWorld : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Frequency;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLZW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              None1[0x28];                                             // 0x0034(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Seed;                                                    // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5FL[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_Planet
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UVoxelExample_Planet : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Frequency;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Noise_Seed;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Noise_Strength;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8SN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PlanetColorCurve[0x28];                                  // 0x003C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PlanetCurve[0x28];                                       // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Radius;                                                  // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W5N[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_Ravines
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UVoxelExample_Ravines : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      _3D_Noise_Frequency;                                     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _3D_Noise_Seed;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom_Transition_Smoothness;                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top_Transition_Smoothness;                               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4AX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_RingWorld
	 * Size -> 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
	 */
	class UVoxelExample_RingWorld : public UVoxelGraphGeneratorHelper
	{
	public:
		float                                                      Radius;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RingEdgesHardness;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width_in_Degrees;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RiverDepth;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RiverWidth;                                              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BeachColor;                                              // 0x004C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MountainsColorHigh;                                      // 0x005C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MountainsColorLowHigh;                                   // 0x006C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MountainsColorLowLow;                                    // 0x007C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRAD[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MoutainsMaskCurve[0x28];                                 // 0x008C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        PlainsColorHigh;                                         // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PlainsColorLow;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlainsNoiseFrequency;                                    // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlainsNoiseHeight;                                       // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlainsNoiseStrengthCurve[0x28];                          // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RingMainShapeCurve[0x28];                                // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        RingOuterColor;                                          // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        RiverColor;                                              // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RiverDepthCurve[0x28];                                   // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      MountainsNoiseFrequency;                                 // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MountainsNoiseHeight;                                    // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseNoiseFrquency;                                       // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseNoiseHeight;                                         // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseHeight;                                              // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9EL[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExample_Tool_NoisyColors
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UVoxelExample_Tool_NoisyColors : public UVoxelGraphGeneratorHelper
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetColor
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SetColor : public UVoxelNode_MaterialSetter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetSingleIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SetSingleIndex : public UVoxelNode_MaterialSetter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetMultiIndexWetness
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SetMultiIndexWetness : public UVoxelNode_MaterialSetter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_AddMultiIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_AddMultiIndex : public UVoxelNode_MaterialSetter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetUVs
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SetUVs : public UVoxelNode_MaterialSetter
	{
	public:
		bool                                                       bSetU;                                                   // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetV;                                                   // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KBE[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetNode
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SetNode : public UVoxelSetterNode
	{
	public:
		uint32_t                                                   Index;                                                   // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVoxelGraphOutput                                   CachedOutput;                                            // 0x009C(0x0020) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VMXR[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetValueNode
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UVoxelNode_SetValueNode : public UVoxelNode_SetNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FunctionSeparator
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FunctionSeparator : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FlowMerge
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UVoxelNode_FlowMerge : public UVoxelNode
	{
	public:
		TArray<struct FVoxelNamedDataPin>                          Types;                                                   // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SampleFoliageMaterialIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SampleFoliageMaterialIndex : public UVoxelNodeWithContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetBiomeIndex
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_GetBiomeIndex : public UVoxelExposedNode
	{
	public:
		class UVoxelFoliageBiomeBase*                              Biome;                                                   // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNode
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UVoxelNode_NoiseNode : public UVoxelNodeWithContext
	{
	public:
		float                                                      Frequency;                                               // 0x0098(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelNoiseInterpolation                                   Interpolation;                                           // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IKG[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NumberOfSamples;                                         // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelRange>                                 OutputRanges;                                            // 0x00A8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTNS[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DGavoronoiNoise
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_2DGavoronoiNoise : public UVoxelNode_NoiseNode
	{
	public:
		float                                                      Jitter;                                                  // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q59B[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNodeFractal
	 * Size -> 0x0060 (FullSize[0x0138] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_NoiseNodeFractal : public UVoxelNode_NoiseNode
	{
	public:
		int32_t                                                    FractalOctaves;                                          // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractalLacunarity;                                       // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractalGain;                                             // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelNoiseFractalType                                     FractalType;                                             // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOMI[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, unsigned char>                         LODToOctavesMap;                                         // 0x00E8(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DGavoronoiNoiseFractal
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UVoxelNode_2DGavoronoiNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		float                                                      Jitter;                                                  // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BNIX[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNodeWithDerivativeFractal
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UVoxelNode_NoiseNodeWithDerivativeFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		bool                                                       bComputeDerivative;                                      // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW95[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DErosion
	 * Size -> 0x0008 (FullSize[0x0148] - InheritedSize[0x0140])
	 */
	class UVoxelNode_2DErosion : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		float                                                      Jitter;                                                  // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHRK[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GeneratorSamplerBase
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UVoxelNode_GeneratorSamplerBase : public UVoxelExposedNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GeneratorMerge
	 * Size -> 0x0030 (FullSize[0x0180] - InheritedSize[0x0150])
	 */
	class UVoxelNode_GeneratorMerge : public UVoxelNode_GeneratorSamplerBase
	{
	public:
		TArray<class FName>                                        Outputs;                                                 // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EVoxelMaterialConfig                                       MaterialConfig;                                          // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8AA[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelGeneratorPicker>                       Generators;                                              // 0x0168(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JR4[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SingleGeneratorSamplerBase
	 * Size -> 0x0068 (FullSize[0x01B8] - InheritedSize[0x0150])
	 */
	class UVoxelNode_SingleGeneratorSamplerBase : public UVoxelNode_GeneratorSamplerBase
	{
	public:
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0150(0x0068) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetGeneratorValue
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UVoxelNode_GetGeneratorValue : public UVoxelNode_SingleGeneratorSamplerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetGeneratorMaterial
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UVoxelNode_GetGeneratorMaterial : public UVoxelNode_SingleGeneratorSamplerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetGeneratorCustomOutput
	 * Size -> 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
	 */
	class UVoxelNode_GetGeneratorCustomOutput : public UVoxelNode_SingleGeneratorSamplerBase
	{
	public:
		class FName                                                OutputName;                                              // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetLandscapeCollectionIndex
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_GetLandscapeCollectionIndex : public UVoxelExposedNode
	{
	public:
		class FName                                                LayerName;                                               // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetMaterialCollectionIndex
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_GetMaterialCollectionIndex : public UVoxelAssetPickerNode
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GradientPerturb
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_GradientPerturb : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GradientPerturbFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_GradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DGradientPerturb
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_2DGradientPerturb : public UVoxelNode_GradientPerturb
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DGradientPerturbFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_2DGradientPerturbFractal : public UVoxelNode_GradientPerturbFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DGradientPerturb
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_3DGradientPerturb : public UVoxelNode_GradientPerturb
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DGradientPerturbFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_3DGradientPerturbFractal : public UVoxelNode_GradientPerturbFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphAssetNode
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UVoxelGraphAssetNode : public UVoxelNodeWithContext
	{
	public:
		struct FVoxelGeneratorPicker                               DefaultGenerator;                                        // 0x0098(0x0068) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetValue
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UVoxelNode_EditGetValue : public UVoxelGraphAssetNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetMaterial
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UVoxelNode_EditGetMaterial : public UVoxelGraphAssetNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetCustomOutput
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UVoxelNode_EditGetCustomOutput : public UVoxelGraphAssetNode
	{
	public:
		class FName                                                OutputName;                                              // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetHardness
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_EditGetHardness : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphDataItemConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelGraphDataItemConfig : public UObject
	{
	public:
		TArray<class FName>                                        Parameters;                                              // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphGenerator
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UVoxelGraphGenerator : public UVoxelTransformableGenerator
	{
	public:
		class UVoxelGraphOutputsConfig*                            Outputs;                                                 // 0x0028(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelGraphOutput>                           CustomOutputs;                                           // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAutomaticPreview;                                       // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFlowMergeAndFunctionsWarnings;                      // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCppClassInsteadOfGraph;                              // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCQ0[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GeneratedCppClass[0x28];                                 // 0x0043(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bCompileToCppOnSave;                                     // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNIM[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           SaveLocation;                                            // 0x0078(0x0010) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bBuiltinPluginGenerator;                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRangeAnalysis;                                    // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugGraph;                                       // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFunctions;                                          // 0x008B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetailedErrors;                                         // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPinsIds;                                            // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAxisDependencies;                                   // 0x008E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelGraphGeneratorDebugLevel                             DebugLevel;                                              // 0x008F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetToDebug;                                           // 0x0090(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FunctionToDebug;                                         // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelFunctionAxisDependencies                             AxisDependenciesToDebug;                                 // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5GR[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NodesDepthScaleFactor;                                   // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideDataNodes;                                          // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13WL[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVoxelNode*>                                  AllNodes;                                                // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UVoxelNode*>                                  DebugNodes;                                              // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UVoxelNode*                                          FirstNode;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               FirstNodePinId;                                          // 0x00D8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelGraphPreviewSettings*                          PreviewSettings;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroInputOutputNode
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UVoxelGraphMacroInputOutputNode : public UVoxelNode
	{
	public:
		TArray<struct FVoxelGraphMacroPin>                         Pins;                                                    // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UVoxelGraphMacro*                                    Macro;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroInputNode
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UVoxelGraphMacroInputNode : public UVoxelGraphMacroInputOutputNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroOutputNode
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UVoxelGraphMacroOutputNode : public UVoxelGraphMacroInputOutputNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacro
	 * Size -> 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
	 */
	class UVoxelGraphMacro : public UVoxelGraphGenerator
	{
	public:
		class FString                                              Tooltip;                                                 // 0x00F0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Keywords;                                                // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomCategory;                                          // 0x0110(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomName;                                              // 0x0120(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInContextMenu;                                      // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVectorOnlyNode;                                         // 0x0131(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCU6[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelGraphMacroInputNode*                           InputNode;                                               // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelGraphMacroOutputNode*                          OutputNode;                                              // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroNode
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UVoxelGraphMacroNode : public UVoxelNode
	{
	public:
		class UVoxelGraphMacro*                                    Macro;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphOutputsConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelGraphOutputsConfig : public UObject
	{
	public:
		TArray<struct FVoxelGraphOutput>                           Outputs;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphPreviewSettings
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UVoxelGraphPreviewSettings : public UObject
	{
	public:
		bool                                                       bShowStats;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowValues;                                             // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIZL[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MinValue;                                                // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MaxValue;                                                // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelIntBox                                        PreviewedBounds;                                         // 0x0050(0x0018) Edit, EditConst, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelGraphPreviewAxes                                     LeftToRight;                                             // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelGraphPreviewAxes                                     BottomToTop;                                             // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXMO[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Resolution;                                              // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResolutionMultiplierLog;                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          Center;                                                  // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          PreviewedVoxel;                                          // 0x0080(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelGraphPreviewShowValue                                ShowValue;                                               // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelMaterialConfig                                       MaterialConfig;                                          // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O41P[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelMaterialCollectionBase*                        MaterialCollection;                                      // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelPlaceableItemManager*                          PlaceableItemManager;                                    // 0x0098(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoxelSize;                                               // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRenderType                                           RenderType;                                              // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelGraphPreviewType                                     PreviewType2D;                                           // 0x00A5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawColoredDistanceField;                               // 0x00A6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelGraphMaterialPreviewType                             MaterialPreviewType;                                     // 0x00A7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiIndexToPreview;                                     // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YRF[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FColor>                                      IndexColors;                                             // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bHybridMaterialRendering;                                // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXNZ[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CostPercentile;                                          // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumRangeAnalysisChunksPerAxis;                           // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeightmapMode;                                          // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeightBasedColor;                                       // 0x00CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWater;                                            // 0x00CE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWRB[0x1];                                   // 0x00CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Height;                                                  // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LightDirection;                                          // 0x00D4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartBias;                                               // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSteps;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Brightness;                                              // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowDensity;                                           // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh;                                                    // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  HeightmapMaterial;                                       // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  SliceMaterial;                                           // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoNormalize;                                          // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WJM[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalizeMinValue;                                       // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizeMaxValue;                                       // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODToPreview;                                            // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_HeightmapSampler
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UVoxelNode_HeightmapSampler : public UVoxelExposedNode
	{
	public:
		bool                                                       bFloatHeightmap;                                         // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9F70[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelHeightmapAssetFloat*                           HeightmapFloat;                                          // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelHeightmapAssetUINT16*                          HeightmapUINT16;                                         // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelSamplerMode                                          SamplerType;                                             // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCenter;                                                 // 0x0169(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK0J[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_HeightSplitter
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_HeightSplitter : public UVoxelNodeHelper
	{
	public:
		int32_t                                                    NumSplits;                                               // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSZU[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_If
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_If : public UVoxelNodeHelper
	{
	public:
		EVoxelNodeIfBranchToUseForRangeAnalysis                    BranchToUseForRangeAnalysis;                             // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0HR[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IfWithDefaultToFalse
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UVoxelNode_IfWithDefaultToFalse : public UVoxelNode_If
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IfWithDefaultToTrue
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UVoxelNode_IfWithDefaultToTrue : public UVoxelNode_If
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelLocalVariableBase
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UVoxelLocalVariableBase : public UVoxelNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelLocalVariableDeclaration
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UVoxelLocalVariableDeclaration : public UVoxelLocalVariableBase
	{
	public:
		class FName                                                Name;                                                    // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelPortalNodePinCategory                                Category;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JDH[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               VariableGuid;                                            // 0x0064(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RABC[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelLocalVariableUsage
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UVoxelLocalVariableUsage : public UVoxelLocalVariableBase
	{
	public:
		struct FVoxelPortalNodeSelector                            Selector;                                                // 0x0058(0x0008) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		class UVoxelLocalVariableDeclaration*                      Declaration;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               DeclarationGuid;                                         // 0x0068(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetColor
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GetColor : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetIndex
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GetIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetUVChannel
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GetUVChannel : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMax
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FMax : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMin
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FMin : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMax
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IMax : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMin
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IMin : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FAdd
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FAdd : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMultiply
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FMultiply : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FSubstract
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FSubstract : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FDivide
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FDivide : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IAdd
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IAdd : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMultiply
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IMultiply : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ISubstract
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ISubstract : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IDivide
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IDivide : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ILeftBitShift
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ILeftBitShift : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IRightBitShift
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IRightBitShift : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FloatOfInt
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FloatOfInt : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Round
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Round : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Lerp
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Lerp : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SafeLerp
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SafeLerp : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SmoothStep
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SmoothStep : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Clamp
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Clamp : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BAnd
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_BAnd : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BOr
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_BOr : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BNot
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_BNot : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SwitchInt
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SwitchInt : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SwitchFloat
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SwitchFloat : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SwitchColor
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SwitchColor : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_1MinusX
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_1MinusX : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_OneOverX
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_OneOverX : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MinusX
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MinusX : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sqrt
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Sqrt : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Pow
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Pow : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMod
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IMod : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMod
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FMod : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FAbs
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FAbs : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IAbs
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IAbs : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Ceil
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Ceil : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Floor
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Floor : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VectorLength
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VectorLength : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Fraction
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Fraction : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FSign
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_FSign : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ISign
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ISign : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_InvSqrt
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_InvSqrt : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Loge
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Loge : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Exp
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Exp : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sin
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Sin : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Asin
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Asin : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sinh
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Sinh : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Cos
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Cos : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Acos
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Acos : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SinCos
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SinCos : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Tan
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Tan : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Atan
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Atan : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Atan2
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Atan2 : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VectorRotateAngleAxis
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VectorRotateAngleAxis : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BreakColorInt
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_BreakColorInt : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BreakColorFloat
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_BreakColorFloat : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeColorInt
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MakeColorInt : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeColorFloat
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MakeColorFloat : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RGBToHSV
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RGBToHSV : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_HSVToRGB
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_HSVToRGB : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_InverseTransformPositionXZ
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_InverseTransformPositionXZ : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Pi
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Pi : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NormalizeSum
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_NormalizeSum : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphNodeInterface
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UVoxelGraphNodeInterface : public UEdGraphNode
	{
	public:
		class FString                                              InfoMsg;                                                 // 0x0098(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WarningMsg;                                              // 0x00A8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNodeWithDerivative
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_NoiseNodeWithDerivative : public UVoxelNode_NoiseNode
	{
	public:
		bool                                                       bComputeDerivative;                                      // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5N6[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DValueNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_2DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DValueNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_2DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DPerlinNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_2DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DPerlinNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_2DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DSimplexNoise
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_2DSimplexNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DSimplexNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_2DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCubicNoise
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_2DCubicNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCubicNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_2DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DValueNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_3DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DValueNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_3DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DPerlinNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_3DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DPerlinNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_3DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DSimplexNoise
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_3DSimplexNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DSimplexNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_3DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCubicNoise
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_3DCubicNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCubicNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_3DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CellularNoise
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_CellularNoise : public UVoxelNode_NoiseNode
	{
	public:
		EVoxelCellularDistanceFunction                             DistanceFunction;                                        // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelCellularReturnType                                   ReturnType;                                              // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNAK[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Jitter;                                                  // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCellularNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_2DCellularNoise : public UVoxelNode_CellularNoise
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCellularNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_3DCellularNoise : public UVoxelNode_CellularNoise
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IQNoiseBase
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_IQNoiseBase : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DIQNoiseBase
	 * Size -> 0x0008 (FullSize[0x0148] - InheritedSize[0x0140])
	 */
	class UVoxelNode_2DIQNoiseBase : public UVoxelNode_IQNoiseBase
	{
	public:
		float                                                      Rotation;                                                // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHG5[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DIQNoise
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UVoxelNode_2DIQNoise : public UVoxelNode_2DIQNoiseBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DIQNoiseBase
	 * Size -> 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
	 */
	class UVoxelNode_3DIQNoiseBase : public UVoxelNode_IQNoiseBase
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0140(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A616[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DIQNoise
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UVoxelNode_3DIQNoise : public UVoxelNode_3DIQNoiseBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CraterNoise
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_CraterNoise : public UVoxelNode_NoiseNode
	{
	public:
		float                                                      Jitter;                                                  // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FalloffExponent;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CraterNoiseFractal
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UVoxelNode_CraterNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		float                                                      Jitter;                                                  // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FalloffExponent;                                         // 0x013C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCraterNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_2DCraterNoise : public UVoxelNode_CraterNoise
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCraterNoise
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_3DCraterNoise : public UVoxelNode_CraterNoise
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCraterNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_2DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCraterNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_3DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_StaticClampFloat
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_StaticClampFloat : public UVoxelNodeHelper
	{
	public:
		float                                                      Min;                                                     // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RangeAnalysisDebuggerFloat
	 * Size -> 0x00A8 (FullSize[0x0140] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RangeAnalysisDebuggerFloat : public UVoxelNodeHelper
	{
	public:
		float                                                      Min;                                                     // 0x0098(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x009C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraphMin;                                                // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraphMax;                                                // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraphStep;                                               // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA68[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x00B0(0x0088) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZB5K[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sleep
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_Sleep : public UVoxelNodeHelper
	{
	public:
		int32_t                                                    NumberOfLoops;                                           // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QQ1L[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RangeUnion
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RangeUnion : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IsSingleBool
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_IsSingleBool : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetRangeAnalysis
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_GetRangeAnalysis : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SmartMin
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SmartMin : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SmartMax
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SmartMax : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FloatParameter
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_FloatParameter : public UVoxelExposedNode
	{
	public:
		float                                                      Value;                                                   // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YM4A[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IntParameter
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_IntParameter : public UVoxelExposedNode
	{
	public:
		int32_t                                                    Value;                                                   // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_221P[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ColorParameter
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UVoxelNode_ColorParameter : public UVoxelExposedNode
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0150(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BoolParameter
	 * Size -> 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
	 */
	class UVoxelNode_BoolParameter : public UVoxelExposedNode
	{
	public:
		bool                                                       Value;                                                   // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y5P[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_DataItemSample
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_DataItemSample : public UVoxelNodeWithContext
	{
	public:
		int32_t                                                    Mask;                                                    // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelDataItemCombineMode                                  CombineMode;                                             // 0x009C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW68[0x3];                                   // 0x009C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_DataItemParameters
	 * Size -> 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_DataItemParameters : public UVoxelNodeWithContext
	{
	public:
		class UVoxelGraphDataItemConfig*                           Config;                                                  // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   PreviewValues;                                           // 0x00A0(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RandomFloat
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RandomFloat : public UVoxelNodeHelper
	{
	public:
		float                                                      Min;                                                     // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RandomInt
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RandomInt : public UVoxelNodeHelper
	{
	public:
		int32_t                                                    Min;                                                     // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelSDFNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelSDFNode : public UVoxelPureNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SphereSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SphereSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BoxSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_BoxSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RoundBoxSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RoundBoxSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_TorusSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_TorusSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CappedTorusSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CappedTorusSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_LinkSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_LinkSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CylinderSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CylinderSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ConeSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ConeSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ConeFastSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_ConeFastSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_InfiniteConeSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_InfiniteConeSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_PlaneSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_PlaneSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_HexPrismSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_HexPrismSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_TriPrismSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_TriPrismSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CapsuleSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CapsuleSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VerticalCapsuleSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VerticalCapsuleSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VerticalCappedCylinderSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VerticalCappedCylinderSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CappedCylinderSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CappedCylinderSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RoundedCylinderSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RoundedCylinderSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VerticalCappedConeSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VerticalCappedConeSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CappedConeSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_CappedConeSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SolidAngleSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SolidAngleSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VerticalRoundConeSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VerticalRoundConeSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RoundConeSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_RoundConeSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EllipsoidSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_EllipsoidSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_OctahedronSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_OctahedronSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_OctahedronFastSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_OctahedronFastSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_PyramidSDF
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_PyramidSDF : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SmoothUnion
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SmoothUnion : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SmoothSubtraction
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SmoothSubtraction : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SmoothIntersection
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_SmoothIntersection : public UVoxelSDFNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelSeedNode
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelSeedNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Seed
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UVoxelNode_Seed : public UVoxelExposedNode
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0154(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2M4I[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_AddSeeds
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_AddSeeds : public UVoxelSeedNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeSeeds
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_MakeSeeds : public UVoxelSeedNode
	{
	public:
		int32_t                                                    NumOutputs;                                              // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHV2[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_TextureSampler
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UVoxelNode_TextureSampler : public UVoxelExposedNode
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBilinearInterpolation;                                  // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelSamplerMode                                          Mode;                                                    // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MPH[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VoxelTextureSampler
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UVoxelNode_VoxelTextureSampler : public UVoxelExposedNode
	{
	public:
		bool                                                       bBilinearInterpolation;                                  // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelSamplerMode                                          Mode;                                                    // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Z5W[0x6];                                   // 0x0152(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelFloatTexture                                  Texture;                                                 // 0x0158(0x0018) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VoronoiNoiseBase
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UVoxelNode_VoronoiNoiseBase : public UVoxelNodeHelper
	{
	public:
		bool                                                       bComputeNeighbors;                                       // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4MJ[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dimension;                                               // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DVoronoiNoise
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UVoxelNode_2DVoronoiNoise : public UVoxelNode_VoronoiNoiseBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DWhiteNoise
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_2DWhiteNoise : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DWhiteNoise
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVoxelNode_3DWhiteNoise : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

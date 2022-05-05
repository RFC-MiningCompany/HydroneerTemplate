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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class VoxelHelpers.MaterialExpressionBlendMaterialAttributesBarycentric
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionBlendMaterialAttributesBarycentric : public UMaterialExpression
	{
	public:
		struct FMaterialAttributesInput                            A;                                                       // 0x0040(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC87[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMaterialAttributesInput                            B;                                                       // 0x0058(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SHP[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMaterialAttributesInput                            C;                                                       // 0x0070(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBJ5[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    AlphaA;                                                  // 0x0088(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LX1[0x8];                                   // 0x0094(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    AlphaB;                                                  // 0x009C(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJZH[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelHelpers.MaterialExpressionPack
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionPack : public UMaterialExpression
	{
	public:
		TArray<struct FMaterialPackInput>                          Inputs;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXB0[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelHelpers.MaterialExpressionUnpack
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionUnpack : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    Input;                                                   // 0x0040(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJ8N[0x8];                                   // 0x004C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRefresh;                                                // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZUY[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelHelpers.VoxelColorWheel
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UVoxelColorWheel : public UWidget
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnColorChanged;                                          // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BVV[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelHelpers.VoxelHelpersLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelHelpersLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void CreateProcMeshPlane(class UProceduralMeshComponent* Mesh, int32_t SizeX, int32_t SizeY, float Step);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

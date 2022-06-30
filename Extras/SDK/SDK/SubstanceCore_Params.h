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
	 * Function SubstanceCore.SubstanceGraphInstance.SetInputString
	 */
	struct USubstanceGraphInstance_SetInputString_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.SetInputInt
	 */
	struct USubstanceGraphInstance_SetInputInt_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            InputValues;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.SetInputImg
	 */
	struct USubstanceGraphInstance_SetInputImg_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Value;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
	 */
	struct USubstanceGraphInstance_SetInputFloat_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              InputValues;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.SetInputColor
	 */
	struct USubstanceGraphInstance_SetInputColor_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.SetInputBool
	 */
	struct USubstanceGraphInstance_SetInputBool_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       boolValue;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
	 */
	struct USubstanceGraphInstance_GetIntInputDesc_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSubstanceIntInputDesc                              ReturnValue;                                             // 0x0010(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
	 */
	struct USubstanceGraphInstance_GetInstanceDesc_Params
	{
	public:
		struct FSubstanceInstanceDesc                              ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputType
	 */
	struct USubstanceGraphInstance_GetInputType_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SubstanceCore_ESubstanceInputType                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputString
	 */
	struct USubstanceGraphInstance_GetInputString_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputNames
	 */
	struct USubstanceGraphInstance_GetInputNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputInt
	 */
	struct USubstanceGraphInstance_GetInputInt_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
	 */
	struct USubstanceGraphInstance_GetInputFloat_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputColor
	 */
	struct USubstanceGraphInstance_GetInputColor_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetInputBool
	 */
	struct USubstanceGraphInstance_GetInputBool_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
	 */
	struct USubstanceGraphInstance_GetFloatInputDesc_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSubstanceFloatInputDesc                            ReturnValue;                                             // 0x0010(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance
	 */
	struct USubstanceGraphInstance_GetDynamicMaterialInstance_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterial*                                           InParentMaterial;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.SyncRendering
	 */
	struct USubstanceUtility_SyncRendering_Params
	{
	public:
		class USubstanceGraphInstance*                             InstancesToRender;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
	 */
	struct USubstanceUtility_SetGraphInstanceOutputSizeInt_Params
	{
	public:
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
	 */
	struct USubstanceUtility_SetGraphInstanceOutputSize_Params
	{
	public:
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SubstanceCore_ESubstanceTextureSize                        Width;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SubstanceCore_ESubstanceTextureSize                        Height;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.ResetInputParameters
	 */
	struct USubstanceUtility_ResetInputParameters_Params
	{
	public:
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
	 */
	struct USubstanceUtility_GetSubstanceTextures_Params
	{
	public:
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UTexture2D*>                                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.GetSubstances
	 */
	struct USubstanceUtility_GetSubstances_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USubstanceGraphInstance*>                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
	 */
	struct USubstanceUtility_GetSubstanceLoadingProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.GetGraphName
	 */
	struct USubstanceUtility_GetGraphName_Params
	{
	public:
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.GetFactoryName
	 */
	struct USubstanceUtility_GetFactoryName_Params
	{
	public:
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
	 */
	struct USubstanceUtility_EnableInstanceOutputs_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            OutputIndices;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
	 */
	struct USubstanceUtility_DuplicateGraphInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceGraphInstance*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
	 */
	struct USubstanceUtility_DisableInstanceOutputs_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceGraphInstance*                             GraphInstance;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            OutputIndices;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.CreateGraphInstance
	 */
	struct USubstanceUtility_CreateGraphInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceInstanceFactory*                           Factory;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GraphDescIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterial*                                           ParentMaterial;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceName;                                            // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceGraphInstance*                             ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
	 */
	struct USubstanceUtility_CreateAggregateSubstanceFactory_Params
	{
	public:
		class USubstanceInstanceFactory*                           OutputFactory;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutputFactoryGraphIndex;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceInstanceFactory*                           InputFactory;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputFactoryGraphIndex;                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSubstanceConnection>                        Connections;                                             // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class USubstanceInstanceFactory*                           ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.CopyInputParameters
	 */
	struct USubstanceUtility_CopyInputParameters_Params
	{
	public:
		class USubstanceGraphInstance*                             SourceGraphInstance;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubstanceGraphInstance*                             DestGraphInstance;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SubstanceCore.SubstanceUtility.ClearCache
	 */
	struct USubstanceUtility_ClearCache_Params
	{
	};

	/**
	 * Function SubstanceCore.SubstanceUtility.AsyncRendering
	 */
	struct USubstanceUtility_AsyncRendering_Params
	{
	public:
		class USubstanceGraphInstance*                             InstancesToRender;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

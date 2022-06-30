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
	 * Class SubstanceCore.SubstanceGraphInstance
	 * Size -> 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
	 */
	class USubstanceGraphInstance : public UObject
	{
	public:
		unsigned char                                              UnknownData_9Q03[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PackageURL;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USubstanceInstanceFactory*                           ParentFactory;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint32_t, class UTexture2D*>                          ImageSources;                                            // 0x0050(0x0050) NativeAccessSpecifierPublic
		class UMaterial*                                           CreatedMaterial;                                         // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceConstant*                           ConstantCreatedMaterial;                                 // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            DynamicCreatedMaterial;                                  // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, struct FGuid>                                OutputTextureLinkData;                                   // 0x00B8(0x0050) NativeAccessSpecifierPublic
		TMap<uint32_t, class USubstanceOutputData*>                OutputInstances;                                         // 0x0108(0x0050) NativeAccessSpecifierPublic
		bool                                                       bIsFrozen;                                               // 0x0158(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GBH[0x1F];                                  // 0x0159(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetInputString(const class FString& Identifier, const class FString& Value);
		void SetInputInt(const class FString& Identifier, TArray<int32_t> InputValues);
		bool SetInputImg(const class FString& InputName, class UObject* Value);
		void SetInputFloat(const class FString& Identifier, TArray<float> InputValues);
		void SetInputColor(const class FString& Identifier, const struct FLinearColor& Color);
		void SetInputBool(const class FString& Identifier, bool _bool_);
		struct FSubstanceIntInputDesc GetIntInputDesc(const class FString& Identifier);
		struct FSubstanceInstanceDesc GetInstanceDesc();
		ESubstanceInputType GetInputType(const class FString& InputName);
		class FString GetInputString(const class FString& Identifier);
		TArray<class FString> GetInputNames();
		TArray<int32_t> GetInputInt(const class FString& Identifier);
		TArray<float> GetInputFloat(const class FString& Identifier);
		struct FLinearColor GetInputColor(const class FString& Identifier);
		bool GetInputBool(const class FString& Identifier);
		struct FSubstanceFloatInputDesc GetFloatInputDesc(const class FString& Identifier);
		class UMaterialInstanceDynamic* GetDynamicMaterialInstance(const class FName& Name, class UMaterial* InParentMaterial);
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceInstanceFactory
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USubstanceInstanceFactory : public UObject
	{
	public:
		TArray<class USubstanceGraphInstance*>                     mGraphInstances;                                         // 0x0028(0x0010) ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RBN5[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RelativeSourceFilePath;                                  // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AbsoluteSourceFilePath;                                  // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceFileTimestamp;                                     // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubstanceGenerationMode                                   GenerationMode;                                          // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUYX[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceOutputData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USubstanceOutputData : public UObject
	{
	public:
		class UObject*                                             ConnectedObject;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialParameterInfo                              ParamInfo;                                               // 0x0030(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USubstanceGraphInstance*                             ParentInstance;                                          // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               CacheGuid;                                               // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class USubstanceSettings : public UObject
	{
	public:
		int32_t                                                    MemoryBudgetMb;                                          // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CPUCores;                                                // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AsyncLoadMipClip;                                        // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAsyncSubstancesRenderedPerFrame;                      // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubstanceEngineType                                       SubstanceEngine;                                         // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDefaultSubstanceTextureSize                               DefaultSubstanceOutputSizeX;                             // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDefaultSubstanceTextureSize                               DefaultSubstanceOutputSizeY;                             // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78KX[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultTemplateMaterial[0x28];                           // 0x003B(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceTexture2D
	 * Size -> 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
	 */
	class USubstanceTexture2D : public UTexture2DDynamic
	{
	public:
		unsigned char                                              UnknownData_81KQ[0x30];                                  // 0x00F0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USubstanceGraphInstance*                             ParentInstance;                                          // 0x0120(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            AddressX;                                                // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            AddressY;                                                // 0x0129(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCooked;                                                 // 0x012A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9KC[0x1D];                                  // 0x012B(0x001D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceUtility
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USubstanceUtility : public UBlueprintFunctionLibrary
	{
	public:
		void SyncRendering(class USubstanceGraphInstance* InstancesToRender);
		void SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height);
		void SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, ESubstanceTextureSize Width, ESubstanceTextureSize Height);
		void ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
		TArray<class UTexture2D*> GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
		TArray<class USubstanceGraphInstance*> GetSubstances(class UMaterialInterface* Material);
		float GetSubstanceLoadingProgress();
		class FString GetGraphName(class USubstanceGraphInstance* GraphInstance);
		class FString GetFactoryName(class USubstanceGraphInstance* GraphInstance);
		void EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices);
		class USubstanceGraphInstance* DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
		void DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices);
		class USubstanceGraphInstance* CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, class UMaterial* ParentMaterial, const class FString& InstanceName);
		class USubstanceInstanceFactory* CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections);
		void CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
		void ClearCache();
		void AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

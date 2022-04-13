#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DatasmithContent.EDatasmithAreaLightActorType
	 */
	enum class EDatasmithAreaLightActorType : uint8_t
	{
		Point = 0x0000000000000000,
		Spot  = 0x0000000000000001,
		Rect  = 0x0000000000000002,
		MAX   = 0x0000000000000003
	};

	/**
	 * Enum DatasmithContent.EDatasmithAreaLightActorShape
	 */
	enum class EDatasmithAreaLightActorShape : uint8_t
	{
		Rectangle = 0x0000000000000000,
		Disc      = 0x0000000000000001,
		Sphere    = 0x0000000000000002,
		Cylinder  = 0x0000000000000003,
		None      = 0x0000000000000004,
		MAX       = 0x0000000000000005
	};

	/**
	 * Enum DatasmithContent.EDatasmithCADRetessellationRule
	 */
	enum class EDatasmithCADRetessellationRule : uint8_t
	{
		All                 = 0x0000000000000000,
		SkipDeletedSurfaces = 0x0000000000000001,
		MAX                 = 0x0000000000000002
	};

	/**
	 * Enum DatasmithContent.EDatasmithCADStitchingTechnique
	 */
	enum class EDatasmithCADStitchingTechnique : uint8_t
	{
		StitchingNone = 0x0000000000000000,
		StitchingHeal = 0x0000000000000001,
		StitchingSew  = 0x0000000000000002,
		MAX           = 0x0000000000000003
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportHierarchy
	 */
	enum class EDatasmithImportHierarchy : uint8_t
	{
		UseMultipleActors = 0x0000000000000000,
		UseSingleActor    = 0x0000000000000001,
		UseOneBlueprint   = 0x0000000000000002,
		MAX               = 0x0000000000000003
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportScene
	 */
	enum class EDatasmithImportScene : uint8_t
	{
		NewLevel     = 0x0000000000000000,
		CurrentLevel = 0x0000000000000001,
		AssetsOnly   = 0x0000000000000002,
		MAX          = 0x0000000000000003
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportLightmapMax
	 */
	enum class EDatasmithImportLightmapMax : uint8_t
	{
		LIGHTMAP     = 0x0000000000000000,
		LIGHTMAP01   = 0x0000000000000001,
		LIGHTMAP02   = 0x0000000000000002,
		LIGHTMAP03   = 0x0000000000000003,
		LIGHTMAP04   = 0x0000000000000004,
		LIGHTMAP05   = 0x0000000000000005,
		LIGHTMAP06   = 0x0000000000000006,
		LIGHTMAP_MAX = 0x0000000000000007
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportLightmapMin
	 */
	enum class EDatasmithImportLightmapMin : uint8_t
	{
		LIGHTMAP     = 0x0000000000000000,
		LIGHTMAP01   = 0x0000000000000001,
		LIGHTMAP02   = 0x0000000000000002,
		LIGHTMAP03   = 0x0000000000000003,
		LIGHTMAP04   = 0x0000000000000004,
		LIGHTMAP05   = 0x0000000000000005,
		LIGHTMAP_MAX = 0x0000000000000006
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportMaterialQuality
	 */
	enum class EDatasmithImportMaterialQuality : uint8_t
	{
		UseNoFresnelCurves         = 0x0000000000000000,
		UseSimplifierFresnelCurves = 0x0000000000000001,
		UseRealFresnelCurves       = 0x0000000000000002,
		MAX                        = 0x0000000000000003
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportActorPolicy
	 */
	enum class EDatasmithImportActorPolicy : uint8_t
	{
		Update = 0x0000000000000000,
		Full   = 0x0000000000000001,
		Ignore = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
	 */
	enum class EDatasmithImportAssetConflictPolicy : uint8_t
	{
		Replace = 0x0000000000000000,
		Update  = 0x0000000000000001,
		Use     = 0x0000000000000002,
		Ignore  = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
	 */
	enum class EDatasmithImportSearchPackagePolicy : uint8_t
	{
		Current = 0x0000000000000000,
		All     = 0x0000000000000001,
		MAX     = 0x0000000000000002
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
	 * Size -> 0x0030
	 */
	struct FDatasmithCameraLookatTrackingSettingsTemplate
	{
	public:
		unsigned char                                              bEnableLookAtTracking : 1;                               // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowRoll : 1;                                          // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZEL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActorToTrack[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
	 * Size -> 0x0008
	 */
	struct FDatasmithCameraFilmbackSettingsTemplate
	{
	public:
		float                                                      SensorWidth;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensorHeight;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
	 * Size -> 0x0004
	 */
	struct FDatasmithCameraLensSettingsTemplate
	{
	public:
		float                                                      MaxFStop;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
	 * Size -> 0x0008
	 */
	struct FDatasmithCameraFocusSettingsTemplate
	{
	public:
		ECameraFocusMethod                                         FocusMethod;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BFD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualFocusDistance;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
	 * Size -> 0x0040
	 */
	struct FDatasmithPostProcessSettingsTemplate
	{
	public:
		unsigned char                                              bOverride_WhiteTemp : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturation : 1;                           // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_VignetteIntensity : 1;                         // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmWhitePoint : 1;                            // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureMethod : 1;                        // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_CameraISO : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_CameraShutterSpeed : 1;                        // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPXY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOverride_DepthOfFieldFstop : 1;                         // 0x0004(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91T2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WhiteTemp;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VignetteIntensity;                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmWhitePoint;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            ColorSaturation;                                         // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAutoExposureMethod                                        AutoExposureMethod;                                      // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNAN[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraISO;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShutterSpeed;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthOfFieldFstop;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithTessellationOptions
	 * Size -> 0x0010
	 */
	struct FDatasmithTessellationOptions
	{
	public:
		float                                                      ChordTolerance;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEdgeLength;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalTolerance;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithCADStitchingTechnique                            StitchingTechnique;                                      // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1VK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithAssetImportOptions
	 * Size -> 0x0008
	 */
	struct FDatasmithAssetImportOptions
	{
	public:
		class FName                                                PackagePath;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
	 * Size -> 0x0004
	 */
	struct FDatasmithStaticMeshImportOptions
	{
	public:
		EDatasmithImportLightmapMin                                MinLightmapResolution;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportLightmapMax                                MaxLightmapResolution;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLightmapUVs;                                    // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveDegenerates;                                      // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithImportBaseOptions
	 * Size -> 0x0014
	 */
	struct FDatasmithImportBaseOptions
	{
	public:
		EDatasmithImportScene                                      SceneHandling;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeGeometry;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeMaterial;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeLight;                                           // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeCamera;                                          // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeAnimation;                                       // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9YK[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDatasmithAssetImportOptions                        AssetOptions;                                            // 0x0008(0x0008) BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDatasmithStaticMeshImportOptions                   StaticMeshOptions;                                       // 0x0010(0x0004) Edit, BlueprintVisible, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithReimportOptions
	 * Size -> 0x0002
	 */
	struct FDatasmithReimportOptions
	{
	public:
		bool                                                       bUpdateActors;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespawnDeletedActors;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
	 * Size -> 0x0050
	 */
	struct FDatasmithStaticParameterSetTemplate
	{
	public:
		TMap<class FName, bool>                                    StaticSwitchParameters;                                  // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
	 * Size -> 0x0004
	 */
	struct FDatasmithMeshSectionInfoTemplate
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
	 * Size -> 0x0050
	 */
	struct FDatasmithMeshSectionInfoMapTemplate
	{
	public:
		TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate>   Map;                                                     // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
	 * Size -> 0x0010
	 */
	struct FDatasmithMeshBuildSettingsTemplate
	{
	public:
		unsigned char                                              bUseMikkTSpace : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecomputeNormals : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecomputeTangents : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemoveDegenerates : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBuildAdjacencyBuffer : 1;                               // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHighPrecisionTangentBasis : 1;                       // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFullPrecisionUVs : 1;                                // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateLightmapUVs : 1;                                // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XT30[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLightmapResolution;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SrcLightmapIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstLightmapIndex;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
	 * Size -> 0x0010
	 */
	struct FDatasmithStaticMaterialTemplate
	{
	public:
		class FName                                                MaterialSlotName;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithRetessellationOptions
	 * Size -> 0x0004 (FullSize[0x0014] - InheritedSize[0x0010])
	 */
	struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
	{
	public:
		EDatasmithCADRetessellationRule                            RetessellationRule;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NO85[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

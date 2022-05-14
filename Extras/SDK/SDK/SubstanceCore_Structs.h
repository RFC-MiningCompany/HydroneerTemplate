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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SubstanceCore.ESubstanceInputType
	 */
	enum class ESubstanceInputType : uint8_t
	{
		SIT_Float    = 0,
		SIT_Float2   = 1,
		SIT_Float3   = 2,
		SIT_Float4   = 3,
		SIT_Integer  = 4,
		SIT_Image    = 5,
		SIT_Unused   = 6,
		SIT_Unused01 = 7,
		SIT_Integer2 = 8,
		SIT_Integer3 = 9,
		SIT_Integer4 = 10,
		SIT_MAX      = 11
	};

	/**
	 * Enum SubstanceCore.ESubstanceGenerationMode
	 */
	enum class ESubstanceGenerationMode : uint8_t
	{
		SGM_PlatformDefault     = 0,
		SGM_Baked               = 1,
		SGM_OnLoadSync          = 2,
		SGM_OnLoadSyncAndCache  = 3,
		SGM_OnLoadAsync         = 4,
		SGM_OnLoadAsyncAndCache = 5,
		SGM_MAX                 = 6
	};

	/**
	 * Enum SubstanceCore.EDefaultSubstanceTextureSize
	 */
	enum class EDefaultSubstanceTextureSize : uint8_t
	{
		Size     = 0,
		Size01   = 1,
		Size02   = 2,
		Size03   = 3,
		Size04   = 4,
		Size05   = 5,
		Size06   = 6,
		Size07   = 7,
		Size08   = 8,
		Size09   = 9,
		Size_MAX = 10
	};

	/**
	 * Enum SubstanceCore.ESubstanceEngineType
	 */
	enum class ESubstanceEngineType : uint8_t
	{
		SET_CPU = 0,
		SET_GPU = 1,
		SET_MAX = 2
	};

	/**
	 * Enum SubstanceCore.ESubstanceTextureSize
	 */
	enum class ESubstanceTextureSize : uint8_t
	{
		ERL     = 0,
		ERL01   = 1,
		ERL02   = 2,
		ERL03   = 3,
		ERL04   = 4,
		ERL05   = 5,
		ERL06   = 6,
		ERL07   = 7,
		ERL08   = 8,
		ERL09   = 9,
		ERL_MAX = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SubstanceCore.SubstanceInputDesc
	 * Size -> 0x0018
	 */
	struct FSubstanceInputDesc
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubstanceInputType                                        Type;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZBW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SubstanceCore.SubstanceInstanceDesc
	 * Size -> 0x0020
	 */
	struct FSubstanceInstanceDesc
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSubstanceInputDesc>                         Inputs;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SubstanceCore.SubstanceFloatInputDesc
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FSubstanceFloatInputDesc : public FSubstanceInputDesc
	{
	public:
		TArray<float>                                              Min;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<float>                                              Max;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<float>                                              Default;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SubstanceCore.SubstanceIntInputDesc
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FSubstanceIntInputDesc : public FSubstanceInputDesc
	{
	public:
		TArray<int32_t>                                            Min;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Max;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Default;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SubstanceCore.SubstanceConnection
	 * Size -> 0x0020
	 */
	struct FSubstanceConnection
	{
	public:
		class FString                                              OutputIdentifier;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InputImageIdentifier;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

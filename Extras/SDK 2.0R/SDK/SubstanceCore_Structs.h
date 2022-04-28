#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
		SIT_Float    = 0x0000000000000000,
		SIT_Float2   = 0x0000000000000001,
		SIT_Float3   = 0x0000000000000002,
		SIT_Float4   = 0x0000000000000003,
		SIT_Integer  = 0x0000000000000004,
		SIT_Image    = 0x0000000000000005,
		SIT_Unused   = 0x0000000000000006,
		SIT_Unused01 = 0x0000000000000007,
		SIT_Integer2 = 0x0000000000000008,
		SIT_Integer3 = 0x0000000000000009,
		SIT_Integer4 = 0x000000000000000A,
		SIT_MAX      = 0x000000000000000B
	};

	/**
	 * Enum SubstanceCore.ESubstanceGenerationMode
	 */
	enum class ESubstanceGenerationMode : uint8_t
	{
		SGM_PlatformDefault     = 0x0000000000000000,
		SGM_Baked               = 0x0000000000000001,
		SGM_OnLoadSync          = 0x0000000000000002,
		SGM_OnLoadSyncAndCache  = 0x0000000000000003,
		SGM_OnLoadAsync         = 0x0000000000000004,
		SGM_OnLoadAsyncAndCache = 0x0000000000000005,
		SGM_MAX                 = 0x0000000000000006
	};

	/**
	 * Enum SubstanceCore.EDefaultSubstanceTextureSize
	 */
	enum class EDefaultSubstanceTextureSize : uint8_t
	{
		Size     = 0x0000000000000000,
		Size01   = 0x0000000000000001,
		Size02   = 0x0000000000000002,
		Size03   = 0x0000000000000003,
		Size04   = 0x0000000000000004,
		Size05   = 0x0000000000000005,
		Size06   = 0x0000000000000006,
		Size07   = 0x0000000000000007,
		Size08   = 0x0000000000000008,
		Size09   = 0x0000000000000009,
		Size_MAX = 0x000000000000000A
	};

	/**
	 * Enum SubstanceCore.ESubstanceEngineType
	 */
	enum class ESubstanceEngineType : uint8_t
	{
		SET_CPU = 0x0000000000000000,
		SET_GPU = 0x0000000000000001,
		SET_MAX = 0x0000000000000002
	};

	/**
	 * Enum SubstanceCore.ESubstanceTextureSize
	 */
	enum class ESubstanceTextureSize : uint8_t
	{
		ERL     = 0x0000000000000000,
		ERL01   = 0x0000000000000001,
		ERL02   = 0x0000000000000002,
		ERL03   = 0x0000000000000003,
		ERL04   = 0x0000000000000004,
		ERL05   = 0x0000000000000005,
		ERL06   = 0x0000000000000006,
		ERL07   = 0x0000000000000007,
		ERL08   = 0x0000000000000008,
		ERL09   = 0x0000000000000009,
		ERL_MAX = 0x000000000000000A
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
		unsigned char                                              UnknownData_4TTX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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

#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	 * Enum ImageWriteQueue.EDesiredImageFormat
	 */
	enum class ImageWriteQueue_EDesiredImageFormat : uint8_t
	{
		EDesiredImageFormat__PNG                     = 0,
		EDesiredImageFormat__JPG                     = 1,
		EDesiredImageFormat__BMP                     = 2,
		EDesiredImageFormat__EXR                     = 3,
		EDesiredImageFormat__EDesiredImageFormat_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ImageWriteQueue.ImageWriteOptions
	 * Size -> 0x0060
	 */
	struct FImageWriteOptions
	{
	public:
		ImageWriteQueue_EDesiredImageFormat                        Format;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCHK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnComplete;                                              // 0x0004(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CompressionQuality;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverwriteFile;                                          // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAsync;                                                  // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SDS[0x46];                                  // 0x001A(0x0046) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

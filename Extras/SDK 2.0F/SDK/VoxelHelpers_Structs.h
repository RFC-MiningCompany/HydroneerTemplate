﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
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
	 * ScriptStruct VoxelHelpers.MaterialPackInput
	 * Size -> 0x001C
	 */
	struct FMaterialPackInput
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Input;                                                   // 0x0008(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBBD[0x8];                                   // 0x0014(0x0008) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

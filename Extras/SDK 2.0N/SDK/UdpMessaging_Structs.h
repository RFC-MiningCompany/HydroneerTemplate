#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Enum UdpMessaging.EUdpMessageFormat
	 */
	enum class EUdpMessageFormat : uint8_t
	{
		None                   = 0x0000000000000000,
		Json                   = 0x0000000000000001,
		TaggedProperty         = 0x0000000000000002,
		CborPlatformEndianness = 0x0000000000000003,
		CborStandardEndianness = 0x0000000000000004,
		MAX                    = 0x0000000000000005
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UdpMessaging.UdpMockMessage
	 * Size -> 0x0010
	 */
	struct FUdpMockMessage
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Enum DLSSBlueprint.UDLSSMode
	 */
	enum class EUDLSSMode : uint8_t
	{
		UDLSSMode__Off              = 0x0000000000000000,
		UDLSSMode__Auto             = 0x0000000000000001,
		UDLSSMode__UltraQuality     = 0x0000000000000002,
		UDLSSMode__Quality          = 0x0000000000000003,
		UDLSSMode__Balanced         = 0x0000000000000004,
		UDLSSMode__Performance      = 0x0000000000000005,
		UDLSSMode__UltraPerformance = 0x0000000000000006,
		UDLSSMode__UDLSSMode_MAX    = 0x0000000000000007
	};

	/**
	 * Enum DLSSBlueprint.UDLSSSupport
	 */
	enum class EUDLSSSupport : uint8_t
	{
		UDLSSSupport__Supported                            = 0x0000000000000000,
		UDLSSSupport__NotSupported                         = 0x0000000000000001,
		UDLSSSupport__NotSupportedIncompatibleHardware     = 0x0000000000000002,
		UDLSSSupport__NotSupportedDriverOutOfDate          = 0x0000000000000003,
		UDLSSSupport__NotSupportedOperatingSystemOutOfDate = 0x0000000000000004,
		UDLSSSupport__NotSupportedByPlatformAtBuildTime    = 0x0000000000000005,
		UDLSSSupport__UDLSSSupport_MAX                     = 0x0000000000000006
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

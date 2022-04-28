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
	 * Enum DLSS.EDLSSSettingOverride
	 */
	enum class EDLSSSettingOverride : uint8_t
	{
		Enabled            = 0x0000000000000000,
		Disabled           = 0x0000000000000001,
		UseProjectSettings = 0x0000000000000002,
		MAX                = 0x0000000000000003
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

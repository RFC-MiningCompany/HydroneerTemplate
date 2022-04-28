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
	 * Enum LowEntryFileManager.ELowEntryFileManagerYesNo
	 */
	enum class ELowEntryFileManagerYesNo : uint8_t
	{
		Yes = 0x0000000000000000,
		No  = 0x0000000000000001,
		MAX = 0x0000000000000002
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

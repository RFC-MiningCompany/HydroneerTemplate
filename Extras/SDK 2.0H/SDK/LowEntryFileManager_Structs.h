#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
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
	enum class LowEntryFileManager_ELowEntryFileManagerYesNo : uint8_t
	{
		ELowEntryFileManagerYesNo__Yes                           = 0,
		ELowEntryFileManagerYesNo__No                            = 1,
		ELowEntryFileManagerYesNo__ELowEntryFileManagerYesNo_MAX = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

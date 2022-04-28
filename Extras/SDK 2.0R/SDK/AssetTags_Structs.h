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
	 * Enum AssetTags.ECollectionScriptingShareType
	 */
	enum class ECollectionScriptingShareType : uint8_t
	{
		Local   = 0x0000000000000000,
		Private = 0x0000000000000001,
		Shared  = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

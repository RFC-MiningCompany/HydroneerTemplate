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
	 * Enum AssetTags.ECollectionScriptingShareType
	 */
	enum class AssetTags_ECollectionScriptingShareType : uint8_t
	{
		ECollectionScriptingShareType__Local                             = 0,
		ECollectionScriptingShareType__Private                           = 1,
		ECollectionScriptingShareType__Shared                            = 2,
		ECollectionScriptingShareType__ECollectionScriptingShareType_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

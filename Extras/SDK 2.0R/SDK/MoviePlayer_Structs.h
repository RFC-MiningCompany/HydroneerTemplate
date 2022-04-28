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
	 * Enum MoviePlayer.EMoviePlaybackType
	 */
	enum class EMoviePlaybackType : uint8_t
	{
		MT_Normal      = 0x0000000000000000,
		MT_Looped      = 0x0000000000000001,
		MT_LoadingLoop = 0x0000000000000002,
		MT_MAX         = 0x0000000000000003
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

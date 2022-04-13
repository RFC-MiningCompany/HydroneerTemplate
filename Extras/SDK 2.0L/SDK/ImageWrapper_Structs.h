#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Enum ImageWrapper.EBitmapCSType
	 */
	enum class EBitmapCSType : uint8_t
	{
		BCST_BLCS_CALIBRATED_RGB     = 0x0000000000000000,
		BCST_LCS_sRGB                = 0x0000000000000001,
		BCST_LCS_WINDOWS_COLOR_SPACE = 0x0000000000000002,
		BCST_PROFILE_LINKED          = 0x0000000000000003,
		BCST_PROFILE_EMBEDDED        = 0x0000000000000004,
		BCST_MAX                     = 0x0000000000000005
	};

	/**
	 * Enum ImageWrapper.EBitmapHeaderVersion
	 */
	enum class EBitmapHeaderVersion : uint8_t
	{
		BHV_BITMAPINFOHEADER   = 0x0000000000000000,
		BHV_BITMAPV2INFOHEADER = 0x0000000000000001,
		BHV_BITMAPV3INFOHEADER = 0x0000000000000002,
		BHV_BITMAPV4HEADER     = 0x0000000000000003,
		BHV_BITMAPV5HEADER     = 0x0000000000000004,
		BHV_MAX                = 0x0000000000000005
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

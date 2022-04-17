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
	 * Enum GooglePAD.EGooglePADCellularDataConfirmStatus
	 */
	enum class EGooglePADCellularDataConfirmStatus : uint8_t
	{
		AssetPack_CONFIRM_UNKNOWN       = 0x0000000000000000,
		AssetPack_CONFIRM_PENDING       = 0x0000000000000001,
		AssetPack_CONFIRM_USER_APPROVED = 0x0000000000000002,
		AssetPack_CONFIRM_USER_CANCELED = 0x0000000000000003,
		AssetPack_CONFIRM_MAX           = 0x0000000000000004
	};

	/**
	 * Enum GooglePAD.EGooglePADStorageMethod
	 */
	enum class EGooglePADStorageMethod : uint8_t
	{
		AssetPack_STORAGE_FILES         = 0x0000000000000000,
		AssetPack_STORAGE_APK           = 0x0000000000000001,
		AssetPack_STORAGE_UNKNOWN       = 0x0000000000000002,
		AssetPack_STORAGE_NOT_INSTALLED = 0x0000000000000003,
		AssetPack_STORAGE_MAX           = 0x0000000000000004
	};

	/**
	 * Enum GooglePAD.EGooglePADDownloadStatus
	 */
	enum class EGooglePADDownloadStatus : uint8_t
	{
		AssetPack_UNKNOWN            = 0x0000000000000000,
		AssetPack_DOWNLOAD_PENDING   = 0x0000000000000001,
		AssetPack_DOWNLOADING        = 0x0000000000000002,
		AssetPack_TRANSFERRING       = 0x0000000000000003,
		AssetPack_DOWNLOAD_COMPLETED = 0x0000000000000004,
		AssetPack_DOWNLOAD_FAILED    = 0x0000000000000005,
		AssetPack_DOWNLOAD_CANCELED  = 0x0000000000000006,
		AssetPack_WAITING_FOR_WIFI   = 0x0000000000000007,
		AssetPack_NOT_INSTALLED      = 0x0000000000000008,
		AssetPack_INFO_PENDING       = 0x0000000000000009,
		AssetPack_INFO_FAILED        = 0x000000000000000A,
		AssetPack_REMOVAL_PENDING    = 0x000000000000000B,
		AssetPack_REMOVAL_FAILED     = 0x000000000000000C,
		AssetPack_MAX                = 0x000000000000000D
	};

	/**
	 * Enum GooglePAD.EGooglePADErrorCode
	 */
	enum class EGooglePADErrorCode : uint8_t
	{
		AssetPack_NO_ERROR              = 0x0000000000000000,
		AssetPack_APP_UNAVAILABLE       = 0x0000000000000001,
		AssetPack_UNAVAILABLE           = 0x0000000000000002,
		AssetPack_INVALID_REQUEST       = 0x0000000000000003,
		AssetPack_DOWNLOAD_NOT_FOUND    = 0x0000000000000004,
		AssetPack_API_NOT_AVAILABLE     = 0x0000000000000005,
		AssetPack_NETWORK_ERROR         = 0x0000000000000006,
		AssetPack_ACCESS_DENIED         = 0x0000000000000007,
		AssetPack_INSUFFICIENT_STORAGE  = 0x0000000000000008,
		AssetPack_PLAY_STORE_NOT_FOUND  = 0x0000000000000009,
		AssetPack_NETWORK_UNRESTRICTED  = 0x000000000000000A,
		AssetPack_INTERNAL_ERROR        = 0x000000000000000B,
		AssetPack_INITIALIZATION_NEEDED = 0x000000000000000C,
		AssetPack_INITIALIZATION_FAILED = 0x000000000000000D,
		AssetPack_MAX                   = 0x000000000000000E
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

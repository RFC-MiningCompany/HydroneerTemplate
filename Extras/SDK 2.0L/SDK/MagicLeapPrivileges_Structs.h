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
	 * Enum MagicLeapPrivileges.EMagicLeapPrivilege
	 */
	enum class EMagicLeapPrivilege : uint8_t
	{
		Invalid                        = 0x0000000000000000,
		BatteryInfo                    = 0x0000000000000001,
		CameraCapture                  = 0x0000000000000002,
		ComputerVision                 = 0x0000000000000003,
		WorldReconstruction            = 0x0000000000000004,
		InAppPurchase                  = 0x0000000000000005,
		AudioCaptureMic                = 0x0000000000000006,
		DrmCertificates                = 0x0000000000000007,
		Occlusion                      = 0x0000000000000008,
		LowLatencyLightwear            = 0x0000000000000009,
		Internet                       = 0x000000000000000A,
		IdentityRead                   = 0x000000000000000B,
		BackgroundDownload             = 0x000000000000000C,
		BackgroundUpload               = 0x000000000000000D,
		MediaDrm                       = 0x000000000000000E,
		Media                          = 0x000000000000000F,
		MediaMetadata                  = 0x0000000000000010,
		PowerInfo                      = 0x0000000000000011,
		LocalAreaNetwork               = 0x0000000000000012,
		VoiceInput                     = 0x0000000000000013,
		Documents                      = 0x0000000000000014,
		ConnectBackgroundMusicService  = 0x0000000000000015,
		RegisterBackgroundMusicService = 0x0000000000000016,
		PcfRead                        = 0x0000000000000017,
		PwFoundObjRead                 = 0x0000000000000018,
		NormalNotificationsUsage       = 0x0000000000000019,
		MusicService                   = 0x000000000000001A,
		ControllerPose                 = 0x000000000000001B,
		GesturesSubscribe              = 0x000000000000001C,
		GesturesConfig                 = 0x000000000000001D,
		AddressBookRead                = 0x000000000000001E,
		AddressBookWrite               = 0x000000000000001F,
		AddressBookBasicAccess         = 0x0000000000000020,
		CoarseLocation                 = 0x0000000000000021,
		FineLocation                   = 0x0000000000000022,
		HandMesh                       = 0x0000000000000023,
		WifiStatusRead                 = 0x0000000000000024,
		SocialConnectionsInvitesAccess = 0x0000000000000025,
		SecureBrowserWindow            = 0x0000000000000026,
		MAX                            = 0x0000000000000027
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

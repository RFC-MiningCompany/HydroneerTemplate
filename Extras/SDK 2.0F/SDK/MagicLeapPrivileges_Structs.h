#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
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
	enum class MagicLeapPrivileges_EMagicLeapPrivilege : uint8_t
	{
		EMagicLeapPrivilege__Invalid                        = 0,
		EMagicLeapPrivilege__BatteryInfo                    = 1,
		EMagicLeapPrivilege__CameraCapture                  = 2,
		EMagicLeapPrivilege__ComputerVision                 = 3,
		EMagicLeapPrivilege__WorldReconstruction            = 4,
		EMagicLeapPrivilege__InAppPurchase                  = 5,
		EMagicLeapPrivilege__AudioCaptureMic                = 6,
		EMagicLeapPrivilege__DrmCertificates                = 7,
		EMagicLeapPrivilege__Occlusion                      = 8,
		EMagicLeapPrivilege__LowLatencyLightwear            = 9,
		EMagicLeapPrivilege__Internet                       = 10,
		EMagicLeapPrivilege__IdentityRead                   = 11,
		EMagicLeapPrivilege__BackgroundDownload             = 12,
		EMagicLeapPrivilege__BackgroundUpload               = 13,
		EMagicLeapPrivilege__MediaDrm                       = 14,
		EMagicLeapPrivilege__Media                          = 15,
		EMagicLeapPrivilege__MediaMetadata                  = 16,
		EMagicLeapPrivilege__PowerInfo                      = 17,
		EMagicLeapPrivilege__LocalAreaNetwork               = 18,
		EMagicLeapPrivilege__VoiceInput                     = 19,
		EMagicLeapPrivilege__Documents                      = 20,
		EMagicLeapPrivilege__ConnectBackgroundMusicService  = 21,
		EMagicLeapPrivilege__RegisterBackgroundMusicService = 22,
		EMagicLeapPrivilege__PcfRead                        = 23,
		EMagicLeapPrivilege__PwFoundObjRead                 = 24,
		EMagicLeapPrivilege__NormalNotificationsUsage       = 25,
		EMagicLeapPrivilege__MusicService                   = 26,
		EMagicLeapPrivilege__ControllerPose                 = 27,
		EMagicLeapPrivilege__GesturesSubscribe              = 28,
		EMagicLeapPrivilege__GesturesConfig                 = 29,
		EMagicLeapPrivilege__AddressBookRead                = 30,
		EMagicLeapPrivilege__AddressBookWrite               = 31,
		EMagicLeapPrivilege__AddressBookBasicAccess         = 32,
		EMagicLeapPrivilege__CoarseLocation                 = 33,
		EMagicLeapPrivilege__FineLocation                   = 34,
		EMagicLeapPrivilege__HandMesh                       = 35,
		EMagicLeapPrivilege__WifiStatusRead                 = 36,
		EMagicLeapPrivilege__SocialConnectionsInvitesAccess = 37,
		EMagicLeapPrivilege__SecureBrowserWindow            = 38,
		EMagicLeapPrivilege__EMagicLeapPrivilege_MAX        = 39
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

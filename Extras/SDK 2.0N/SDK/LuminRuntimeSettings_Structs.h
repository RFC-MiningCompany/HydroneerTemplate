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
	 * Enum LuminRuntimeSettings.ELuminPrivilege
	 */
	enum class ELuminPrivilege : uint8_t
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
		SocialConnectionsSelectAccess  = 0x0000000000000026,
		SecureBrowserWindow            = 0x0000000000000027,
		BluetoothAdapterExternalApp    = 0x0000000000000028,
		BluetoothAdapterUser           = 0x0000000000000029,
		BluetoothGattWrite             = 0x000000000000002A,
		MAX                            = 0x000000000000002B
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminFrameTimingHint
	 */
	enum class ELuminFrameTimingHint : uint8_t
	{
		Unspecified = 0x0000000000000000,
		Maximum     = 0x0000000000000001,
		FPS         = 0x0000000000000002,
		FPS01       = 0x0000000000000003,
		MAX         = 0x0000000000000004
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminComponentType
	 */
	enum class ELuminComponentType : uint8_t
	{
		Universe       = 0x0000000000000000,
		Fullscreen     = 0x0000000000000001,
		SearchProvider = 0x0000000000000002,
		MusicService   = 0x0000000000000003,
		Console        = 0x0000000000000004,
		SystemUI       = 0x0000000000000005,
		MAX            = 0x0000000000000006
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminComponentSubElementType
	 */
	enum class ELuminComponentSubElementType : uint8_t
	{
		FileExtension  = 0x0000000000000000,
		MimeType       = 0x0000000000000001,
		Mode           = 0x0000000000000002,
		MusicAttribute = 0x0000000000000003,
		Schema         = 0x0000000000000004,
		MAX            = 0x0000000000000005
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
	 * Size -> 0x0030
	 */
	struct FLocalizedIconInfo
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      IconModelPath;                                           // 0x0010(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      IconPortalPath;                                          // 0x0020(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
	 * Size -> 0x0010
	 */
	struct FLocalizedIconInfos
	{
	public:
		TArray<struct FLocalizedIconInfo>                          IconData;                                                // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
	 * Size -> 0x0018
	 */
	struct FLuminComponentSubElement
	{
	public:
		ELuminComponentSubElementType                              ElementType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SAO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LuminComponentElement
	 * Size -> 0x0048
	 */
	struct FLuminComponentElement
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutableName;                                          // 0x0020(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELuminComponentType                                        ComponentType;                                           // 0x0030(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9A5V[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLuminComponentSubElement>                   ExtraComponentSubElements;                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LocalizedAppName
	 * Size -> 0x0020
	 */
	struct FLocalizedAppName
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

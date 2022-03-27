#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	enum class LuminRuntimeSettings_ELuminPrivilege : uint8_t
	{
		ELuminPrivilege__Invalid                        = 0,
		ELuminPrivilege__BatteryInfo                    = 1,
		ELuminPrivilege__CameraCapture                  = 2,
		ELuminPrivilege__ComputerVision                 = 3,
		ELuminPrivilege__WorldReconstruction            = 4,
		ELuminPrivilege__InAppPurchase                  = 5,
		ELuminPrivilege__AudioCaptureMic                = 6,
		ELuminPrivilege__DrmCertificates                = 7,
		ELuminPrivilege__Occlusion                      = 8,
		ELuminPrivilege__LowLatencyLightwear            = 9,
		ELuminPrivilege__Internet                       = 10,
		ELuminPrivilege__IdentityRead                   = 11,
		ELuminPrivilege__BackgroundDownload             = 12,
		ELuminPrivilege__BackgroundUpload               = 13,
		ELuminPrivilege__MediaDrm                       = 14,
		ELuminPrivilege__Media                          = 15,
		ELuminPrivilege__MediaMetadata                  = 16,
		ELuminPrivilege__PowerInfo                      = 17,
		ELuminPrivilege__LocalAreaNetwork               = 18,
		ELuminPrivilege__VoiceInput                     = 19,
		ELuminPrivilege__Documents                      = 20,
		ELuminPrivilege__ConnectBackgroundMusicService  = 21,
		ELuminPrivilege__RegisterBackgroundMusicService = 22,
		ELuminPrivilege__PcfRead                        = 23,
		ELuminPrivilege__PwFoundObjRead                 = 24,
		ELuminPrivilege__NormalNotificationsUsage       = 25,
		ELuminPrivilege__MusicService                   = 26,
		ELuminPrivilege__ControllerPose                 = 27,
		ELuminPrivilege__GesturesSubscribe              = 28,
		ELuminPrivilege__GesturesConfig                 = 29,
		ELuminPrivilege__AddressBookRead                = 30,
		ELuminPrivilege__AddressBookWrite               = 31,
		ELuminPrivilege__AddressBookBasicAccess         = 32,
		ELuminPrivilege__CoarseLocation                 = 33,
		ELuminPrivilege__FineLocation                   = 34,
		ELuminPrivilege__HandMesh                       = 35,
		ELuminPrivilege__WifiStatusRead                 = 36,
		ELuminPrivilege__SocialConnectionsInvitesAccess = 37,
		ELuminPrivilege__SocialConnectionsSelectAccess  = 38,
		ELuminPrivilege__SecureBrowserWindow            = 39,
		ELuminPrivilege__BluetoothAdapterExternalApp    = 40,
		ELuminPrivilege__BluetoothAdapterUser           = 41,
		ELuminPrivilege__BluetoothGattWrite             = 42,
		ELuminPrivilege__ELuminPrivilege_MAX            = 43
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminFrameTimingHint
	 */
	enum class LuminRuntimeSettings_ELuminFrameTimingHint : uint8_t
	{
		ELuminFrameTimingHint__Unspecified               = 0,
		ELuminFrameTimingHint__Maximum                   = 1,
		ELuminFrameTimingHint__FPS                       = 2,
		ELuminFrameTimingHint__FPS01                     = 3,
		ELuminFrameTimingHint__ELuminFrameTimingHint_MAX = 4
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminComponentType
	 */
	enum class LuminRuntimeSettings_ELuminComponentType : uint8_t
	{
		ELuminComponentType__Universe                = 0,
		ELuminComponentType__Fullscreen              = 1,
		ELuminComponentType__SearchProvider          = 2,
		ELuminComponentType__MusicService            = 3,
		ELuminComponentType__Console                 = 4,
		ELuminComponentType__SystemUI                = 5,
		ELuminComponentType__ELuminComponentType_MAX = 6
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminComponentSubElementType
	 */
	enum class LuminRuntimeSettings_ELuminComponentSubElementType : uint8_t
	{
		ELuminComponentSubElementType__FileExtension                     = 0,
		ELuminComponentSubElementType__MimeType                          = 1,
		ELuminComponentSubElementType__Mode                              = 2,
		ELuminComponentSubElementType__MusicAttribute                    = 3,
		ELuminComponentSubElementType__Schema                            = 4,
		ELuminComponentSubElementType__ELuminComponentSubElementType_MAX = 5
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
	 * ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
	 * Size -> 0x0018
	 */
	struct FLuminComponentSubElement
	{
	public:
		LuminRuntimeSettings_ELuminComponentSubElementType         ElementType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNIN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
	 * ScriptStruct LuminRuntimeSettings.LuminComponentElement
	 * Size -> 0x0048
	 */
	struct FLuminComponentElement
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutableName;                                          // 0x0020(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		LuminRuntimeSettings_ELuminComponentType                   ComponentType;                                           // 0x0030(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFBX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLuminComponentSubElement>                   ExtraComponentSubElements;                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

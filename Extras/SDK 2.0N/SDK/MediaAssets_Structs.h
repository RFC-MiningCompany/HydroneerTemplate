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
	 * Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
	 */
	enum class EMediaWebcamCaptureDeviceFilter : uint8_t
	{
		None        = 0x0000000000000000,
		DepthSensor = 0x0000000000000001,
		Front       = 0x0000000000000002,
		Rear        = 0x0000000000000003,
		Unknown     = 0x0000000000000004,
		MAX         = 0x0000000000000005
	};

	/**
	 * Enum MediaAssets.EMediaVideoCaptureDeviceFilter
	 */
	enum class EMediaVideoCaptureDeviceFilter : uint8_t
	{
		None     = 0x0000000000000000,
		Card     = 0x0000000000000001,
		Software = 0x0000000000000002,
		Unknown  = 0x0000000000000003,
		Webcam   = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum MediaAssets.EMediaAudioCaptureDeviceFilter
	 */
	enum class EMediaAudioCaptureDeviceFilter : uint8_t
	{
		None       = 0x0000000000000000,
		Card       = 0x0000000000000001,
		Microphone = 0x0000000000000002,
		Software   = 0x0000000000000003,
		Unknown    = 0x0000000000000004,
		MAX        = 0x0000000000000005
	};

	/**
	 * Enum MediaAssets.EMediaPlayerTrack
	 */
	enum class EMediaPlayerTrack : uint8_t
	{
		Audio    = 0x0000000000000000,
		Caption  = 0x0000000000000001,
		Metadata = 0x0000000000000002,
		Script   = 0x0000000000000003,
		Subtitle = 0x0000000000000004,
		Text     = 0x0000000000000005,
		Video    = 0x0000000000000006,
		MAX      = 0x0000000000000007
	};

	/**
	 * Enum MediaAssets.EMediaSoundComponentFFTSize
	 */
	enum class EMediaSoundComponentFFTSize : uint8_t
	{
		Min    = 0x0000000000000000,
		Small  = 0x0000000000000001,
		Medium = 0x0000000000000002,
		Large  = 0x0000000000000003,
		MAX    = 0x0000000000000004
	};

	/**
	 * Enum MediaAssets.EMediaSoundChannels
	 */
	enum class EMediaSoundChannels : uint8_t
	{
		Mono     = 0x0000000000000000,
		Stereo   = 0x0000000000000001,
		Surround = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum MediaAssets.MediaTextureOrientation
	 */
	enum class EMediaTextureOrientation : uint8_t
	{
		MTORI_Original = 0x0000000000000000,
		MTORI_CW90     = 0x0000000000000001,
		MTORI_CW180    = 0x0000000000000002,
		MTORI_CW270    = 0x0000000000000003,
		MTORI_MAX      = 0x0000000000000004
	};

	/**
	 * Enum MediaAssets.MediaTextureOutputFormat
	 */
	enum class EMediaTextureOutputFormat : uint8_t
	{
		MTOF_Default     = 0x0000000000000000,
		MTOF_SRGB_LINOUT = 0x0000000000000001,
		MTOF_MAX         = 0x0000000000000002
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaAssets.MediaCaptureDevice
	 * Size -> 0x0028
	 */
	struct FMediaCaptureDevice
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaAssets.MediaSoundComponentSpectralData
	 * Size -> 0x0008
	 */
	struct FMediaSoundComponentSpectralData
	{
	public:
		float                                                      FrequencyHz;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Enum MagicLeapAR.ELuminARLineTraceChannel
	 */
	enum class ELuminARLineTraceChannel : uint8_t
	{
		None                          = 0x0000000000000000,
		FeaturePoint                  = 0x0000000000000001,
		InfinitePlane                 = 0x0000000000000002,
		PlaneUsingExtent              = 0x0000000000000003,
		PlaneUsingBoundaryPolygon     = 0x0000000000000004,
		FeaturePointWithSurfaceNormal = 0x0000000000000005,
		MAX                           = 0x0000000000000006
	};

	/**
	 * Enum MagicLeapAR.ELuminARTrackingState
	 */
	enum class ELuminARTrackingState : uint8_t
	{
		Tracking        = 0x0000000000000000,
		NotTracking     = 0x0000000000000001,
		StoppedTracking = 0x0000000000000002,
		MAX             = 0x0000000000000003
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

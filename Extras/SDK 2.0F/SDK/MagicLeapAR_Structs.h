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
	 * Enum MagicLeapAR.ELuminARLineTraceChannel
	 */
	enum class MagicLeapAR_ELuminARLineTraceChannel : uint8_t
	{
		ELuminARLineTraceChannel__None                          = 0,
		ELuminARLineTraceChannel__FeaturePoint                  = 1,
		ELuminARLineTraceChannel__InfinitePlane                 = 2,
		ELuminARLineTraceChannel__PlaneUsingExtent              = 3,
		ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon     = 4,
		ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal = 5,
		ELuminARLineTraceChannel__ELuminARLineTraceChannel_MAX  = 6
	};

	/**
	 * Enum MagicLeapAR.ELuminARTrackingState
	 */
	enum class MagicLeapAR_ELuminARTrackingState : uint8_t
	{
		ELuminARTrackingState__Tracking                  = 0,
		ELuminARTrackingState__NotTracking               = 1,
		ELuminARTrackingState__StoppedTracking           = 2,
		ELuminARTrackingState__ELuminARTrackingState_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

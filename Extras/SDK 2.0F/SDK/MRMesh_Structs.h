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
	 * Enum MRMesh.EMeshTrackerVertexColorMode
	 */
	enum class MRMesh_EMeshTrackerVertexColorMode : uint8_t
	{
		EMeshTrackerVertexColorMode__None                            = 0,
		EMeshTrackerVertexColorMode__Confidence                      = 1,
		EMeshTrackerVertexColorMode__Block                           = 2,
		EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MRMesh.MRMeshConfiguration
	 * Size -> 0x0001
	 */
	struct FMRMeshConfiguration
	{
	public:
		unsigned char                                              UnknownData_8MJL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

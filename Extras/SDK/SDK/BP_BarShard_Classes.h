﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_BarShard.BP_BarShard_C
	 * Size -> 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
	 */
	class ABP_BarShard_C : public ABP_ParentBar_C
	{
	public:
		class UPointLightComponent*                                PointLight;                                              // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

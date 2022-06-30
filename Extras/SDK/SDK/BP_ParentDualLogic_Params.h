#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ParentDualLogic.BP_ParentDualLogic_C.AddZeros
	 */
	struct ABP_ParentDualLogic_C_AddZeros_Params
	{
	public:
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Output;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDualLogic.BP_ParentDualLogic_C.LogicIn
	 */
	struct ABP_ParentDualLogic_C_LogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentDualLogic.BP_ParentDualLogic_C.ExecuteUbergraph_BP_ParentDualLogic
	 */
	struct ABP_ParentDualLogic_C_ExecuteUbergraph_BP_ParentDualLogic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.FindTotalWeight
	 */
	struct ABP_LogicCompressor_C_FindTotalWeight_Params
	{
	public:
		TArray<class ABP_ParentResource_C*>                        Gems;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      TotalWeight;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.Compress
	 */
	struct ABP_LogicCompressor_C_Compress_Params
	{
	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.OnCompleted_7E5BBC804282B5B42C8D66879116C9B5
	 */
	struct ABP_LogicCompressor_C_OnCompleted_7E5BBC804282B5B42C8D66879116C9B5_Params
	{
	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.LMBDownIsTarget
	 */
	struct ABP_LogicCompressor_C_LMBDownIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Insigator;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.OverrideWaterIn
	 */
	struct ABP_LogicCompressor_C_OverrideWaterIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quality;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Pressure;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.TimerTillEmpty
	 */
	struct ABP_LogicCompressor_C_TimerTillEmpty_Params
	{
	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.BndEvt__StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicCompressor_C_BndEvt__StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.TryCompress
	 */
	struct ABP_LogicCompressor_C_TryCompress_Params
	{
	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.OverrideLogicIn
	 */
	struct ABP_LogicCompressor_C_OverrideLogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicCompressor_C_BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.ActorLoaded
	 */
	struct ABP_LogicCompressor_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_LogicCompressor.BP_LogicCompressor_C.ExecuteUbergraph_BP_LogicCompressor
	 */
	struct ABP_LogicCompressor_C_ExecuteUbergraph_BP_LogicCompressor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_HydroTruck.BP_HydroTruck_C.ReceiveBeginPlay
	 */
	struct ABP_HydroTruck_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HydroTruck_C_BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_HydroTruck_C_BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.CB_StorageDetach
	 */
	struct ABP_HydroTruck_C_CB_StorageDetach_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.ReceiveTick
	 */
	struct ABP_HydroTruck_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.CB_StorageAttach
	 */
	struct ABP_HydroTruck_C_CB_StorageAttach_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.ItemDetachedFromStorage
	 */
	struct ABP_HydroTruck_C_ItemDetachedFromStorage_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.ItemAttachedToStorage
	 */
	struct ABP_HydroTruck_C_ItemAttachedToStorage_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnwedging
	 */
	struct ABP_HydroTruck_C_CB_StartUnwedging_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.CB_StopUnwedging
	 */
	struct ABP_HydroTruck_C_CB_StopUnwedging_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnbeaching
	 */
	struct ABP_HydroTruck_C_CB_StartUnbeaching_Params
	{
	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.EnterVehicle
	 */
	struct ABP_HydroTruck_C_EnterVehicle_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_HydroTruck.BP_HydroTruck_C.ExecuteUbergraph_BP_HydroTruck
	 */
	struct ABP_HydroTruck_C_ExecuteUbergraph_BP_HydroTruck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.DummyHighlight
	 */
	struct ABP_Dummy_HydroGuy_C_DummyHighlight_Params
	{
	public:
		bool                                                       Highlight_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.SetRenderTarget
	 */
	struct ABP_Dummy_HydroGuy_C_SetRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ToggleFrameCapture
	 */
	struct ABP_Dummy_HydroGuy_C_ToggleFrameCapture_Params
	{
	public:
		bool                                                       Capture_Every_Frame;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.UserConstructionScript
	 */
	struct ABP_Dummy_HydroGuy_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ReceiveBeginPlay
	 */
	struct ABP_Dummy_HydroGuy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ReceiveTick
	 */
	struct ABP_Dummy_HydroGuy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ExecuteUbergraph_BP_Dummy_HydroGuy
	 */
	struct ABP_Dummy_HydroGuy_C_ExecuteUbergraph_BP_Dummy_HydroGuy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

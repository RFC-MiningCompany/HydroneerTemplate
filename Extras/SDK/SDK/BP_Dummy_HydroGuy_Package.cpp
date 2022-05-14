/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.DummyHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Dummy_HydroGuy_C::DummyHighlight(bool Highlight_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.DummyHighlight");
		
		struct
		{
			bool                                               Highlight_;
		} params;
		params.Highlight_ = Highlight_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.SetRenderTargetxxx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Dummy_HydroGuy_C::SetRenderTargetxxx(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.SetRenderTargetxxx");
		
		struct
		{
			class UTextureRenderTarget2D*                      RenderTarget;
		} params;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ToggleFrameCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Capture_Every_Frame                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Dummy_HydroGuy_C::ToggleFrameCapture(bool Capture_Every_Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ToggleFrameCapture");
		
		struct
		{
			bool                                               Capture_Every_Frame;
		} params;
		params.Capture_Every_Frame = Capture_Every_Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Dummy_HydroGuy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.UserConstructionScript");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Dummy_HydroGuy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ReceiveBeginPlay");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Dummy_HydroGuy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ExecuteUbergraph_BP_Dummy_HydroGuy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Dummy_HydroGuy_C::ExecuteUbergraph_BP_Dummy_HydroGuy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C.ExecuteUbergraph_BP_Dummy_HydroGuy");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Dummy_HydroGuy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Dummy_HydroGuy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C");
		return ptr;
	}

}



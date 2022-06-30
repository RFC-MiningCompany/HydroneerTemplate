/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.UpdateLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Loading_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicLamp_C::UpdateLight(bool Loading_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.UpdateLight");
		
		struct
		{
			bool                                               Loading_;
		} params;
		params.Loading_ = Loading_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.Timeline_0__FinishedFunc");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.Timeline_0__UpdateFunc");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.Timeline_1__FinishedFunc");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.Timeline_1__UpdateFunc");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicLamp_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.OverrideLogicIn");
		
		struct
		{
			class USceneComponent*                             Component;
		} params;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.OverridePickedup");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.RaiseBrightness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Up_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicLamp_C::RaiseBrightness(bool Up_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.RaiseBrightness");
		
		struct
		{
			bool                                               Up_;
		} params;
		params.Up_ = Up_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.ChangeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicLamp_C::ChangeColor(const struct FVector& A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.ChangeColor");
		
		struct
		{
			struct FVector                                     A;
		} params;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicLamp_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_LogicLamp.BP_LogicLamp_C.ExecuteUbergraph_BP_LogicLamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicLamp_C::ExecuteUbergraph_BP_LogicLamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicLamp.BP_LogicLamp_C.ExecuteUbergraph_BP_LogicLamp");
		
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
	 * 		Name   -> PredefindFunction ABP_LogicLamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicLamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicLamp.BP_LogicLamp_C");
		return ptr;
	}

}



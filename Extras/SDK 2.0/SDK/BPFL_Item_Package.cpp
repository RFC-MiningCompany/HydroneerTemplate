/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> Function BPFL_Item.BPFL_Item_C.SetHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Item_C::SetHighlight(class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Item.BPFL_Item_C.SetHighlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			class AActor*                                      Target;
			class UObject*                                     __WorldContext;
		} params;
		params.Controller = Controller;
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Item.BPFL_Item_C.ForceStopHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Item_C::ForceStopHighlight(class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Item.BPFL_Item_C.ForceStopHighlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			class AActor*                                      Target;
			class UObject*                                     __WorldContext;
		} params;
		params.Controller = Controller;
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Item.BPFL_Item_C.ToggleHighlightSpecific
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StencilValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Item_C::ToggleHighlightSpecific(bool Highlight_, int32_t StencilValue, class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Item.BPFL_Item_C.ToggleHighlightSpecific");
		
		struct
		{
			bool                                               Highlight_;
			int32_t                                            StencilValue;
			class ABP_GameController_C*                        Controller;
			class AActor*                                      Target;
			class UObject*                                     __WorldContext;
		} params;
		params.Highlight_ = Highlight_;
		params.StencilValue = StencilValue;
		params.Controller = Controller;
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Item.BPFL_Item_C.ToggleHighlightPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Item_C::ToggleHighlightPlayer(bool Highlight_, class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Item.BPFL_Item_C.ToggleHighlightPlayer");
		
		struct
		{
			bool                                               Highlight_;
			class ABP_GameController_C*                        Controller;
			class AActor*                                      Target;
			class UObject*                                     __WorldContext;
		} params;
		params.Highlight_ = Highlight_;
		params.Controller = Controller;
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPFL_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Item_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Item.BPFL_Item_C");
		return ptr;
	}

}



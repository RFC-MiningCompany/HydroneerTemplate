/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.CreateAndSetRenderTarget
	 * 		Flags  -> ()
	 */
	void UUI_PlayerThumbnail_C::CreateAndSetRenderTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.CreateAndSetRenderTarget"));
		
		UUI_PlayerThumbnail_C_CreateAndSetRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.SetBarColor
	 * 		Flags  -> ()
	 */
	void UUI_PlayerThumbnail_C::SetBarColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.SetBarColor"));
		
		UUI_PlayerThumbnail_C_SetBarColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerThumbnail_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.PreConstruct"));
		
		UUI_PlayerThumbnail_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PlayerThumbnail_C::BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_PlayerThumbnail_C_BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PlayerThumbnail_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.Construct"));
		
		UUI_PlayerThumbnail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.OnPlayerDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerThumbnail_C::OnPlayerDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.OnPlayerDestroyed"));
		
		UUI_PlayerThumbnail_C_OnPlayerDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerThumbnail_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.Tick"));
		
		UUI_PlayerThumbnail_C_Tick_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PlayerThumbnail_C::BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
		
		UUI_PlayerThumbnail_C_BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PlayerThumbnail_C::BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
		
		UUI_PlayerThumbnail_C_BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.ExecuteUbergraph_UI_PlayerThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerThumbnail_C::ExecuteUbergraph_UI_PlayerThumbnail(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.ExecuteUbergraph_UI_PlayerThumbnail"));
		
		UUI_PlayerThumbnail_C_ExecuteUbergraph_UI_PlayerThumbnail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.OnThumbnailSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerThumbnail_C::OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.OnThumbnailSelected__DelegateSignature"));
		
		UUI_PlayerThumbnail_C_OnThumbnailSelected__DelegateSignature_Params params {};
		params.PlayerController = PlayerController;
		params.SessionID = SessionID;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_PlayerThumbnail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerThumbnail_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_PlayerThumbnail.UI_PlayerThumbnail_C"));
		return ptr;
	}

}



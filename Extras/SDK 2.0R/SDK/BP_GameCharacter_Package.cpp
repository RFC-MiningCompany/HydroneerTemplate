/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Owchie
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::Owchie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Owchie");
		
		ABP_GameCharacter_C_Owchie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.CameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CameraShakes                                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::CameraShake(E_CameraShakes Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.CameraShake");
		
		ABP_GameCharacter_C_CameraShake_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ToggleDropDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        ValidMeshIfTrue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::ToggleDropDecal(class UStaticMeshComponent* ValidMeshIfTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ToggleDropDecal");
		
		ABP_GameCharacter_C_ToggleDropDecal_Params params {};
		params.ValidMeshIfTrue = ValidMeshIfTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.PlaySoundJump
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::PlaySoundJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.PlaySoundJump");
		
		ABP_GameCharacter_C_PlaySoundJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepWood
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FootstepWood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepWood");
		
		ABP_GameCharacter_C_FootstepWood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepDirt
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FootstepDirt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepDirt");
		
		ABP_GameCharacter_C_FootstepDirt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepWater
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FootstepWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepWater");
		
		ABP_GameCharacter_C_FootstepWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::ExplosionTimeLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__FinishedFunc");
		
		ABP_GameCharacter_C_ExplosionTimeLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::ExplosionTimeLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__UpdateFunc");
		
		ABP_GameCharacter_C_ExplosionTimeLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__FinishedFunc");
		
		ABP_GameCharacter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__UpdateFunc");
		
		ABP_GameCharacter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_6");
		
		ABP_GameCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_5");
		
		ABP_GameCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_4");
		
		ABP_GameCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_3");
		
		ABP_GameCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_2");
		
		ABP_GameCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_1");
		
		ABP_GameCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ReceiveBeginPlay");
		
		ABP_GameCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4");
		
		ABP_GameCharacter_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3");
		
		ABP_GameCharacter_C_InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionVignette
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::ExplosionVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionVignette");
		
		ABP_GameCharacter_C_ExplosionVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.NukeVignette
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::NukeVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.NukeVignette");
		
		ABP_GameCharacter_C_NukeVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FlyingHatVertTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FlyingHatVertTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FlyingHatVertTimer");
		
		ABP_GameCharacter_C_FlyingHatVertTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");
		
		ABP_GameCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");
		
		ABP_GameCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ReceivePossessed");
		
		ABP_GameCharacter_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FOVChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::FOVChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FOVChanged");
		
		ABP_GameCharacter_C_FOVChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InvertMouseYChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameCharacter_C::InvertMouseYChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InvertMouseYChanged");
		
		ABP_GameCharacter_C_InvertMouseYChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.HeadbobChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameCharacter_C::HeadbobChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.HeadbobChanged");
		
		ABP_GameCharacter_C_HeadbobChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FlashCollision
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FlashCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FlashCollision");
		
		ABP_GameCharacter_C_FlashCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExecuteUbergraph_BP_GameCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::ExecuteUbergraph_BP_GameCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExecuteUbergraph_BP_GameCharacter");
		
		ABP_GameCharacter_C_ExecuteUbergraph_BP_GameCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_GameCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameCharacter.BP_GameCharacter_C");
		return ptr;
	}

}



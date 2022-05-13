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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.UnattachItems
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::UnattachItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.UnattachItems");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Owchie
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::Owchie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Owchie");
		
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
		
		struct
		{
			E_CameraShakes                                     Selection;
		} params;
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
		
		struct
		{
			class UStaticMeshComponent*                        ValidMeshIfTrue;
		} params;
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepWood
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FootstepWood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepWood");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepDirt
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FootstepDirt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepDirt");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepWater
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FootstepWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepWater");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::ExplosionTimeLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__FinishedFunc");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::ExplosionTimeLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__UpdateFunc");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__FinishedFunc");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__UpdateFunc");
		
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
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
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
		
		struct
		{
			float                                              AxisValue;
		} params;
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
		
		struct
		{
			float                                              AxisValue;
		} params;
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.NukeVignette
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::NukeVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.NukeVignette");
		
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FlyingHatVertTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameCharacter_C::FlyingHatVertTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FlyingHatVertTimer");
		
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
		
		struct
		{
			float                                              AxisValue;
		} params;
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
		
		struct
		{
			float                                              AxisValue;
		} params;
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
		
		struct
		{
			class AController*                                 NewController;
		} params;
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
		
		struct
		{
			float                                              NewValue;
		} params;
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
		
		struct
		{
			bool                                               NewValue;
		} params;
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
		
		struct
		{
			bool                                               NewValue;
		} params;
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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Destroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::Destroy(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Destroy");
		
		struct
		{
			class AActor*                                      DestroyedActor;
		} params;
		params.DestroyedActor = DestroyedActor;
		
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



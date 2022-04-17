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
	 * 		Name   -> Function AC_Animator.AC_Animator_C.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveVector*                                MovementCurve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveVector*                                RotationCurve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Animator_C::PlayAnimation(float Seconds, class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Animator.AC_Animator_C.PlayAnimation"));
		
		UAC_Animator_C_PlayAnimation_Params params {};
		params.Seconds = Seconds;
		params.Mesh = Mesh;
		params.MovementCurve = MovementCurve;
		params.RotationCurve = RotationCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Animator.AC_Animator_C.AnimationTimerEvent
	 * 		Flags  -> ()
	 */
	void UAC_Animator_C::AnimationTimerEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Animator.AC_Animator_C.AnimationTimerEvent"));
		
		UAC_Animator_C_AnimationTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Animator.AC_Animator_C.ExecuteUbergraph_AC_Animator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Animator_C::ExecuteUbergraph_AC_Animator(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Animator.AC_Animator_C.ExecuteUbergraph_AC_Animator"));
		
		UAC_Animator_C_ExecuteUbergraph_AC_Animator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_Animator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Animator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AC_Animator.AC_Animator_C"));
		return ptr;
	}

}



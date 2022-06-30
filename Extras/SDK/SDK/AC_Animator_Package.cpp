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
	 * 		Name   -> Function AC_Animator.AC_Animator_C.SetToAnimationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveVector*                                MovementCurve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveVector*                                RotationCurve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurveTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Animator_C::SetToAnimationTime(class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, float CurveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Animator.AC_Animator_C.SetToAnimationTime");
		
		struct
		{
			class UMeshComponent*                              Mesh;
			class UCurveVector*                                MovementCurve;
			class UCurveVector*                                RotationCurve;
			float                                              CurveTime;
		} params;
		params.Mesh = Mesh;
		params.MovementCurve = MovementCurve;
		params.RotationCurve = RotationCurve;
		params.CurveTime = CurveTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

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
	 * 		bool                                               UseOptimization_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAC_Animator_C::PlayAnimation(float Seconds, class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, bool UseOptimization_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Animator.AC_Animator_C.PlayAnimation");
		
		struct
		{
			float                                              Seconds;
			class UMeshComponent*                              Mesh;
			class UCurveVector*                                MovementCurve;
			class UCurveVector*                                RotationCurve;
			bool                                               UseOptimization_;
		} params;
		params.Seconds = Seconds;
		params.Mesh = Mesh;
		params.MovementCurve = MovementCurve;
		params.RotationCurve = RotationCurve;
		params.UseOptimization_ = UseOptimization_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Animator.AC_Animator_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Animator_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Animator.AC_Animator_C.ReceiveTick");
		
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
	 * 		Name   -> Function AC_Animator.AC_Animator_C.TimerFinish
	 * 		Flags  -> ()
	 */
	void UAC_Animator_C::TimerFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Animator.AC_Animator_C.TimerFinish");
		
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
	 * 		Name   -> Function AC_Animator.AC_Animator_C.ExecuteUbergraph_AC_Animator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Animator_C::ExecuteUbergraph_AC_Animator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Animator.AC_Animator_C.ExecuteUbergraph_AC_Animator");
		
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
	 * 		Name   -> PredefindFunction UAC_Animator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Animator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_Animator.AC_Animator_C");
		return ptr;
	}

}



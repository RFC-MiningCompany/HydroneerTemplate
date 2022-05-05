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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_HydroGuy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.AnimGraph");
		
		struct
		{
			struct FPoseLink                                   AnimGraph;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.IK_FootTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SocketLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IK_Offset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::IK_FootTrace(const struct FVector& SocketLocation, float* IK_Offset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.IK_FootTrace");
		
		struct
		{
			struct FVector                                     SocketLocation;
			float                                              IK_Offset;
		} params;
		params.SocketLocation = SocketLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IK_Offset != nullptr)
			*IK_Offset = params.IK_Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK_Lerp
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::FootIK_Lerp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK_Lerp");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::FootIK()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.ClearPose
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::ClearPose()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.ClearPose");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.UpdatePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               NewPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTwoHanded_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_HydroGuy_C::UpdatePose(class UAnimSequence* NewPose, bool IsTwoHanded_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.UpdatePose");
		
		struct
		{
			class UAnimSequence*                               NewPose;
			bool                                               IsTwoHanded_;
		} params;
		params.NewPose = NewPose;
		params.IsTwoHanded_ = IsTwoHanded_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.MovementCalculations
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::MovementCalculations()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.MovementCalculations");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_C83EE4CB48B17B654A82DD87F3AA3934
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_C83EE4CB48B17B654A82DD87F3AA3934()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_C83EE4CB48B17B654A82DD87F3AA3934");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_31BEBB9245F23CEA006835BA9F515787
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_31BEBB9245F23CEA006835BA9F515787()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_31BEBB9245F23CEA006835BA9F515787");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_61C49A0F4F03EC70808F57A8556B7558
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_61C49A0F4F03EC70808F57A8556B7558()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_61C49A0F4F03EC70808F57A8556B7558");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_605D51E447F04C498E70CB93D57693CA
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_605D51E447F04C498E70CB93D57693CA()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_605D51E447F04C498E70CB93D57693CA");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_E4C8E5A14C2E0A5DD537FD9B8DAA9357
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_E4C8E5A14C2E0A5DD537FD9B8DAA9357()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_E4C8E5A14C2E0A5DD537FD9B8DAA9357");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_610F55F949DC172EFA2847BF74778908
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_610F55F949DC172EFA2847BF74778908()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_610F55F949DC172EFA2847BF74778908");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_97DAC4B2484B344749924D83DD7C759B
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_97DAC4B2484B344749924D83DD7C759B()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_97DAC4B2484B344749924D83DD7C759B");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_13F4050F4CBA3F472A67CA96B6457897
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_13F4050F4CBA3F472A67CA96B6457897()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_13F4050F4CBA3F472A67CA96B6457897");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F95BFDFA41B99632D69D18A1E34FCB16
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F95BFDFA41B99632D69D18A1E34FCB16()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F95BFDFA41B99632D69D18A1E34FCB16");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_26469CA44AAE2CF1EAFD26A6D4BFED2C
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_26469CA44AAE2CF1EAFD26A6D4BFED2C()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_26469CA44AAE2CF1EAFD26A6D4BFED2C");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_BD0DAC0B400B50B35B706CBAA475E451
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_BD0DAC0B400B50B35B706CBAA475E451()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_BD0DAC0B400B50B35B706CBAA475E451");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D1D03F5648361AF142D253BB4936085A
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D1D03F5648361AF142D253BB4936085A()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D1D03F5648361AF142D253BB4936085A");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintUpdateAnimation");
		
		struct
		{
			float                                              DeltaTimeX;
		} params;
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintInitializeAnimation");
		
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
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.ExecuteUbergraph_ABP_HydroGuy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::ExecuteUbergraph_ABP_HydroGuy(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.ExecuteUbergraph_ABP_HydroGuy");
		
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
	 * 		Name   -> PredefindFunction UABP_HydroGuy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_HydroGuy_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HydroGuy.ABP_HydroGuy_C");
		return ptr;
	}

}



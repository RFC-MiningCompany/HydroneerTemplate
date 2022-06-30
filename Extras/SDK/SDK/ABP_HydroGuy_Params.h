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
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.AnimGraph
	 */
	struct UABP_HydroGuy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.IK_FootTrace
	 */
	struct UABP_HydroGuy_C_IK_FootTrace_Params
	{
	public:
		struct FVector                                             SocketLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IK_Offset;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK_Lerp
	 */
	struct UABP_HydroGuy_C_FootIK_Lerp_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK
	 */
	struct UABP_HydroGuy_C_FootIK_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.ClearPose
	 */
	struct UABP_HydroGuy_C_ClearPose_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.UpdatePose
	 */
	struct UABP_HydroGuy_C_UpdatePose_Params
	{
	public:
		class UAnimSequence*                                       NewPose;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTwoHanded_;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.MovementCalculations
	 */
	struct UABP_HydroGuy_C_MovementCalculations_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_C83EE4CB48B17B654A82DD87F3AA3934
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_C83EE4CB48B17B654A82DD87F3AA3934_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_31BEBB9245F23CEA006835BA9F515787
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_31BEBB9245F23CEA006835BA9F515787_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_61C49A0F4F03EC70808F57A8556B7558
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_61C49A0F4F03EC70808F57A8556B7558_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_605D51E447F04C498E70CB93D57693CA
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_605D51E447F04C498E70CB93D57693CA_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_E4C8E5A14C2E0A5DD537FD9B8DAA9357
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_E4C8E5A14C2E0A5DD537FD9B8DAA9357_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_610F55F949DC172EFA2847BF74778908
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_610F55F949DC172EFA2847BF74778908_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_97DAC4B2484B344749924D83DD7C759B
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_97DAC4B2484B344749924D83DD7C759B_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_13F4050F4CBA3F472A67CA96B6457897
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_13F4050F4CBA3F472A67CA96B6457897_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F95BFDFA41B99632D69D18A1E34FCB16
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F95BFDFA41B99632D69D18A1E34FCB16_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_26469CA44AAE2CF1EAFD26A6D4BFED2C
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_26469CA44AAE2CF1EAFD26A6D4BFED2C_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_BD0DAC0B400B50B35B706CBAA475E451
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_BD0DAC0B400B50B35B706CBAA475E451_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D1D03F5648361AF142D253BB4936085A
	 */
	struct UABP_HydroGuy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D1D03F5648361AF142D253BB4936085A_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintUpdateAnimation
	 */
	struct UABP_HydroGuy_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintInitializeAnimation
	 */
	struct UABP_HydroGuy_C_BlueprintInitializeAnimation_Params
	{
	};

	/**
	 * Function ABP_HydroGuy.ABP_HydroGuy_C.ExecuteUbergraph_ABP_HydroGuy
	 */
	struct UABP_HydroGuy_C_ExecuteUbergraph_ABP_HydroGuy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

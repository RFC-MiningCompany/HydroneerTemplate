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
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ABP_HydroGuy.ABP_HydroGuy_C
	 * Size -> 0x517C (FullSize[0x543C] - InheritedSize[0x02C0])
	 */
	class UABP_HydroGuy_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x0320(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x0348(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x03C8(0x00E8)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_4;                  // 0x04B0(0x00D0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x0580(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x05B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x05D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x0600(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x0628(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x0650(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x0678(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x06A0(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_3;                  // 0x06C8(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x0798(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x0818(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x0840(0x0030)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_2;                  // 0x0870(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x0940(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x0968(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x09E8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x0A18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x0A40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x0A68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x0A90(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x0AB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x0B38(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x0B68(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x0BE8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x0C18(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x0C98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x0CC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x0D48(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_11;                           // 0x0D78(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x0E28(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x0E58(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x0E80(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x0EB0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x0F60(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x0F90(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x1040(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x1070(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x1120(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x1278(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x12A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x12C8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x12F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x1370(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x13A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x13C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x13F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x1418(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x1440(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x1528(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x1558(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x1580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x15A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x15D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x15F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x1620(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x1648(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x16C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x16F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x1778(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x17A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x1828(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x1858(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x1908(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1938(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x19B8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x19E8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x1A98(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1AC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1AF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1B18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1B40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1B68(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1B90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x1C10(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1C40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1CC0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x1CF0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x1DA0(0x0030)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x1DD0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x1E98(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x1F80(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x2068(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2098(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x20C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x20E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x2110(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x2138(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2160(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x2188(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x2208(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x2238(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x22B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x22E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2368(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x2398(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x2448(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x2478(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2528(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x2558(0x00B0)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x2608(0x0070)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2678(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x26A0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x26C8(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x27B0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x2878(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2960(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x2990(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2A10(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2A40(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x2AF0(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x2B38(0x0158)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive;                    // 0x2C90(0x00D0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2D60(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x2E00(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x2EC0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2F08(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x2FA8(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x2FD0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x3090(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x30B8(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x3138(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x3290(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x32B8(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x32E0(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x33A8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x33F0(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x3470(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x3538(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x35B8(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x3658(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x3718(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x3740(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x37C0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x3880(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x38A8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x38D0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x3970(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x3998(0x0158)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_4;                               // 0x3AF0(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x3CD0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x3CF0(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x3D10(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x3E68(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3E90(0x00A0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0x3F30(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x4110(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x4218(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x4320(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x4428(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x4530(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x4638(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x4658(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x4760(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x4868(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x4888(0x0028)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x48B0(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x4A90(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x4AB0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x4AD0(0x0108)
		unsigned char                                              UnknownData_AJ3I[0x8];                                   // 0x4BD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x4BE0(0x01E0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x4DC0(0x00C8)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x4E88(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x4F00(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x5058(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x5080(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x50A8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x51B0(0x0108)
		class ACharacter*                                          Character;                                               // 0x52B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x52C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x52CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Forward;                                                 // 0x52D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Right;                                                   // 0x52D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRunAlpha;                                            // 0x52D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunSprintAlpha;                                          // 0x52DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAdditiveAlpha;                                   // 0x52E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x52E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkPlayRate;                                            // 0x52E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunPlayRate;                                             // 0x52EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchPlayRate;                                          // 0x52F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationRate;                                            // 0x52F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnRate;                                                // 0x52F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving_;                                               // 0x52FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isSprinting_;                                            // 0x52FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isCrouched_;                                             // 0x52FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isForward_;                                              // 0x52FF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isRight_;                                                // 0x5300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurningInPlace_;                                       // 0x5301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurningRight_;                                         // 0x5302(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurningLeft_;                                          // 0x5303(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isChangingDirection_;                                    // 0x5304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EMovementMode                                              MovementMode;                                            // 0x5305(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UMD0[0x2];                                   // 0x5306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastRotation;                                            // 0x5308(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastVelocity;                                            // 0x5314(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Pose;                                                    // 0x5320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPose_;                                                // 0x5328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UQC9[0x7];                                   // 0x5329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ClearPoseTimer;                                          // 0x5330(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		E_ItemType                                                 PoseItemType;                                            // 0x5338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTwoHanded_;                                            // 0x5339(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseCartIK_;                                              // 0x533A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YRHL[0x1];                                   // 0x533B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SpineRotation;                                           // 0x533C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            NeckRotation;                                            // 0x5348(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             HandEffectorR;                                           // 0x5354(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HandEffectorL;                                           // 0x5360(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            EffectorRotationR;                                       // 0x536C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            EffectorRotationL;                                       // 0x5378(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_16CK[0x4];                                   // 0x5384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        IK_FootTraceTimer;                                       // 0x5388(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ActorLoc;                                                // 0x5390(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MeshLoc;                                                 // 0x539C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PelvisLoc;                                               // 0x53A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightFootLoc;                                            // 0x53B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftFootLoc;                                             // 0x53C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PelvisIK_Offset;                                         // 0x53CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RightFootIK_;                                            // 0x53D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RK6R[0x3];                                   // 0x53D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FootIK_OffsetR;                                          // 0x53D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootIK_OffsetL;                                          // 0x53D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootEffectorR;                                           // 0x53DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootEffectorL;                                           // 0x53E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PelvisOffset;                                            // 0x53F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootEffectorR_Interp;                                    // 0x5400(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootEffectorL_Interp;                                    // 0x540C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PelvisOffset_Interp;                                     // 0x5418(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LegJointTargetR;                                         // 0x5424(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LegJointTargetL;                                         // 0x5430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void IK_FootTrace(const struct FVector& SocketLocation, float* IK_Offset);
		void FootIK_Lerp();
		void FootIK();
		void ClearPose();
		void UpdatePose(class UAnimSequence* NewPose, bool IsTwoHanded_);
		void MovementCalculations();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_C83EE4CB48B17B654A82DD87F3AA3934();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_31BEBB9245F23CEA006835BA9F515787();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_61C49A0F4F03EC70808F57A8556B7558();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_605D51E447F04C498E70CB93D57693CA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_E4C8E5A14C2E0A5DD537FD9B8DAA9357();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_610F55F949DC172EFA2847BF74778908();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_97DAC4B2484B344749924D83DD7C759B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_13F4050F4CBA3F472A67CA96B6457897();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F95BFDFA41B99632D69D18A1E34FCB16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_26469CA44AAE2CF1EAFD26A6D4BFED2C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_BD0DAC0B400B50B35B706CBAA475E451();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D1D03F5648361AF142D253BB4936085A();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_ABP_HydroGuy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass AC_Animator.AC_Animator_C
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UAC_Animator_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      AnimationTime;                                           // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationMaxTime;                                        // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AnimTimer;                                               // 0x00C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetToAnimationTime(class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, float CurveTime);
		void PlayAnimation(float Seconds, class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, bool UseOptimization_);
		void ReceiveTick(float DeltaSeconds);
		void TimerFinish();
		void ExecuteUbergraph_AC_Animator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

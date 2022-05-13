#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * BlueprintGeneratedClass BP_StandingTorch.BP_StandingTorch_C
	 * Size -> 0x0010 (FullSize[0x03D0] - InheritedSize[0x03C0])
	 */
	class ABP_StandingTorch_C : public ABP_ParentBuildLighting_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Niagara;                                                 // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetProxyCollisionVisibility();
		void ReceiveBeginPlay();
		void OverrideLightOn();
		void OverrideLightOff();
		void ActorLoaded();
		void ExecuteUbergraph_BP_StandingTorch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

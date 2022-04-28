#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * BlueprintGeneratedClass BP_ParentHat.BP_ParentHat_C
	 * Size -> 0x0017 (FullSize[0x0360] - InheritedSize[0x0349])
	 */
	class ABP_ParentHat_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_U05S[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_ParentHat_C*                                     ProxyHat;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateProxyHat();
		void ToggleProxyHat(bool On_);
		void OverrideHatOn(class ABP_GameCharacter_C* Character);
		void OverrideHatOff(class ABP_GameCharacter_C* Character);
		void Equip(bool Equiped_, class ABP_GameCharacter_C* Character);
		void BPI_Unhighlight(class ABP_GameController_C* Controller);
		void BPI_Highlight(class ABP_GameController_C* Controller);
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_ParentHat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

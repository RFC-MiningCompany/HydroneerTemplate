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
	 * BlueprintGeneratedClass AC_Highlight.AC_Highlight_C
	 * Size -> 0x0039 (FullSize[0x00E9] - InheritedSize[0x00B0])
	 */
	class UAC_Highlight_C : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHighlighted;                                           // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhighlighted;                                         // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CanHighlight_;                                           // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B2Z7[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            HighlightArray;                                          // 0x00D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsHighlighted_;                                          // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetHighlight(class ABP_GameController_C* Controller);
		void ToggleHighlightSpecific(int32_t StencilValue, bool Highlight_);
		void ForceStopHighlight(class ABP_GameController_C* Controller);
		void TogglePlayerHighlight(bool Highlight_, class ABP_GameController_C* Controller);
		void OnUnhighlighted__DelegateSignature(class ABP_GameController_C* Controller);
		void OnHighlighted__DelegateSignature(class ABP_GameController_C* Controller);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
	 * Size -> 0x0002 (FullSize[0x0262] - InheritedSize[0x0260])
	 */
	class UVideoSettingsPage_C : public UUserWidget
	{
	public:
		bool                                                       autosave;                                                // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoApply;                                               // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool Get_AutoApplyCheckbox_bIsEnabled_1();
		bool Get_ApplyButton_bIsEnabled_1();
		bool Get_SaveButton_bIsEnabled_1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

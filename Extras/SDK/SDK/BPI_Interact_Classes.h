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
	 * BlueprintGeneratedClass BPI_Interact.BPI_Interact_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Interact_C : public UInterface
	{
	public:
		void BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt_);
		void BPI_Unhighlight(class ABP_GameController_C* Controller);
		void BPI_Highlight(class ABP_GameController_C* Controller);
		void BPI_GetCanHighlight(bool* CanHighlight_);
		void BPI_SetHighlightArray(TArray<int32_t>* HighlightArray, bool* Result);
		void BPI_GetHighlightArray(TArray<int32_t>* HighlightArray);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

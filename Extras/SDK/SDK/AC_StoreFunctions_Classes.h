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
	 * BlueprintGeneratedClass AC_StoreFunctions.AC_StoreFunctions_C
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UAC_StoreFunctions_C : public UActorComponent
	{
	public:
		TArray<class ABP_Coin_C*>                                  Coins;                                                   // 0x00B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void CalcWeight(TArray<class ABP_ParentResource_C*>* Resources, float* Weight);
		void CalcPrice(TArray<class ABP_ParentResource_C*>* Array, int32_t* Total);
		void CalculateCraftedPrice(class ABP_ParentCraftedResource_C* CraftedItem, int32_t* Price);
		void CalculateFishPrice(class ABP_CaughtFish_C* Fish, int32_t* Cost);
		void ReplaceCoinsWithNewValue(int32_t NewValue, const struct FTransform& SpawnLocation);
		void GetTotalCoinValue(int32_t* Price);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

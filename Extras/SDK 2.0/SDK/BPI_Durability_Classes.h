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
	 * BlueprintGeneratedClass BPI_Durability.BPI_Durability_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Durability_C : public UInterface
	{
	public:
		void ReturnDurability(float DurabilityAmount);
		void FindDurability(class ABP_ParentItem_C* Item);
		void DoneRepair();
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

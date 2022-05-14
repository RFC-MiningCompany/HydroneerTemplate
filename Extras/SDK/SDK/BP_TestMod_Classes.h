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
	 * BlueprintGeneratedClass BP_TestMod.BP_TestMod_C
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class ABP_TestMod_C : public ABP_WorkshopMod_C
	{
	public:
		void OnModStartup(struct FS_ModLoaderConfig* Loader_Config);
		void RegisterItems(TArray<struct FS_Item>* Items);
		void RegisterStoreItems(TArray<struct FS_StoreItem>* Items);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

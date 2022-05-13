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
	 * BlueprintGeneratedClass BPL_HML.BPL_HML_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPL_HML_C : public UBlueprintFunctionLibrary
	{
	public:
		void RegisterMod(class UObject* __WorldContext);
		void Set_Loader_Config(const struct FS_ModLoaderConfig& Mod_Loader_Config, class UObject* __WorldContext);
		void GetLoaderConfig(class UObject* __WorldContext, struct FS_ModLoaderConfig* ModLoaderConfig);
		void GetLoadedMods(class UObject* __WorldContext, TArray<struct FS_Mod>* LoadedMods);
		void GeModsItems(class UObject* __WorldContext, TArray<struct FS_Item>* Items);
		void GetModsStoreItems(class UObject* __WorldContext, TArray<struct FS_StoreItem>* Items);
		void WriteLog(const class FString& LineLog, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

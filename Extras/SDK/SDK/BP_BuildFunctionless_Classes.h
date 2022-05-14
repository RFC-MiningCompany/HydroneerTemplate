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
	 * BlueprintGeneratedClass BP_BuildFunctionless.BP_BuildFunctionless_C
	 * Size -> 0x0009 (FullSize[0x0391] - InheritedSize[0x0388])
	 */
	class ABP_BuildFunctionless_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		E_Functionless                                             ItemName;                                                // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void CreateProxyItem();
		void InitFunctionless();
		void UserConstructionScript();
		void ActorLoaded();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_BuildFunctionless(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_MasterworkDesign.BP_MasterworkDesign_C
	 * Size -> 0x003F (FullSize[0x0388] - InheritedSize[0x0349])
	 */
	class ABP_MasterworkDesign_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_UT8E[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextRenderComponent*                                TextRender1;                                             // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                DesignName;                                              // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              Craftable_Class;                                         // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_ResourceEnumAndWeight>                    Requirements;                                            // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void InitDesign();
		void UserConstructionScript();
		void ActorLoaded();
		void ExecuteUbergraph_BP_MasterworkDesign(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

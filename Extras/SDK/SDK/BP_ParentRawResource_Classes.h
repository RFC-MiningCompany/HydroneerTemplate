#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_ParentRawResource.BP_ParentRawResource_C
	 * Size -> 0x000F (FullSize[0x0388] - InheritedSize[0x0379])
	 */
	class ABP_ParentRawResource_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_INXB[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void SetDoNotClear(bool DoNotClear);
		void ToggleSaveRawResourcesChanged(bool NewValue);
		void OverrideLoaded();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ParentRawResource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_ParentRawResource.BP_ParentRawResource_C
	 * Size -> 0x000F (FullSize[0x0368] - InheritedSize[0x0359])
	 */
	class ABP_ParentRawResource_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_VDKN[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void ReceiveBeginPlay();
		void ToggleSaveRawResourcesChanged(bool NewValue);
		void ExecuteUbergraph_BP_ParentRawResource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BPFL_Customization.BPFL_Customization_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Customization_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetRelevantCustomizationOptions(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, TArray<class UPData_Head_C*>* Heads, TArray<class UPData_Hair_C*>* Hair, TArray<class UPData_Beard_C*>* Beards, TArray<class UPData_ClothingSet_C*>* ClothingSets);
		void GetCustomizationOptions(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, struct FS_Character_Customization* Options);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

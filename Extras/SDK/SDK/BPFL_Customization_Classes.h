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
	 * BlueprintGeneratedClass BPFL_Customization.BPFL_Customization_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Customization_C : public UBlueprintFunctionLibrary
	{
	public:
		void RandomStyle(class UObject* __WorldContext, struct FS_CharacterStyle* Style);
		void RandomSkinColor(class UObject* __WorldContext, class FName* SkinColor);
		void RandomHairColor(class UObject* __WorldContext, class FName* HairColor);
		void RandomBeardMesh(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, int32_t* BeardIndex);
		void RandomHairMesh(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, int32_t* HairIndex);
		void GetCurrentHead(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, class UPData_Head_C** HeadData);
		void RandomClothingColor(class UObject* __WorldContext, class FName* ClothingColor);
		void RandomClothingMesh(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, int32_t* ClothingIndex);
		void GetRelevantCustomizationOptions(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, TArray<class UPData_Head_C*>* Heads, TArray<class UPData_Hair_C*>* Hair, TArray<class UPData_Beard_C*>* Beards, TArray<class UPData_ClothingSet_C*>* ClothingSets);
		void GetCustomizationOptions(const struct FS_CharacterStyle& Style, class UObject* __WorldContext, struct FS_Character_Customization* Options);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

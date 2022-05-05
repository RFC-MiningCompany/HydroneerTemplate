/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariantSet* ULevelVariantSets::GetVariantSetByName(const class FString& VariantSetName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");
		
		struct
		{
			class FString                                      VariantSetName;
		} params;
		params.VariantSetName = VariantSetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariantSet* ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");
		
		struct
		{
			int32_t                                            VariantSetIndex;
		} params;
		params.VariantSetIndex = VariantSetIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	 * 		Flags  -> ()
	 */
	int32_t ULevelVariantSets::GetNumVariantSets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelVariantSets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelVariantSets::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALevelVariantSetsActor::SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");
		
		struct
		{
			class FString                                      VariantSetName;
			class FString                                      VariantName;
		} params;
		params.VariantSetName = VariantSetName;
		params.VariantName = VariantName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");
		
		struct
		{
			int32_t                                            VariantSetIndex;
			int32_t                                            VariantIndex;
		} params;
		params.VariantSetIndex = VariantSetIndex;
		params.VariantIndex = VariantIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelVariantSets*                           InVariantSets                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");
		
		struct
		{
			class ULevelVariantSets*                           InVariantSets;
		} params;
		params.InVariantSets = InVariantSets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLoad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");
		
		struct
		{
			bool                                               bLoad;
		} params;
		params.bLoad = bLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALevelVariantSetsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelVariantSetsActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelVariantSetsFunctionDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelVariantSetsFunctionDirector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.PropertyValue.HasRecordedData
	 * 		Flags  -> ()
	 */
	bool UPropertyValue::HasRecordedData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	 * 		Flags  -> ()
	 */
	class FText UPropertyValue::GetPropertyTooltip()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.PropertyValue.GetFullDisplayString
	 * 		Flags  -> ()
	 */
	class FString UPropertyValue::GetFullDisplayString()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValue::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueTransform::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueVisibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueVisibility::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueColor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueMaterial::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueOption::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueSoftObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueSoftObject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueSoftObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.SwitchActor.SelectOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OptionIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASwitchActor::SelectOption(int32_t OptionIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");
		
		struct
		{
			int32_t                                            OptionIndex;
		} params;
		params.OptionIndex = OptionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.SwitchActor.GetSelectedOption
	 * 		Flags  -> ()
	 */
	int32_t ASwitchActor::GetSelectedOption()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.SwitchActor.GetOptions
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ASwitchActor::GetOptions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASwitchActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASwitchActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SwitchOn
	 * 		Flags  -> ()
	 */
	void UVariant::SwitchOn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  NewThumbnail                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromTexture");
		
		struct
		{
			class UTexture2D*                                  NewThumbnail;
		} params;
		params.NewThumbnail = NewThumbnail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetThumbnailFromFile(const class FString& FilePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromFile");
		
		struct
		{
			class FString                                      FilePath;
		} params;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	 * 		Flags  -> ()
	 */
	void UVariant::SetThumbnailFromEditorViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CameraTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              FOVDegrees                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinZ                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromCamera");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FTransform                                  CameraTransform;
			float                                              FOVDegrees;
			float                                              MinZ;
			float                                              Gamma;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CameraTransform = CameraTransform;
		params.FOVDegrees = FOVDegrees;
		params.MinZ = MinZ;
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SetDisplayText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetDisplayText(const class FText& NewDisplayText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");
		
		struct
		{
			class FText                                        NewDisplayText;
		} params;
		params.NewDisplayText = NewDisplayText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.SetDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVariantDependency                          Dependency                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetDependency(int32_t Index, struct FVariantDependency* Dependency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDependency");
		
		struct
		{
			int32_t                                            Index;
			struct FVariantDependency                          Dependency;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dependency != nullptr)
			*Dependency = params.Dependency;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.IsActive
	 * 		Flags  -> ()
	 */
	bool UVariant::IsActive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.IsActive");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetThumbnail
	 * 		Flags  -> ()
	 */
	class UTexture2D* UVariant::GetThumbnail()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetThumbnail");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetParent
	 * 		Flags  -> ()
	 */
	class UVariantSet* UVariant::GetParent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetParent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetNumDependencies
	 * 		Flags  -> ()
	 */
	int32_t UVariant::GetNumDependencies()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumDependencies");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetNumActors
	 * 		Flags  -> ()
	 */
	int32_t UVariant::GetNumActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetDisplayText
	 * 		Flags  -> ()
	 */
	class FText UVariant::GetDisplayText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetDependents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelVariantSets*                           LevelVariantSets                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyEnabledDependencies                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UVariant*> UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDependents");
		
		struct
		{
			class ULevelVariantSets*                           LevelVariantSets;
			bool                                               bOnlyEnabledDependencies;
		} params;
		params.LevelVariantSets = LevelVariantSets;
		params.bOnlyEnabledDependencies = bOnlyEnabledDependencies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVariantDependency UVariant::GetDependency(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDependency");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.GetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVariant::GetActor(int32_t ActorIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");
		
		struct
		{
			int32_t                                            ActorIndex;
		} params;
		params.ActorIndex = ActorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.DeleteDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::DeleteDependency(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.DeleteDependency");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.Variant.AddDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVariantDependency                          Dependency                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	int32_t UVariant::AddDependency(struct FVariantDependency* Dependency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.AddDependency");
		
		struct
		{
			struct FVariantDependency                          Dependency;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dependency != nullptr)
			*Dependency = params.Dependency;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariant::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariantObjectBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariantObjectBinding::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  NewThumbnail                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromTexture");
		
		struct
		{
			class UTexture2D*                                  NewThumbnail;
		} params;
		params.NewThumbnail = NewThumbnail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetThumbnailFromFile(const class FString& FilePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromFile");
		
		struct
		{
			class FString                                      FilePath;
		} params;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	 * 		Flags  -> ()
	 */
	void UVariantSet::SetThumbnailFromEditorViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CameraTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              FOVDegrees                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinZ                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromCamera");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FTransform                                  CameraTransform;
			float                                              FOVDegrees;
			float                                              MinZ;
			float                                              Gamma;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CameraTransform = CameraTransform;
		params.FOVDegrees = FOVDegrees;
		params.MinZ = MinZ;
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetDisplayText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetDisplayText(const class FText& NewDisplayText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");
		
		struct
		{
			class FText                                        NewDisplayText;
		} params;
		params.NewDisplayText = NewDisplayText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetVariantByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariant* UVariantSet::GetVariantByName(const class FString& VariantName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");
		
		struct
		{
			class FString                                      VariantName;
		} params;
		params.VariantName = VariantName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariant* UVariantSet::GetVariant(int32_t VariantIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");
		
		struct
		{
			int32_t                                            VariantIndex;
		} params;
		params.VariantIndex = VariantIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetThumbnail
	 * 		Flags  -> ()
	 */
	class UTexture2D* UVariantSet::GetThumbnail()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetThumbnail");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetParent
	 * 		Flags  -> ()
	 */
	class ULevelVariantSets* UVariantSet::GetParent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetParent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetNumVariants
	 * 		Flags  -> ()
	 */
	int32_t UVariantSet::GetNumVariants()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetDisplayText
	 * 		Flags  -> ()
	 */
	class FText UVariantSet::GetDisplayText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariantSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariantSet::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}

}



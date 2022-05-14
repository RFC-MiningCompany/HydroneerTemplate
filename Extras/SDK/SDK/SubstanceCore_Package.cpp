/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputString(const class FString& Identifier, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputString");
		
		struct
		{
			class FString                                      Identifier;
			class FString                                      Value;
		} params;
		params.Identifier = Identifier;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InputValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputInt(const class FString& Identifier, TArray<int32_t> InputValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputInt");
		
		struct
		{
			class FString                                      Identifier;
			TArray<int32_t>                                    InputValues;
		} params;
		params.Identifier = Identifier;
		params.InputValues = InputValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputImg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubstanceGraphInstance::SetInputImg(const class FString& InputName, class UObject* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputImg");
		
		struct
		{
			class FString                                      InputName;
			class UObject*                                     Value;
		} params;
		params.InputName = InputName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      InputValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputFloat(const class FString& Identifier, TArray<float> InputValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputFloat");
		
		struct
		{
			class FString                                      Identifier;
			TArray<float>                                      InputValues;
		} params;
		params.Identifier = Identifier;
		params.InputValues = InputValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputColor(const class FString& Identifier, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputColor");
		
		struct
		{
			class FString                                      Identifier;
			struct FLinearColor                                Color;
		} params;
		params.Identifier = Identifier;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               _bool_                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputBool(const class FString& Identifier, bool _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputBool");
		
		struct
		{
			class FString                                      Identifier;
			bool                                               _bool_;
		} params;
		params.Identifier = Identifier;
		params._bool_ = _bool_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
	 * 		Flags  -> ()
	 */
	struct FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc");
		
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
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESubstanceInputType USubstanceGraphInstance::GetInputType(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputType");
		
		struct
		{
			class FString                                      InputName;
		} params;
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USubstanceGraphInstance::GetInputString(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputString");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputNames
	 * 		Flags  -> ()
	 */
	TArray<class FString> USubstanceGraphInstance::GetInputNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputNames");
		
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
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> USubstanceGraphInstance::GetInputInt(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputInt");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> USubstanceGraphInstance::GetInputFloat(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputFloat");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USubstanceGraphInstance::GetInputColor(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputColor");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubstanceGraphInstance::GetInputBool(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputBool");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc");
		
		struct
		{
			class FString                                      Identifier;
		} params;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterial*                                   InParentMaterial                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* USubstanceGraphInstance::GetDynamicMaterialInstance(const class FName& Name, class UMaterial* InParentMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance");
		
		struct
		{
			class FName                                        Name;
			class UMaterial*                                   InParentMaterial;
		} params;
		params.Name = Name;
		params.InParentMaterial = InParentMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceGraphInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceGraphInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceGraphInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceInstanceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceInstanceFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceInstanceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceOutputData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceOutputData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceOutputData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceTexture2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceTexture2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceTexture2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.SyncRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     InstancesToRender                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::SyncRendering(class USubstanceGraphInstance* InstancesToRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SyncRendering");
		
		struct
		{
			class USubstanceGraphInstance*                     InstancesToRender;
		} params;
		params.InstancesToRender = InstancesToRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt");
		
		struct
		{
			class USubstanceGraphInstance*                     GraphInstance;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.GraphInstance = GraphInstance;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESubstanceTextureSize                              Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESubstanceTextureSize                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, ESubstanceTextureSize Width, ESubstanceTextureSize Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize");
		
		struct
		{
			class USubstanceGraphInstance*                     GraphInstance;
			ESubstanceTextureSize                              Width;
			ESubstanceTextureSize                              Height;
		} params;
		params.GraphInstance = GraphInstance;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.ResetInputParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::ResetInputParameters(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.ResetInputParameters");
		
		struct
		{
			class USubstanceGraphInstance*                     GraphInstance;
		} params;
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UTexture2D*> USubstanceUtility::GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstanceTextures");
		
		struct
		{
			class USubstanceGraphInstance*                     GraphInstance;
		} params;
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetSubstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class USubstanceGraphInstance*> USubstanceUtility::GetSubstances(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstances");
		
		struct
		{
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
	 * 		Flags  -> ()
	 */
	float USubstanceUtility::GetSubstanceLoadingProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress");
		
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
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetGraphName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USubstanceUtility::GetGraphName(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetGraphName");
		
		struct
		{
			class USubstanceGraphInstance*                     GraphInstance;
		} params;
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetFactoryName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USubstanceUtility::GetFactoryName(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetFactoryName");
		
		struct
		{
			class USubstanceGraphInstance*                     GraphInstance;
		} params;
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutputIndices                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USubstanceGraphInstance*                     GraphInstance;
			TArray<int32_t>                                    OutputIndices;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.GraphInstance = GraphInstance;
		params.OutputIndices = OutputIndices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USubstanceGraphInstance* USubstanceUtility::DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USubstanceGraphInstance*                     GraphInstance;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutputIndices                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USubstanceGraphInstance*                     GraphInstance;
			TArray<int32_t>                                    OutputIndices;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.GraphInstance = GraphInstance;
		params.OutputIndices = OutputIndices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.CreateGraphInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceInstanceFactory*                   Factory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GraphDescIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterial*                                   ParentMaterial                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstanceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USubstanceGraphInstance* USubstanceUtility::CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, class UMaterial* ParentMaterial, const class FString& InstanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CreateGraphInstance");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USubstanceInstanceFactory*                   Factory;
			int32_t                                            GraphDescIndex;
			class UMaterial*                                   ParentMaterial;
			class FString                                      InstanceName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Factory = Factory;
		params.GraphDescIndex = GraphDescIndex;
		params.ParentMaterial = ParentMaterial;
		params.InstanceName = InstanceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceInstanceFactory*                   OutputFactory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutputFactoryGraphIndex                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceInstanceFactory*                   InputFactory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputFactoryGraphIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSubstanceConnection>                Connections                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USubstanceInstanceFactory* USubstanceUtility::CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory");
		
		struct
		{
			class USubstanceInstanceFactory*                   OutputFactory;
			int32_t                                            OutputFactoryGraphIndex;
			class USubstanceInstanceFactory*                   InputFactory;
			int32_t                                            InputFactoryGraphIndex;
			TArray<struct FSubstanceConnection>                Connections;
		} params;
		params.OutputFactory = OutputFactory;
		params.OutputFactoryGraphIndex = OutputFactoryGraphIndex;
		params.InputFactory = InputFactory;
		params.InputFactoryGraphIndex = InputFactoryGraphIndex;
		params.Connections = Connections;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.CopyInputParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     SourceGraphInstance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     DestGraphInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CopyInputParameters");
		
		struct
		{
			class USubstanceGraphInstance*                     SourceGraphInstance;
			class USubstanceGraphInstance*                     DestGraphInstance;
		} params;
		params.SourceGraphInstance = SourceGraphInstance;
		params.DestGraphInstance = DestGraphInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.ClearCache
	 * 		Flags  -> ()
	 */
	void USubstanceUtility::ClearCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.ClearCache");
		
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
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.AsyncRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     InstancesToRender                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::AsyncRendering(class USubstanceGraphInstance* InstancesToRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.AsyncRendering");
		
		struct
		{
			class USubstanceGraphInstance*                     InstancesToRender;
		} params;
		params.InstancesToRender = InstancesToRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceUtility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceUtility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceUtility");
		return ptr;
	}

}



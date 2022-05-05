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
	 * 		Name   -> PredefindFunction AFieldSystemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFieldSystemActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	 * 		Flags  -> ()
	 */
	void UFieldSystemComponent::ResetFieldSystem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");
		
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
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");
		
		struct
		{
			bool                                               Enabled;
			struct FVector                                     Position;
			struct FVector                                     Direction;
			float                                              Radius;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Direction = Direction;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32_t Iterations)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");
		
		struct
		{
			bool                                               Enabled;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Magnitude;
			int32_t                                            Iterations;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		params.Iterations = Iterations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");
		
		struct
		{
			bool                                               Enabled;
			struct FVector                                     Position;
			float                                              Radius;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");
		
		struct
		{
			bool                                               Enabled;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");
		
		struct
		{
			bool                                               Enabled;
			struct FVector                                     Position;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");
		
		struct
		{
			bool                                               Enabled;
			EFieldPhysicsType                                  Target;
			class UFieldSystemMetaData*                        MetaData;
			class UFieldNodeBase*                              Field;
		} params;
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");
		
		struct
		{
			bool                                               Enabled;
			struct FVector                                     Direction;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Direction = Direction;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::AddFieldCommand(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");
		
		struct
		{
			bool                                               Enabled;
			EFieldPhysicsType                                  Target;
			class UFieldSystemMetaData*                        MetaData;
			class UFieldNodeBase*                              Field;
		} params;
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldSystemMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemMetaData::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");
		
		struct
		{
			int32_t                                            Iterations;
		} params;
		params.Iterations = Iterations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldSystemMetaDataIteration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemMetaDataIteration::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFieldResolutionType                               ResolutionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");
		
		struct
		{
			EFieldResolutionType                               ResolutionType;
		} params;
		params.ResolutionType = ResolutionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldSystemMetaDataProcessingResolution.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemMetaDataProcessingResolution::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldNodeInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeInt::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldNodeFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeFloat::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFieldNodeVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeVector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.UniformInteger.SetUniformInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformInteger* UUniformInteger::SetUniformInteger(int32_t Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");
		
		struct
		{
			int32_t                                            Magnitude;
		} params;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUniformInteger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformInteger::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ExteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetMaskConditionType                              SetMaskConditionIn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");
		
		struct
		{
			float                                              Radius;
			struct FVector                                     Position;
			int32_t                                            InteriorValue;
			int32_t                                            ExteriorValue;
			ESetMaskConditionType                              SetMaskConditionIn;
		} params;
		params.Radius = Radius;
		params.Position = Position;
		params.InteriorValue = InteriorValue;
		params.ExteriorValue = ExteriorValue;
		params.SetMaskConditionIn = SetMaskConditionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URadialIntMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialIntMask::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.UniformScalar.SetUniformScalar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");
		
		struct
		{
			float                                              Magnitude;
		} params;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUniformScalar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformScalar::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");
		
		struct
		{
			float                                              Magnitude;
			float                                              MinRange;
			float                                              MaxRange;
			float                                              Default;
			float                                              Radius;
			struct FVector                                     Position;
			EFieldFalloffType                                  Falloff;
		} params;
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Radius = Radius;
		params.Position = Position;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URadialFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialFalloff::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");
		
		struct
		{
			float                                              Magnitude;
			float                                              MinRange;
			float                                              MaxRange;
			float                                              Default;
			float                                              Distance;
			struct FVector                                     Position;
			struct FVector                                     Normal;
			EFieldFalloffType                                  Falloff;
		} params;
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Distance = Distance;
		params.Position = Position;
		params.Normal = Normal;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlaneFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneFalloff::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");
		
		struct
		{
			float                                              Magnitude;
			float                                              MinRange;
			float                                              MaxRange;
			float                                              Default;
			struct FTransform                                  Transform;
			EFieldFalloffType                                  Falloff;
		} params;
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Transform = Transform;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoxFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxFalloff::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.NoiseField.SetNoiseField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");
		
		struct
		{
			float                                              MinRange;
			float                                              MaxRange;
			struct FTransform                                  Transform;
		} params;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNoiseField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoiseField::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.UniformVector.SetUniformVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");
		
		struct
		{
			float                                              Magnitude;
			struct FVector                                     Direction;
		} params;
		params.Magnitude = Magnitude;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUniformVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformVector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RadialVector.SetRadialVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");
		
		struct
		{
			float                                              Magnitude;
			struct FVector                                     Position;
		} params;
		params.Magnitude = Magnitude;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URadialVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialVector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RandomVector.SetRandomVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URandomVector* URandomVector::SetRandomVector(float Magnitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");
		
		struct
		{
			float                                              Magnitude;
		} params;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URandomVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomVector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.OperatorField.SetOperatorField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              RightField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              LeftField                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldOperationType                                Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, EFieldOperationType Operation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");
		
		struct
		{
			float                                              Magnitude;
			class UFieldNodeBase*                              RightField;
			class UFieldNodeBase*                              LeftField;
			EFieldOperationType                                Operation;
		} params;
		params.Magnitude = Magnitude;
		params.RightField = RightField;
		params.LeftField = LeftField;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOperatorField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOperatorField::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.ToIntegerField.SetToIntegerField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFieldNodeFloat*                             FloatField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");
		
		struct
		{
			class UFieldNodeFloat*                             FloatField;
		} params;
		params.FloatField = FloatField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToIntegerField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToIntegerField::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.ToFloatField.SetToFloatField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFieldNodeInt*                               IntegerField                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");
		
		struct
		{
			class UFieldNodeInt*                               IntegerField;
		} params;
		params.IntegerField = IntegerField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToFloatField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToFloatField::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.CullingField.SetCullingField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFieldNodeBase*                              Culling                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldCullingOperationType                         Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, EFieldCullingOperationType Operation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");
		
		struct
		{
			class UFieldNodeBase*                              Culling;
			class UFieldNodeBase*                              Field;
			EFieldCullingOperationType                         Operation;
		} params;
		params.Culling = Culling;
		params.Field = Field;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCullingField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCullingField::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	 * 		Flags  -> ()
	 */
	class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");
		
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
	 * 		Name   -> PredefindFunction UReturnResultsTerminal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReturnResultsTerminal::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}

}



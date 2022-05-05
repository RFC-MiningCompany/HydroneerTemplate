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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_Character_HydroGuy_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetSpineRotationIncrement
	 * 		Flags  -> ()
	 */
	float ABP_Character_HydroGuy_C::GetSpineRotationIncrement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetSpineRotationIncrement");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.CalculateCartPivotRotation
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::CalculateCartPivotRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.CalculateCartPivotRotation");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ToggleFree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isFree_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_HydroGuy_C::ToggleFree(bool isFree_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ToggleFree");
		
		struct
		{
			bool                                               isFree_;
		} params;
		params.isFree_ = isFree_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.IsProxyTwoHanded?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_HydroGuy_C::IsProxyTwoHanded_(const class FName& Socket, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.IsProxyTwoHanded?");
		
		struct
		{
			class FName                                        Socket;
			bool                                               Result;
		} params;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.PlayMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::PlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.PlayMontage");
		
		struct
		{
			class UAnimMontage*                                AnimMontage;
		} params;
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetClothingColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorParameter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class FName                                        Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::GetClothingColor(const class FName& ColorParameter, class FName* Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetClothingColor");
		
		struct
		{
			class FName                                        ColorParameter;
			class FName                                        Color;
		} params;
		params.ColorParameter = ColorParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomHairColor
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomHairColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomHairColor");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomSkinColor
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomSkinColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomSkinColor");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomBeardMesh
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomBeardMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomBeardMesh");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomHairMesh
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomHairMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomHairMesh");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomPantsColor
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomPantsColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomPantsColor");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomShirtColor
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomShirtColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomShirtColor");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomPantsMesh
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomPantsMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomPantsMesh");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomShirtMesh
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomShirtMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomShirtMesh");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateProxyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            ProxyItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Attach_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_HydroGuy_C::UpdateProxyItem(class ABP_ParentItem_C* ProxyItem, bool Attach_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateProxyItem");
		
		struct
		{
			class ABP_ParentItem_C*                            ProxyItem;
			bool                                               Attach_;
		} params;
		params.ProxyItem = ProxyItem;
		params.Attach_ = Attach_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHairColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Hair_Color_ID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateHairColor(const class FName& Hair_Color_ID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHairColor");
		
		struct
		{
			class FName                                        Hair_Color_ID;
		} params;
		params.Hair_Color_ID = Hair_Color_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateBeardMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BeardIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateBeardMesh(int32_t BeardIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateBeardMesh");
		
		struct
		{
			int32_t                                            BeardIndex;
		} params;
		params.BeardIndex = BeardIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetCurrentHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPData_Head_C*                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::GetCurrentHead(class UPData_Head_C** Output)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetCurrentHead");
		
		struct
		{
			class UPData_Head_C*                               Output;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.CreateDynamicDefaultMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::CreateDynamicDefaultMaterial(class USkeletalMeshComponent* Mesh, int32_t MaterialSlot, class UMaterialInstanceDynamic** DynamicMaterial)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.CreateDynamicDefaultMaterial");
		
		struct
		{
			class USkeletalMeshComponent*                      Mesh;
			int32_t                                            MaterialSlot;
			class UMaterialInstanceDynamic*                    DynamicMaterial;
		} params;
		params.Mesh = Mesh;
		params.MaterialSlot = MaterialSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterial != nullptr)
			*DynamicMaterial = params.DynamicMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetMeshDefaultMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::GetMeshDefaultMaterial(class USkinnedMeshComponent* MeshComponent, int32_t MaterialSlot, class UMaterialInterface** Material)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetMeshDefaultMaterial");
		
		struct
		{
			class USkinnedMeshComponent*                       MeshComponent;
			int32_t                                            MaterialSlot;
			class UMaterialInterface*                          Material;
		} params;
		params.MeshComponent = MeshComponent;
		params.MaterialSlot = MaterialSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomStyle
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RandomStyle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomStyle");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHairMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HairIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateHairMesh(int32_t HairIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHairMesh");
		
		struct
		{
			int32_t                                            HairIndex;
		} params;
		params.HairIndex = HairIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RefreshClothingColor
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::RefreshClothingColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RefreshClothingColor");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingPantsColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Clothing_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateClothingPantsColor(const class FName& Clothing_Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingPantsColor");
		
		struct
		{
			class FName                                        Clothing_Color;
		} params;
		params.Clothing_Color = Clothing_Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ToggleHideMeshParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<E_MeshParts>                                MeshParts                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Hide_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_HydroGuy_C::ToggleHideMeshParts(TArray<E_MeshParts>* MeshParts, bool Hide_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ToggleHideMeshParts");
		
		struct
		{
			TArray<E_MeshParts>                                MeshParts;
			bool                                               Hide_;
		} params;
		params.Hide_ = Hide_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshParts != nullptr)
			*MeshParts = params.MeshParts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingShirtColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Clothing_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateClothingShirtColor(const class FName& Clothing_Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingShirtColor");
		
		struct
		{
			class FName                                        Clothing_Color;
		} params;
		params.Clothing_Color = Clothing_Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorParameter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateClothingColor(const class FName& ColorParameter, const class FName& Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingColor");
		
		struct
		{
			class FName                                        ColorParameter;
			class FName                                        Color;
		} params;
		params.ColorParameter = ColorParameter;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingPantsMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PantsIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateClothingPantsMesh(int32_t PantsIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingPantsMesh");
		
		struct
		{
			int32_t                                            PantsIndex;
		} params;
		params.PantsIndex = PantsIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingShirtMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Shirt_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateClothingShirtMesh(int32_t Shirt_Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingShirtMesh");
		
		struct
		{
			int32_t                                            Shirt_Index;
		} params;
		params.Shirt_Index = Shirt_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ClearClothingMeshes
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::ClearClothingMeshes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ClearClothingMeshes");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshClothing                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ClothingSlots                                    Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClothingIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<E_MeshParts>                                UnhideMeshParts                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<E_MeshParts>                                HideMeshParts                                              (Parm, OutParm)
	 */
	void ABP_Character_HydroGuy_C::UpdateClothingMesh(class USkeletalMeshComponent* MeshClothing, E_ClothingSlots Slot, int32_t ClothingIndex, TArray<E_MeshParts>* UnhideMeshParts, TArray<E_MeshParts>* HideMeshParts)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingMesh");
		
		struct
		{
			class USkeletalMeshComponent*                      MeshClothing;
			E_ClothingSlots                                    Slot;
			int32_t                                            ClothingIndex;
			TArray<E_MeshParts>                                UnhideMeshParts;
			TArray<E_MeshParts>                                HideMeshParts;
		} params;
		params.MeshClothing = MeshClothing;
		params.Slot = Slot;
		params.ClothingIndex = ClothingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnhideMeshParts != nullptr)
			*UnhideMeshParts = params.UnhideMeshParts;
		if (HideMeshParts != nullptr)
			*HideMeshParts = params.HideMeshParts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateSkinColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SkinColorID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateSkinColor(const class FName& SkinColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateSkinColor");
		
		struct
		{
			class FName                                        SkinColorID;
		} params;
		params.SkinColorID = SkinColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHeadMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HeadIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateHeadMesh(int32_t HeadIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHeadMesh");
		
		struct
		{
			int32_t                                            HeadIndex;
		} params;
		params.HeadIndex = HeadIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.OnConstruct
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::OnConstruct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.OnConstruct");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateBodyMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BodyID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::UpdateBodyMesh(const class FName& BodyID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateBodyMesh");
		
		struct
		{
			class FName                                        BodyID;
		} params;
		params.BodyID = BodyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitClothing
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::InitClothing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitClothing");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitBody
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::InitBody()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitBody");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_CharacterStyle                           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::InitStyle(const struct FS_CharacterStyle& Style)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitStyle");
		
		struct
		{
			struct FS_CharacterStyle                           Style;
		} params;
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Character_HydroGuy_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ExecuteUbergraph_BP_Character_HydroGuy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_HydroGuy_C::ExecuteUbergraph_BP_Character_HydroGuy(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ExecuteUbergraph_BP_Character_HydroGuy");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Character_HydroGuy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_HydroGuy_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_HydroGuy.BP_Character_HydroGuy_C");
		return ptr;
	}

}



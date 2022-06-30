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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetSpineRotationIncrement
	 */
	struct ABP_Character_HydroGuy_C_GetSpineRotationIncrement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.CalculateCartPivotRotation
	 */
	struct ABP_Character_HydroGuy_C_CalculateCartPivotRotation_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ToggleFree
	 */
	struct ABP_Character_HydroGuy_C_ToggleFree_Params
	{
	public:
		bool                                                       isFree_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.IsProxyTwoHanded?
	 */
	struct ABP_Character_HydroGuy_C_IsProxyTwoHanded__Params
	{
	public:
		class FName                                                Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.PlayMontage
	 */
	struct ABP_Character_HydroGuy_C_PlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetClothingColor
	 */
	struct ABP_Character_HydroGuy_C_GetClothingColor_Params
	{
	public:
		class FName                                                ColorParameter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class FName                                                Color;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomHairColor
	 */
	struct ABP_Character_HydroGuy_C_RandomHairColor_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomSkinColor
	 */
	struct ABP_Character_HydroGuy_C_RandomSkinColor_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomBeardMesh
	 */
	struct ABP_Character_HydroGuy_C_RandomBeardMesh_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomHairMesh
	 */
	struct ABP_Character_HydroGuy_C_RandomHairMesh_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomPantsColor
	 */
	struct ABP_Character_HydroGuy_C_RandomPantsColor_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomShirtColor
	 */
	struct ABP_Character_HydroGuy_C_RandomShirtColor_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomPantsMesh
	 */
	struct ABP_Character_HydroGuy_C_RandomPantsMesh_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomShirtMesh
	 */
	struct ABP_Character_HydroGuy_C_RandomShirtMesh_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateProxyItem
	 */
	struct ABP_Character_HydroGuy_C_UpdateProxyItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    ProxyItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Attach_;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHairColor
	 */
	struct ABP_Character_HydroGuy_C_UpdateHairColor_Params
	{
	public:
		class FName                                                Hair_Color_ID;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateBeardMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateBeardMesh_Params
	{
	public:
		int32_t                                                    BeardIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetCurrentHead
	 */
	struct ABP_Character_HydroGuy_C_GetCurrentHead_Params
	{
	public:
		class UPData_Head_C*                                       Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.CreateDynamicDefaultMaterial
	 */
	struct ABP_Character_HydroGuy_C_CreateDynamicDefaultMaterial_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaterialSlot;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.GetMeshDefaultMaterial
	 */
	struct ABP_Character_HydroGuy_C_GetMeshDefaultMaterial_Params
	{
	public:
		class USkinnedMeshComponent*                               MeshComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaterialSlot;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UMaterialInterface*                                  Material;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RandomStyle
	 */
	struct ABP_Character_HydroGuy_C_RandomStyle_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHairMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateHairMesh_Params
	{
	public:
		int32_t                                                    HairIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.RefreshClothingColor
	 */
	struct ABP_Character_HydroGuy_C_RefreshClothingColor_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingPantsColor
	 */
	struct ABP_Character_HydroGuy_C_UpdateClothingPantsColor_Params
	{
	public:
		class FName                                                Clothing_Color;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ToggleHideMeshParts
	 */
	struct ABP_Character_HydroGuy_C_ToggleHideMeshParts_Params
	{
	public:
		TArray<E_MeshParts_E_MeshParts>                            MeshParts;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Hide_;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingShirtColor
	 */
	struct ABP_Character_HydroGuy_C_UpdateClothingShirtColor_Params
	{
	public:
		class FName                                                Clothing_Color;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingColor
	 */
	struct ABP_Character_HydroGuy_C_UpdateClothingColor_Params
	{
	public:
		class FName                                                ColorParameter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Color;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingPantsMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateClothingPantsMesh_Params
	{
	public:
		int32_t                                                    PantsIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingShirtMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateClothingShirtMesh_Params
	{
	public:
		int32_t                                                    Shirt_Index;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ClearClothingMeshes
	 */
	struct ABP_Character_HydroGuy_C_ClearClothingMeshes_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateClothingMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateClothingMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshClothing;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ClothingSlots_E_ClothingSlots                            Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClothingIndex;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<E_MeshParts_E_MeshParts>                            UnhideMeshParts;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<E_MeshParts_E_MeshParts>                            HideMeshParts;                                           // 0x0020(0x0010)  (Parm, OutParm)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateSkinColor
	 */
	struct ABP_Character_HydroGuy_C_UpdateSkinColor_Params
	{
	public:
		class FName                                                SkinColorID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateHeadMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateHeadMesh_Params
	{
	public:
		int32_t                                                    HeadIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.OnConstruct
	 */
	struct ABP_Character_HydroGuy_C_OnConstruct_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UpdateBodyMesh
	 */
	struct ABP_Character_HydroGuy_C_UpdateBodyMesh_Params
	{
	public:
		class FName                                                BodyID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitClothing
	 */
	struct ABP_Character_HydroGuy_C_InitClothing_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitBody
	 */
	struct ABP_Character_HydroGuy_C_InitBody_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.InitStyle
	 */
	struct ABP_Character_HydroGuy_C_InitStyle_Params
	{
	public:
		struct FS_CharacterStyle                                   Style;                                                   // 0x0000(0x004C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.UserConstructionScript
	 */
	struct ABP_Character_HydroGuy_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ReceiveTick
	 */
	struct ABP_Character_HydroGuy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Character_HydroGuy.BP_Character_HydroGuy_C.ExecuteUbergraph_BP_Character_HydroGuy
	 */
	struct ABP_Character_HydroGuy_C_ExecuteUbergraph_BP_Character_HydroGuy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

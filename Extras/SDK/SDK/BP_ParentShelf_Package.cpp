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
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.ContainsSpecial?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_SavedShelfItem                           ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Contains_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentShelf_C::ContainsSpecial_(const struct FS_SavedShelfItem& ItemInfo, int32_t* Index, bool* Contains_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.ContainsSpecial?");
		
		struct
		{
			struct FS_SavedShelfItem                           ItemInfo;
			int32_t                                            Index;
			bool                                               Contains_;
		} params;
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
		if (Contains_ != nullptr)
			*Contains_ = params.Contains_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.Attach Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ShelfLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_ShelfItem                                S_ShelfItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentShelf_C::Attach_Item(class USceneComponent* ShelfLocation, class ABP_ParentItem_C* Item, const struct FS_ShelfItem& S_ShelfItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.Attach Item");
		
		struct
		{
			class USceneComponent*                             ShelfLocation;
			class ABP_ParentItem_C*                            Item;
			struct FS_ShelfItem                                S_ShelfItem;
		} params;
		params.ShelfLocation = ShelfLocation;
		params.Item = Item;
		params.S_ShelfItem = S_ShelfItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.Shelf Trace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          Hits                                                       (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_ParentShelf_C::Shelf_Trace(TArray<struct FHitResult>* Hits)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.Shelf Trace");
		
		struct
		{
			TArray<struct FHitResult>                          Hits;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.TraceForStoredItems
	 * 		Flags  -> ()
	 */
	void ABP_ParentShelf_C::TraceForStoredItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.TraceForStoredItems");
		
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
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.CanStore?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanStore_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USC_ShelfLocation_C*                         Location                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_ShelfItem                                ItemData                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentShelf_C::CanStore_(class ABP_ParentItem_C* Item, bool* CanStore_, class USC_ShelfLocation_C** Location, struct FS_ShelfItem* ItemData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.CanStore?");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			bool                                               CanStore_;
			class USC_ShelfLocation_C*                         Location;
			struct FS_ShelfItem                                ItemData;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanStore_ != nullptr)
			*CanStore_ = params.CanStore_;
		if (Location != nullptr)
			*Location = params.Location;
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.OnCompleted_671D6CD54910B7E9A078748F04436CA4
	 * 		Flags  -> ()
	 */
	void ABP_ParentShelf_C::OnCompleted_671D6CD54910B7E9A078748F04436CA4()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.OnCompleted_671D6CD54910B7E9A078748F04436CA4");
		
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
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.NewItemToShelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentShelf_C::NewItemToShelf(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.NewItemToShelf");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentShelf_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_ParentShelf_C::ActorPreSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.LoadItemToShelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentShelf_C::LoadItemToShelf(class ABP_ParentItem_C* Item, class USceneComponent* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.LoadItemToShelf");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			class USceneComponent*                             Location;
		} params;
		params.Item = Item;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentShelf.BP_ParentShelf_C.ExecuteUbergraph_BP_ParentShelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentShelf_C::ExecuteUbergraph_BP_ParentShelf(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentShelf.BP_ParentShelf_C.ExecuteUbergraph_BP_ParentShelf");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentShelf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentShelf_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentShelf.BP_ParentShelf_C");
		return ptr;
	}

}



﻿/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescription::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MeshDescription.MeshDescription"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.SetVertexPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetVertexPosition"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			struct FVector                                     Position;
		} params;
		params.VertexID = VertexID;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerimeterIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int32_t PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PerimeterIndex;
			struct FVertexInstanceID                           VertexInstanceID;
		} params;
		params.PolygonID = PolygonID;
		params.PerimeterIndex = PerimeterIndex;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FPolygonGroupID                             PolygonGroupID;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReversePolygonFacing(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfNewVertices                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewVertices(int32_t NumberOfNewVertices)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices"));
		
		struct
		{
			int32_t                                            NumberOfNewVertices;
		} params;
		params.NumberOfNewVertices = NumberOfNewVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfNewVertexInstances                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances"));
		
		struct
		{
			int32_t                                            NumberOfNewVertexInstances;
		} params;
		params.NumberOfNewVertexInstances = NumberOfNewVertexInstances;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfNewTriangles                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewTriangles(int32_t NumberOfNewTriangles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles"));
		
		struct
		{
			int32_t                                            NumberOfNewTriangles;
		} params;
		params.NumberOfNewTriangles = NumberOfNewTriangles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfNewPolygons                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewPolygons(int32_t NumberOfNewPolygons)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons"));
		
		struct
		{
			int32_t                                            NumberOfNewPolygons;
		} params;
		params.NumberOfNewPolygons = NumberOfNewPolygons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfNewPolygonGroups                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups"));
		
		struct
		{
			int32_t                                            NumberOfNewPolygonGroups;
		} params;
		params.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfNewEdges                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewEdges(int32_t NumberOfNewEdges)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges"));
		
		struct
		{
			int32_t                                            NumberOfNewEdges;
		} params;
		params.NumberOfNewEdges = NumberOfNewEdges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsVertexValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsVertexValid(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexValid"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsVertexOrphaned(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			bool                                               ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsTriangleValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsTriangleValid(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsTriangleValid"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			bool                                               ReturnValue;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsTrianglePartOfNgon(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			bool                                               ReturnValue;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsPolygonValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsPolygonValid(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsPolygonValid"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			bool                                               ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			bool                                               ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEmpty
	 * 		Flags  -> ()
	 */
	bool UMeshDescriptionBase::IsEmpty()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEmpty"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEdgeValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsEdgeValid(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeValid"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			struct FPolygonID                                  PolygonID;
			bool                                               ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsEdgeInternal(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexInstanceIDs != nullptr)
			*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UMeshDescriptionBase::GetVertexPosition(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexPosition"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			struct FVector                                     ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge"));
		
		struct
		{
			struct FVertexID                                   VertexID0;
			struct FVertexID                                   VertexID1;
			struct FEdgeID                                     ReturnValue;
		} params;
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			struct FVertexID                                   ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID0                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexInstanceID                           VertexInstanceID1                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID0;
			struct FVertexInstanceID                           VertexInstanceID1;
			struct FEdgeID                                     ReturnValue;
		} params;
		params.VertexInstanceID0 = VertexInstanceID0;
		params.VertexInstanceID1 = VertexInstanceID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			struct FVertexID                                   VertexID;
			struct FVertexInstanceID                           ReturnValue;
		} params;
		params.TriangleID = TriangleID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVertexID                                   VertexID;
			struct FVertexInstanceID                           ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutConnectedTriangleIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			TArray<struct FTriangleID>                         OutConnectedTriangleIDs;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedTriangleIDs != nullptr)
			*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			TArray<struct FPolygonID>                          OutConnectedPolygonIDs;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutConnectedTriangleIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			TArray<struct FTriangleID>                         OutConnectedTriangleIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedTriangleIDs != nullptr)
			*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			TArray<struct FPolygonID>                          OutConnectedPolygonIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			TArray<struct FEdgeID>                             OutEdgeIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutAdjacentVertexIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			TArray<struct FVertexID>                           OutAdjacentVertexIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentVertexIDs != nullptr)
			*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutVertexIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			TArray<struct FVertexID>                           OutVertexIDs;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexIDs != nullptr)
			*OutVertexIDs = params.OutVertexIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexInstanceIDs != nullptr)
			*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			int32_t                                            Index;
			struct FVertexInstanceID                           ReturnValue;
		} params;
		params.TriangleID = TriangleID;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			struct FPolygonGroupID                             ReturnValue;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			struct FPolygonID                                  ReturnValue;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			TArray<struct FEdgeID>                             OutEdgeIDs;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutTriangleIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			TArray<struct FTriangleID>                         OutTriangleIDs;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTriangleIDs != nullptr)
			*OutTriangleIDs = params.OutTriangleIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutVertexIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FVertexID>                           OutVertexIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexIDs != nullptr)
			*OutVertexIDs = params.OutVertexIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexInstanceIDs != nullptr)
			*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutTriangleIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FTriangleID>                         OutTriangleIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTriangleIDs != nullptr)
			*OutTriangleIDs = params.OutTriangleIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FPolygonGroupID                             ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FEdgeID>                             OutEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FEdgeID>                             OutEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			TArray<struct FPolygonID>                          OutPolygonIDs;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonIDs != nullptr)
			*OutPolygonIDs = params.OutPolygonIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FPolygonID>                          OutPolygonIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonIDs != nullptr)
			*OutPolygonIDs = params.OutPolygonIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexVertexInstances(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonVertices(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonTriangles(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutVertexIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<struct FVertexID>                           OutVertexIDs;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexIDs != nullptr)
			*OutVertexIDs = params.OutVertexIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UMeshDescriptionBase::GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t VertexNumber)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            VertexNumber;
			struct FVertexID                                   ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		params.VertexNumber = VertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutConnectedTriangleIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<struct FTriangleID>                         OutConnectedTriangleIDs;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedTriangleIDs != nullptr)
			*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<struct FPolygonID>                          OutConnectedPolygonIDs;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.Empty
	 * 		Flags  -> ()
	 */
	void UMeshDescriptionBase::Empty()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.Empty"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OrphanedVertices                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			TArray<struct FVertexID>                           OrphanedVertices;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedVertices != nullptr)
			*OrphanedVertices = params.OrphanedVertices;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteVertex"));
		
		struct
		{
			struct FVertexID                                   VertexID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OrphanedEdges                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OrphanedVertexInstances                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OrphanedPolygonGroupsPtr                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteTriangle"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			TArray<struct FEdgeID>                             OrphanedEdges;
			TArray<struct FVertexInstanceID>                   OrphanedVertexInstances;
			TArray<struct FPolygonGroupID>                     OrphanedPolygonGroupsPtr;
		} params;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedEdges != nullptr)
			*OrphanedEdges = params.OrphanedEdges;
		if (OrphanedVertexInstances != nullptr)
			*OrphanedVertexInstances = params.OrphanedVertexInstances;
		if (OrphanedPolygonGroupsPtr != nullptr)
			*OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeletePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OrphanedEdges                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OrphanedVertexInstances                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OrphanedPolygonGroups                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeletePolygon"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FEdgeID>                             OrphanedEdges;
			TArray<struct FVertexInstanceID>                   OrphanedVertexInstances;
			TArray<struct FPolygonGroupID>                     OrphanedPolygonGroups;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedEdges != nullptr)
			*OrphanedEdges = params.OrphanedEdges;
		if (OrphanedVertexInstances != nullptr)
			*OrphanedVertexInstances = params.OrphanedVertexInstances;
		if (OrphanedPolygonGroups != nullptr)
			*OrphanedPolygonGroups = params.OrphanedPolygonGroups;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OrphanedVertices                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteEdge"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<struct FVertexID>                           OrphanedVertices;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedVertices != nullptr)
			*OrphanedVertices = params.OrphanedVertices;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateVertexWithID(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID"));
		
		struct
		{
			struct FVertexID                                   VertexID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID"));
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			struct FVertexID                                   VertexID;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance"));
		
		struct
		{
			struct FVertexID                                   VertexID;
			struct FVertexInstanceID                           ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertex
	 * 		Flags  -> ()
	 */
	struct FVertexID UMeshDescriptionBase::CreateVertex()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertex"));
		
		struct
		{
			struct FVertexID                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID"));
		
		struct
		{
			struct FTriangleID                                 TriangleID;
			struct FPolygonGroupID                             PolygonGroupID;
			TArray<struct FVertexInstanceID>                   VertexInstanceIDs;
			TArray<struct FEdgeID>                             NewEdgeIDs;
		} params;
		params.TriangleID = TriangleID;
		params.PolygonGroupID = PolygonGroupID;
		params.VertexInstanceIDs = VertexInstanceIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FTriangleID UMeshDescriptionBase::CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateTriangle"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			TArray<struct FVertexInstanceID>                   VertexInstanceIDs;
			TArray<struct FEdgeID>                             NewEdgeIDs;
			struct FTriangleID                                 ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		params.VertexInstanceIDs = VertexInstanceIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FPolygonGroupID                             PolygonGroupID;
			TArray<struct FVertexInstanceID>                   VertexInstanceIDs;
			TArray<struct FEdgeID>                             NewEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexInstanceIDs != nullptr)
			*VertexInstanceIDs = params.VertexInstanceIDs;
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	 * 		Flags  -> ()
	 */
	struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup"));
		
		struct
		{
			struct FPolygonGroupID                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UMeshDescriptionBase::CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygon"));
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			TArray<struct FVertexInstanceID>                   VertexInstanceIDs;
			TArray<struct FEdgeID>                             NewEdgeIDs;
			struct FPolygonID                                  ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexInstanceIDs != nullptr)
			*VertexInstanceIDs = params.VertexInstanceIDs;
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID0                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID"));
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			struct FVertexID                                   VertexID0;
			struct FVertexID                                   VertexID1;
		} params;
		params.EdgeID = EdgeID;
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UMeshDescriptionBase::CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateEdge"));
		
		struct
		{
			struct FVertexID                                   VertexID0;
			struct FVertexID                                   VertexID1;
			struct FEdgeID                                     ReturnValue;
		} params;
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ComputePolygonTriangulation(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation"));
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshDescriptionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescriptionBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MeshDescription.MeshDescriptionBase"));
		return ptr;
	}

}



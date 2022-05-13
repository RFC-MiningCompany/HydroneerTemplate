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
	 * 		Name   -> PredefindFunction UEditableMeshAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableMeshAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGeometryCollectionAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGeometryCollectionAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableGeometryCollectionAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.WeldVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutNewVertexID                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDs;
			struct FVertexID                                   OutNewVertexID;
		} params;
		params.VertexIDs = VertexIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexID != nullptr)
			*OutNewVertexID = params.OutNewVertexID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TryToRemoveVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutWasVertexRemoved                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     OutNewEdgeID                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               bOutWasVertexRemoved;
			struct FEdgeID                                     OutNewEdgeID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutWasVertexRemoved != nullptr)
			*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
		if (OutNewEdgeID != nullptr)
			*OutNewEdgeID = params.OutNewEdgeID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutWasEdgeRemoved                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  OutNewPolygonID                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               bOutWasEdgeRemoved;
			struct FPolygonID                                  OutNewPolygonID;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutWasEdgeRemoved != nullptr)
			*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
		if (OutNewPolygonID != nullptr)
			*OutNewPolygonID = params.OutNewPolygonID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TriangulatePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewTrianglePolygons                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			TArray<struct FPolygonID>                          OutNewTrianglePolygons;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewTrianglePolygons != nullptr)
			*OutNewTrianglePolygons = params.OutNewTrianglePolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TessellatePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETriangleTessellationMode                          TriangleTessellationMode                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			ETriangleTessellationMode                          TriangleTessellationMode;
			TArray<struct FPolygonID>                          OutNewPolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		params.TriangleTessellationMode = TriangleTessellationMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.StartModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshModificationType                              MeshModificationType                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMeshTopologyChange                                MeshTopologyChange                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");
		
		struct
		{
			EMeshModificationType                              MeshModificationType;
			EMeshTopologyChange                                MeshTopologyChange;
		} params;
		params.MeshModificationType = MeshModificationType;
		params.MeshTopologyChange = MeshTopologyChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonToSplit>                     PolygonsToSplit                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");
		
		struct
		{
			TArray<struct FPolygonToSplit>                     PolygonsToSplit;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.PolygonsToSplit = PolygonsToSplit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitPolygonalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      InPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          PolygonIDs1                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          PolygonIDs2                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             BoundaryIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");
		
		struct
		{
			struct FPlane                                      InPlane;
			TArray<struct FPolygonID>                          PolygonIDs1;
			TArray<struct FPolygonID>                          PolygonIDs2;
			TArray<struct FEdgeID>                             BoundaryIDs;
		} params;
		params.InPlane = InPlane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolygonIDs1 != nullptr)
			*PolygonIDs1 = params.PolygonIDs1;
		if (PolygonIDs2 != nullptr)
			*PolygonIDs2 = params.PolygonIDs2;
		if (BoundaryIDs != nullptr)
			*BoundaryIDs = params.BoundaryIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Splits                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<float>                                      Splits;
			TArray<struct FVertexID>                           OutNewVertexIDs;
		} params;
		params.EdgeID = EdgeID;
		params.Splits = Splits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      VerticesNewCornerSharpness                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDs;
			TArray<float>                                      VerticesNewCornerSharpness;
		} params;
		params.VertexIDs = VertexIDs;
		params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVerticesAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAttributesForVertex>                AttributesForVertices                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");
		
		struct
		{
			TArray<struct FAttributesForVertex>                AttributesForVertices;
		} params;
		params.AttributesForVertices = AttributesForVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAttributesForVertexInstance>        AttributesForVertexInstances                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");
		
		struct
		{
			TArray<struct FAttributesForVertexInstance>        AttributesForVertexInstances;
		} params;
		params.AttributesForVertexInstances = AttributesForVertexInstances;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumTexCoords                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");
		
		struct
		{
			int32_t                                            NumTexCoords;
		} params;
		params.NumTexCoords = NumTexCoords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetSubdivisionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSubdivisionCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");
		
		struct
		{
			int32_t                                            NewSubdivisionCount;
		} params;
		params.NewSubdivisionCount = NewSubdivisionCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexAttributesForPolygon>         VertexAttributesForPolygons                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");
		
		struct
		{
			TArray<struct FVertexAttributesForPolygon>         VertexAttributesForPolygons;
		} params;
		params.VertexAttributesForPolygons = VertexAttributesForPolygons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDotProductForSoftEdge                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			float                                              MaxDotProductForSoftEdge;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesHardness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       EdgesNewIsHard                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			TArray<bool>                                       EdgesNewIsHard;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.EdgesNewIsHard = EdgesNewIsHard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      EdgesNewCreaseSharpness                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			TArray<float>                                      EdgesNewCreaseSharpness;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAttributesForEdge>                  AttributesForEdges                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");
		
		struct
		{
			TArray<struct FAttributesForEdge>                  AttributesForEdges;
		} params;
		params.AttributesForEdges = AttributesForEdges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowUndo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowUndo                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetAllowUndo(bool bInAllowUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");
		
		struct
		{
			bool                                               bInAllowUndo;
		} params;
		params.bInAllowUndo = bInAllowUndo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowSpatialDatabase                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");
		
		struct
		{
			bool                                               bInAllowSpatialDatabase;
		} params;
		params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowCompact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowCompact                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetAllowCompact(bool bInAllowCompact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");
		
		struct
		{
			bool                                               bInAllowCompact;
		} params;
		params.bInAllowCompact = bInAllowCompact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      InPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");
		
		struct
		{
			struct FPlane                                      InPlane;
			TArray<struct FPolygonID>                          OutPolygons;
		} params;
		params.InPlane = InPlane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LineSegmentStart                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LineSegmentEnd                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");
		
		struct
		{
			struct FVector                                     LineSegmentStart;
			struct FVector                                     LineSegmentEnd;
			TArray<struct FPolygonID>                          OutPolygons;
		} params;
		params.LineSegmentStart = LineSegmentStart;
		params.LineSegmentEnd = LineSegmentEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlane>                              Planes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");
		
		struct
		{
			TArray<struct FPlane>                              Planes;
			TArray<struct FPolygonID>                          OutPolygons;
		} params;
		params.Planes = Planes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.RevertInstance
	 * 		Flags  -> ()
	 */
	class UEditableMesh* UEditableMesh::RevertInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.Revert
	 * 		Flags  -> ()
	 */
	void UEditableMesh::Revert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.RebuildRenderMesh
	 * 		Flags  -> ()
	 */
	void UEditableMesh::RebuildRenderMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.QuadrangulateMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");
		
		struct
		{
			TArray<struct FPolygonID>                          OutNewPolygonIDs;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.PropagateInstanceChanges
	 * 		Flags  -> ()
	 */
	void UEditableMesh::PropagateInstanceChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.MoveVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexToMove>                       VerticesToMove                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::MoveVertices(TArray<struct FVertexToMove> VerticesToMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");
		
		struct
		{
			TArray<struct FVertexToMove>                       VerticesToMove;
		} params;
		params.VerticesToMove = VerticesToMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakeVertexID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VertexIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::MakeVertexID(int32_t VertexIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");
		
		struct
		{
			int32_t                                            VertexIndex;
		} params;
		params.VertexIndex = VertexIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakePolygonID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PolygonIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::MakePolygonID(int32_t PolygonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");
		
		struct
		{
			int32_t                                            PolygonIndex;
		} params;
		params.PolygonIndex = PolygonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakePolygonGroupID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PolygonGroupIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");
		
		struct
		{
			int32_t                                            PolygonGroupIndex;
		} params;
		params.PolygonGroupIndex = PolygonGroupIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakeEdgeID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EdgeIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::MakeEdgeID(int32_t EdgeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");
		
		struct
		{
			int32_t                                            EdgeIndex;
		} params;
		params.EdgeIndex = EdgeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");
		
		struct
		{
			struct FVertexID                                   VertexID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidPolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsUndoAllowed
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsUndoAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsSpatialDatabaseAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsPreviewingSubdivisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsOrphanedVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");
		
		struct
		{
			struct FVertexID                                   VertexID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCompactAllowed
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsCompactAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCommittedAsInstance
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsCommittedAsInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCommitted
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsCommitted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsBeingModified
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::IsBeingModified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidVertexID
	 * 		Flags  -> ()
	 */
	struct FVertexID UEditableMesh::InvalidVertexID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidPolygonID
	 * 		Flags  -> ()
	 */
	struct FPolygonID UEditableMesh::InvalidPolygonID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	 * 		Flags  -> ()
	 */
	struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidEdgeID
	 * 		Flags  -> ()
	 */
	struct FEdgeID UEditableMesh::InvalidEdgeID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.InsetPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              InsetFixedDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InsetProgressTowardCenter                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInsetPolygonsMode                                 Mode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewCenterPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewSidePolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			float                                              InsetFixedDistance;
			float                                              InsetProgressTowardCenter;
			EInsetPolygonsMode                                 Mode;
			TArray<struct FPolygonID>                          OutNewCenterPolygonIDs;
			TArray<struct FPolygonID>                          OutNewSidePolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		params.InsetFixedDistance = InsetFixedDistance;
		params.InsetProgressTowardCenter = InsetProgressTowardCenter;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewCenterPolygonIDs != nullptr)
			*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
		if (OutNewSidePolygonIDs != nullptr)
			*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InsertEdgeLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Splits                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<float>                                      Splits;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.EdgeID = EdgeID;
		params.Splits = Splits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InitializeAdapters
	 * 		Flags  -> ()
	 */
	void UEditableMesh::InitializeAdapters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexPairEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   NextVertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutEdgeWindingIsReversed                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");
		
		struct
		{
			struct FVertexID                                   VertexID;
			struct FVertexID                                   NextVertexID;
			bool                                               bOutEdgeWindingIsReversed;
		} params;
		params.VertexID = VertexID;
		params.NextVertexID = NextVertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutEdgeWindingIsReversed != nullptr)
			*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetVertexInstanceCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedPolygonNumber                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int32_t ConnectedPolygonNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			int32_t                                            ConnectedPolygonNumber;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		params.ConnectedPolygonNumber = ConnectedPolygonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetVertexCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutConnectedEdgeIDs                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");
		
		struct
		{
			struct FVertexID                                   VertexID;
			TArray<struct FEdgeID>                             OutConnectedEdgeIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedEdgeIDs != nullptr)
			*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");
		
		struct
		{
			struct FVertexID                                   VertexID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedEdgeNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int32_t ConnectedEdgeNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ConnectedEdgeNumber;
		} params;
		params.VertexID = VertexID;
		params.ConnectedEdgeNumber = ConnectedEdgeNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutAdjacentVertexIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetTextureCoordinateCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	 * 		Flags  -> ()
	 */
	struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetSubdivisionCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetSubdivisionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonTriangleNumber                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32_t PolygonTriangleNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PolygonTriangleNumber;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonTriangleNumber = PolygonTriangleNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutPolygonPerimeterVertexIDs                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FVertexID>                           OutPolygonPerimeterVertexIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterVertexIDs != nullptr)
			*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutPolygonPerimeterVertexInstanceIDs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FVertexInstanceID>                   OutPolygonPerimeterVertexInstanceIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
			*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonVertexNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PolygonVertexNumber;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonVertexNumber = PolygonVertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonVertexNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PolygonVertexNumber;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonVertexNumber = PolygonVertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutPolygonPerimeterEdgeIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FEdgeID>                             OutPolygonPerimeterEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterEdgeIDs != nullptr)
			*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerimeterEdgeNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutEdgeWindingIsReversedForPolygon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int32_t PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PerimeterEdgeNumber;
			bool                                               bOutEdgeWindingIsReversedForPolygon;
		} params;
		params.PolygonID = PolygonID;
		params.PerimeterEdgeNumber = PerimeterEdgeNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutEdgeWindingIsReversedForPolygon != nullptr)
			*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int32_t PolygonNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			int32_t                                            PolygonNumber;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		params.PolygonNumber = PolygonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonGroupCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetPolygonGroupCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetPolygonCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutAdjacentPolygons                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FPolygonID>                          OutAdjacentPolygons;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentPolygons != nullptr)
			*OutAdjacentPolygons = params.OutAdjacentPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetGroupForPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	 * 		Flags  -> ()
	 */
	struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutEdgeVertexID0                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutEdgeVertexID1                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			struct FVertexID                                   OutEdgeVertexID0;
			struct FVertexID                                   OutEdgeVertexID1;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeVertexID0 != nullptr)
			*OutEdgeVertexID0 = params.OutEdgeVertexID0;
		if (OutEdgeVertexID1 != nullptr)
			*OutEdgeVertexID1 = params.OutEdgeVertexID1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EdgeVertexNumber                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t EdgeVertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            EdgeVertexNumber;
		} params;
		params.EdgeID = EdgeID;
		params.EdgeVertexNumber = EdgeVertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");
		
		struct
		{
			struct FVertexID                                   VertexID0;
			struct FVertexID                                   VertexID1;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeLoopElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             EdgeLoopIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<struct FEdgeID>                             EdgeLoopIDs;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EdgeLoopIDs != nullptr)
			*EdgeLoopIDs = params.EdgeLoopIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeCount
	 * 		Flags  -> ()
	 */
	int32_t UEditableMesh::GetEdgeCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedPolygonNumber                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int32_t ConnectedPolygonNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            ConnectedPolygonNumber;
		} params;
		params.EdgeID = EdgeID;
		params.ConnectedPolygonNumber = ConnectedPolygonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FlipPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::FlipPolygons(TArray<struct FPolygonID> PolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVertexID                                   VertexID;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   EdgeVertexID0                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   EdgeVertexID1                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVertexID                                   EdgeVertexID0;
			struct FVertexID                                   EdgeVertexID1;
		} params;
		params.PolygonID = PolygonID;
		params.EdgeVertexID0 = EdgeVertexID0;
		params.EdgeVertexID1 = EdgeVertexID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeLoopEdgeIDs                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutFlippedEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutReversedEdgeIDPathToTake                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDsToSplit                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			TArray<struct FEdgeID>                             OutEdgeLoopEdgeIDs;
			TArray<struct FEdgeID>                             OutFlippedEdgeIDs;
			TArray<struct FEdgeID>                             OutReversedEdgeIDPathToTake;
			TArray<struct FPolygonID>                          OutPolygonIDsToSplit;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeLoopEdgeIDs != nullptr)
			*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
		if (OutFlippedEdgeIDs != nullptr)
			*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
		if (OutReversedEdgeIDPathToTake != nullptr)
			*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
		if (OutPolygonIDsToSplit != nullptr)
			*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtrudePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          Polygons                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              ExtrudeDistance                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepNeighborsTogether                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewExtrudedFrontPolygons                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          Polygons;
			float                                              ExtrudeDistance;
			bool                                               bKeepNeighborsTogether;
			TArray<struct FPolygonID>                          OutNewExtrudedFrontPolygons;
		} params;
		params.Polygons = Polygons;
		params.ExtrudeDistance = ExtrudeDistance;
		params.bKeepNeighborsTogether = bKeepNeighborsTogether;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtrudedFrontPolygons != nullptr)
			*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtendVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyExtendClosestEdge                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewExtendedVertexIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDs;
			bool                                               bOnlyExtendClosestEdge;
			struct FVector                                     ReferencePosition;
			TArray<struct FVertexID>                           OutNewExtendedVertexIDs;
		} params;
		params.VertexIDs = VertexIDs;
		params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
		params.ReferencePosition = ReferencePosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtendedVertexIDs != nullptr)
			*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtendEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldNeighbors                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewExtendedEdgeIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			bool                                               bWeldNeighbors;
			TArray<struct FEdgeID>                             OutNewExtendedEdgeIDs;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.bWeldNeighbors = bWeldNeighbors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtendedEdgeIDs != nullptr)
			*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.EndModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFromUndo                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::EndModification(bool bFromUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");
		
		struct
		{
			bool                                               bFromUndo;
		} params;
		params.bFromUndo = bFromUndo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDsToDelete                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");
		
		struct
		{
			TArray<struct FVertexInstanceID>                   VertexInstanceIDsToDelete;
			bool                                               bDeleteOrphanedVertices;
		} params;
		params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               bDeleteOrphanedEdges;
			bool                                               bDeleteOrphanedVertices;
			bool                                               bDeleteOrphanedVertexInstances;
			bool                                               bDeleteEmptyPolygonGroups;
		} params;
		params.VertexID = VertexID;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeletePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDsToDelete                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDsToDelete;
			bool                                               bDeleteOrphanedEdges;
			bool                                               bDeleteOrphanedVertices;
			bool                                               bDeleteOrphanedVertexInstances;
			bool                                               bDeleteEmptyPolygonGroups;
		} params;
		params.PolygonIDsToDelete = PolygonIDsToDelete;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeletePolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonGroupID>                     PolygonGroupIDs                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");
		
		struct
		{
			TArray<struct FPolygonGroupID>                     PolygonGroupIDs;
		} params;
		params.PolygonGroupIDs = PolygonGroupIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteOrphanVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDsToDelete                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDsToDelete;
		} params;
		params.VertexIDsToDelete = VertexIDsToDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDsToDelete                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDsToDelete;
			bool                                               bDeleteOrphanedVertices;
		} params;
		params.EdgeIDsToDelete = EdgeIDsToDelete;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               bDeleteOrphanedEdges;
			bool                                               bDeleteOrphanedVertices;
			bool                                               bDeleteOrphanedVertexInstances;
			bool                                               bDeleteEmptyPolygonGroups;
		} params;
		params.EdgeID = EdgeID;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexToCreate>                     VerticesToCreate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");
		
		struct
		{
			TArray<struct FVertexToCreate>                     VerticesToCreate;
			TArray<struct FVertexID>                           OutNewVertexIDs;
		} params;
		params.VerticesToCreate = VerticesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexInstanceToCreate>             VertexInstancesToCreate                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutNewVertexInstanceIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");
		
		struct
		{
			TArray<struct FVertexInstanceToCreate>             VertexInstancesToCreate;
			TArray<struct FVertexInstanceID>                   OutNewVertexInstanceIDs;
		} params;
		params.VertexInstancesToCreate = VertexInstancesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexInstanceIDs != nullptr)
			*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreatePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonToCreate>                    PolygonsToCreate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");
		
		struct
		{
			TArray<struct FPolygonToCreate>                    PolygonsToCreate;
			TArray<struct FPolygonID>                          OutNewPolygonIDs;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.PolygonsToCreate = PolygonsToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreatePolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonGroupToCreate>               PolygonGroupsToCreate                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OutNewPolygonGroupIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");
		
		struct
		{
			TArray<struct FPolygonGroupToCreate>               PolygonGroupsToCreate;
			TArray<struct FPolygonGroupID>                     OutNewPolygonGroupIDs;
		} params;
		params.PolygonGroupsToCreate = PolygonGroupsToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonGroupIDs != nullptr)
			*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumVerticesToCreate                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");
		
		struct
		{
			int32_t                                            NumVerticesToCreate;
			TArray<struct FVertexID>                           OutNewVertexIDs;
		} params;
		params.NumVerticesToCreate = NumVerticesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeToCreate>                       EdgesToCreate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");
		
		struct
		{
			TArray<struct FEdgeToCreate>                       EdgesToCreate;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.EdgesToCreate = EdgesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutSharedEdgeIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			TArray<struct FEdgeID>                             OutSharedEdgeIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSharedEdgeIDs != nullptr)
			*OutSharedEdgeIDs = params.OutSharedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");
		
		struct
		{
			struct FPolygonID                                  PolygonID;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	 * 		Flags  -> ()
	 */
	struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBoundingBox
	 * 		Flags  -> ()
	 */
	struct FBox UEditableMesh::ComputeBoundingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.CommitInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToInstanceTo                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");
		
		struct
		{
			class UPrimitiveComponent*                         ComponentToInstanceTo;
		} params;
		params.ComponentToInstanceTo = ComponentToInstanceTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.Commit
	 * 		Flags  -> ()
	 */
	void UEditableMesh::Commit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FChangeVertexInstancesForPolygon>    VertexInstancesForPolygons                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");
		
		struct
		{
			TArray<struct FChangeVertexInstancesForPolygon>    VertexInstancesForPolygons;
		} params;
		params.VertexInstancesForPolygons = VertexInstancesForPolygons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.BevelPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BevelFixedDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BevelProgressTowardCenter                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewCenterPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewSidePolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			float                                              BevelFixedDistance;
			float                                              BevelProgressTowardCenter;
			TArray<struct FPolygonID>                          OutNewCenterPolygonIDs;
			TArray<struct FPolygonID>                          OutNewSidePolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		params.BevelFixedDistance = BevelFixedDistance;
		params.BevelProgressTowardCenter = BevelProgressTowardCenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewCenterPolygonIDs != nullptr)
			*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
		if (OutNewSidePolygonIDs != nullptr)
			*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonGroupForPolygon>             PolygonGroupForPolygons                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedPolygonGroups                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");
		
		struct
		{
			TArray<struct FPolygonGroupForPolygon>             PolygonGroupForPolygons;
			bool                                               bDeleteOrphanedPolygonGroups;
		} params;
		params.PolygonGroupForPolygons = PolygonGroupForPolygons;
		params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.AnyChangesToUndo
	 * 		Flags  -> ()
	 */
	bool UEditableMesh::AnyChangesToUndo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");
		
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
	 * 		Name   -> PredefindFunction UEditableMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMeshFactory.MakeEditableMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMeshFactory::MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");
		
		struct
		{
			class UPrimitiveComponent*                         PrimitiveComponent;
			int32_t                                            LODIndex;
		} params;
		params.PrimitiveComponent = PrimitiveComponent;
		params.LODIndex = LODIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableMeshFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableMeshFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableStaticMeshAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableStaticMeshAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}

}



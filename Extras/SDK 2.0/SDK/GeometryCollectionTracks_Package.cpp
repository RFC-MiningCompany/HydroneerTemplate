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
	 * 		Name   -> PredefindFunction UMovieSceneGeometryCollectionSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGeometryCollectionSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneGeometryCollectionTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGeometryCollectionTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
		return ptr;
	}

}



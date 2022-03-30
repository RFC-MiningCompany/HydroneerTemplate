/**
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
	 * 		Name   -> PredefindFunction UMovieSceneGeometryCollectionSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGeometryCollectionSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneGeometryCollectionTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGeometryCollectionTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack"));
		return ptr;
	}

}



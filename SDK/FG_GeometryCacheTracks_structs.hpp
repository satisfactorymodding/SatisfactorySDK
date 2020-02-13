#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_MovieScene_classes.hpp"
#include "FG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// 0x0038
struct FMovieSceneGeometryCacheParams
{
	class UGeometryCache*                              GeometryCacheAsset;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x0008(0x0004) (Edit)
	struct FFrameNumber                                EndFrameOffset;                                           // 0x000C(0x0004) (Edit)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              StartOffset;                                              // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSoftObjectPath                             GeometryCache;                                            // 0x0020(0x0018) (ZeroConstructor, Deprecated)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// 0x0008 (0x0040 - 0x0038)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x0038(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x003C(0x0004)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// 0x0040 (0x0060 - 0x0020)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                                   // 0x0020(0x0040)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

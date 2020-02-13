#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DirectionalSubtitlesContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.StopSubtitle
struct UWidget_DirectionalSubtitlesContainer_C_StopSubtitle_Params
{
	class AActor**                                     Instigator;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.GetFurthestActor
struct UWidget_DirectionalSubtitlesContainer_C_GetFurthestActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.OnSubtitleDestruct
struct UWidget_DirectionalSubtitlesContainer_C_OnSubtitleDestruct_Params
{
	class UWidget_DirectionalSubtitles_C**             InstigatingSubtitle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.CreateSubtitle
struct UWidget_DirectionalSubtitlesContainer_C_CreateSubtitle_Params
{
	struct FText*                                      Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseDuration;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

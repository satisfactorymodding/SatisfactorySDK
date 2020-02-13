#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DirectionalSubtitles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ForceDestroySubtitle
struct UWidget_DirectionalSubtitles_C_ForceDestroySubtitle_Params
{
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnAnimDestruct
struct UWidget_DirectionalSubtitles_C_OnAnimDestruct_Params
{
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetSubtitleText
struct UWidget_DirectionalSubtitles_C_SetSubtitleText_Params
{
	struct FText*                                      mSubtitle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.UpdateSubtitle
struct UWidget_DirectionalSubtitles_C_UpdateSubtitle_Params
{
	struct FText*                                      mSubtitle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseDuration;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetDirectionVisibility
struct UWidget_DirectionalSubtitles_C_SetDirectionVisibility_Params
{
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.GetInstigatorAngle
struct UWidget_DirectionalSubtitles_C_GetInstigatorAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Construct
struct UWidget_DirectionalSubtitles_C_Construct_Params
{
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Event UpdateDestructionTimer
struct UWidget_DirectionalSubtitles_C_Event_UpdateDestructionTimer_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Destruct
struct UWidget_DirectionalSubtitles_C_Destruct_Params
{
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.On Instigator End Play
struct UWidget_DirectionalSubtitles_C_On_Instigator_End_Play_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ExecuteUbergraph_Widget_DirectionalSubtitles
struct UWidget_DirectionalSubtitles_C_ExecuteUbergraph_Widget_DirectionalSubtitles_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnDestruct__DelegateSignature
struct UWidget_DirectionalSubtitles_C_OnDestruct__DelegateSignature_Params
{
	class UWidget_DirectionalSubtitles_C**             InstigatingSubtitle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RestartNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_RestartNotification.Widget_RestartNotification_C.GetTimeText
struct UWidget_RestartNotification_C_GetTimeText_Params
{
	float*                                             timeToRestart;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function Widget_RestartNotification.Widget_RestartNotification_C.Construct
struct UWidget_RestartNotification_C_Construct_Params
{
};

// Function Widget_RestartNotification.Widget_RestartNotification_C.Destruct
struct UWidget_RestartNotification_C_Destruct_Params
{
};

// Function Widget_RestartNotification.Widget_RestartNotification_C.OnTimeLeftUpdated
struct UWidget_RestartNotification_C_OnTimeLeftUpdated_Params
{
	float*                                             timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_RestartNotification.Widget_RestartNotification_C.PreConstruct
struct UWidget_RestartNotification_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_RestartNotification.Widget_RestartNotification_C.ExecuteUbergraph_Widget_RestartNotification
struct UWidget_RestartNotification_C_ExecuteUbergraph_Widget_RestartNotification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

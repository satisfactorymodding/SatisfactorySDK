#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PipelinePump_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PipelinePump.Widget_PipelinePump_C.ActivateHeadLiftWarning
struct UWidget_PipelinePump_C_ActivateHeadLiftWarning_Params
{
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.UpdateWarning
struct UWidget_PipelinePump_C_UpdateWarning_Params
{
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.SetStaticInfo
struct UWidget_PipelinePump_C_SetStaticInfo_Params
{
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.UpdateStats
struct UWidget_PipelinePump_C_UpdateStats_Params
{
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.GetFlowText
struct UWidget_PipelinePump_C_GetFlowText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.GetBackPressureText
struct UWidget_PipelinePump_C_GetBackPressureText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.GetPressureText
struct UWidget_PipelinePump_C_GetPressureText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.GetFlowLimitText
struct UWidget_PipelinePump_C_GetFlowLimitText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.Init
struct UWidget_PipelinePump_C_Init_Params
{
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
struct UWidget_PipelinePump_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
{
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.BndEvt__mRateSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UWidget_PipelinePump_C_BndEvt__mRateSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.BndEvt__mPressureSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UWidget_PipelinePump_C_BndEvt__mPressureSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.OnCustomTick
struct UWidget_PipelinePump_C_OnCustomTick_Params
{
	float*                                             UpdateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.BndEvt__mFactory_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature
struct UWidget_PipelinePump_C_BndEvt__mFactory_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelinePump.Widget_PipelinePump_C.ExecuteUbergraph_Widget_PipelinePump
struct UWidget_PipelinePump_C_ExecuteUbergraph_Widget_PipelinePump_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

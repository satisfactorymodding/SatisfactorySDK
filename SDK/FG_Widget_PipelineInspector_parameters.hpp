#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PipelineInspector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.InitFluid
struct UWidget_PipelineInspector_C_InitFluid_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateGauge
struct UWidget_PipelineInspector_C_UpdateGauge_Params
{
	float*                                             NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateTank
struct UWidget_PipelineInspector_C_UpdateTank_Params
{
	float*                                             mNewValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateFlowRate
struct UWidget_PipelineInspector_C_UpdateFlowRate_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatFlow
struct UWidget_PipelineInspector_C_FormatFlow_Params
{
	float*                                             Flow;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatContentPct
struct UWidget_PipelineInspector_C_FormatContentPct_Params
{
	float*                                             Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.SetTexts
struct UWidget_PipelineInspector_C_SetTexts_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Tick
struct UWidget_PipelineInspector_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Button_1629_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__Button_1629_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Init
struct UWidget_PipelineInspector_C_Init_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.OnCustomTick
struct UWidget_PipelineInspector_C_OnCustomTick_Params
{
	float*                                             UpdateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature_Params
{
	bool*                                              FlushNetwork;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Flush
struct UWidget_PipelineInspector_C_Flush_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Construct
struct UWidget_PipelineInspector_C_Construct_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFlush__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFlush__DelegateSignature_Params
{
	float*                                             FlushDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_6_OnFluidLerp__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_6_OnFluidLerp__DelegateSignature_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_8_OnFluidFilledUp__DelegateSignature
struct UWidget_PipelineInspector_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_8_OnFluidFilledUp__DelegateSignature_Params
{
};

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.ExecuteUbergraph_Widget_PipelineInspector
struct UWidget_PipelineInspector_C_ExecuteUbergraph_Widget_PipelineInspector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

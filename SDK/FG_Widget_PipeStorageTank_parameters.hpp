#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PipeStorageTank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetContentText
struct UWidget_PipeStorageTank_C_GetContentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetTypeText
struct UWidget_PipeStorageTank_C_GetTypeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Init
struct UWidget_PipeStorageTank_C_Init_Params
{
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
struct UWidget_PipeStorageTank_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
{
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Tick
struct UWidget_PipeStorageTank_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Construct
struct UWidget_PipeStorageTank_C_Construct_Params
{
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature
struct UWidget_PipeStorageTank_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature_Params
{
	bool*                                              FlushNetwork;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.ExecuteUbergraph_Widget_PipeStorageTank
struct UWidget_PipeStorageTank_C_ExecuteUbergraph_Widget_PipeStorageTank_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

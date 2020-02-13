#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ExtractorPump_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.UpdateWarning
struct UBPW_ExtractorPump_C_UpdateWarning_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.SetupStaticInfo
struct UBPW_ExtractorPump_C_SetupStaticInfo_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.UpdateFluidTank
struct UBPW_ExtractorPump_C_UpdateFluidTank_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.UpdateFlowRate
struct UBPW_ExtractorPump_C_UpdateFlowRate_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.Construct
struct UBPW_ExtractorPump_C_Construct_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.Tick
struct UBPW_ExtractorPump_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
struct UBPW_ExtractorPump_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.BndEvt__mBuildableExtractor_K2Node_ComponentBoundEvent_2_BuildingStateChanged__DelegateSignature
struct UBPW_ExtractorPump_C_BndEvt__mBuildableExtractor_K2Node_ComponentBoundEvent_2_BuildingStateChanged__DelegateSignature_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
struct UBPW_ExtractorPump_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
{
};

// Function BPW_ExtractorPump.BPW_ExtractorPump_C.ExecuteUbergraph_BPW_ExtractorPump
struct UBPW_ExtractorPump_C_ExecuteUbergraph_BPW_ExtractorPump_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_PipeModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_PipeModule.BPW_PipeModule_C.InternalUpdateValues
struct UBPW_PipeModule_C_InternalUpdateValues_Params
{
	float*                                             CurrentStorage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxStorage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FlowIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FlowOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxFlowRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.SetFluidType
struct UBPW_PipeModule_C_SetFluidType_Params
{
	class UClass**                                     fluidDescriptor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.SetTint
struct UBPW_PipeModule_C_SetTint_Params
{
	struct FLinearColor*                               mTint;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.UpdateValues
struct UBPW_PipeModule_C_UpdateValues_Params
{
	float*                                             CurrentStorage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxStorage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FlowIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FlowOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxFlowRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.UpdateTank
struct UBPW_PipeModule_C_UpdateTank_Params
{
	float*                                             NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature
struct UBPW_PipeModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature_Params
{
	float*                                             FlushDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UBPW_PipeModule_C_BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UBPW_PipeModule_C_BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function BPW_PipeModule.BPW_PipeModule_C.Construct
struct UBPW_PipeModule_C_Construct_Params
{
};

// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnFluidFilledUp__DelegateSignature
struct UBPW_PipeModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnFluidFilledUp__DelegateSignature_Params
{
};

// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFluidLerp__DelegateSignature
struct UBPW_PipeModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFluidLerp__DelegateSignature_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.ExecuteUbergraph_BPW_PipeModule
struct UBPW_PipeModule_C_ExecuteUbergraph_BPW_PipeModule_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PipeModule.BPW_PipeModule_C.OnFlush__DelegateSignature
struct UBPW_PipeModule_C_OnFlush__DelegateSignature_Params
{
	bool*                                              FlushNetwork;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

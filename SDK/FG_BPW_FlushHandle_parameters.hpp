#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FlushHandle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_FlushHandle.BPW_FlushHandle_C.StartFluidLerp
struct UBPW_FlushHandle_C_StartFluidLerp_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.PlayHandleNoise
struct UBPW_FlushHandle_C_PlayHandleNoise_Params
{
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.StartLerp
struct UBPW_FlushHandle_C_StartLerp_Params
{
	float*                                             EndValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FullFlush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.RotateHandle
struct UBPW_FlushHandle_C_RotateHandle_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UBPW_FlushHandle_C_BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
struct UBPW_FlushHandle_C_BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.LerpHandle
struct UBPW_FlushHandle_C_LerpHandle_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
struct UBPW_FlushHandle_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.ResetFlush
struct UBPW_FlushHandle_C_ResetFlush_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.LerpFluid
struct UBPW_FlushHandle_C_LerpFluid_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.ExecuteUbergraph_BPW_FlushHandle
struct UBPW_FlushHandle_C_ExecuteUbergraph_BPW_FlushHandle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidFilledUp__DelegateSignature
struct UBPW_FlushHandle_C_OnFluidFilledUp__DelegateSignature_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidLerp__DelegateSignature
struct UBPW_FlushHandle_C_OnFluidLerp__DelegateSignature_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlushCompleted__DelegateSignature
struct UBPW_FlushHandle_C_OnFlushCompleted__DelegateSignature_Params
{
};

// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlush__DelegateSignature
struct UBPW_FlushHandle_C_OnFlush__DelegateSignature_Params
{
	float*                                             FlushDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FlushHandle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_FlushHandle.BPW_FlushHandle_C.StartFluidLerp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::StartFluidLerp(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.StartFluidLerp");

	UBPW_FlushHandle_C_StartFluidLerp_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.PlayHandleNoise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::PlayHandleNoise(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.PlayHandleNoise");

	UBPW_FlushHandle_C_PlayHandleNoise_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.StartLerp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         EndValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FullFlush                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::StartLerp(float* EndValue, bool* FullFlush)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.StartLerp");

	UBPW_FlushHandle_C_StartLerp_Params params;
	params.EndValue = EndValue;
	params.FullFlush = FullFlush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.RotateHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::RotateHandle(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.RotateHandle");

	UBPW_FlushHandle_C_RotateHandle_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UBPW_FlushHandle_C_BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_FlushHandle_C::BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UBPW_FlushHandle_C_BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.LerpHandle
// (BlueprintCallable, BlueprintEvent)

void UBPW_FlushHandle_C::LerpHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.LerpHandle");

	UBPW_FlushHandle_C_LerpHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_FlushHandle_C::BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature");

	UBPW_FlushHandle_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.ResetFlush
// (BlueprintCallable, BlueprintEvent)

void UBPW_FlushHandle_C::ResetFlush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.ResetFlush");

	UBPW_FlushHandle_C_ResetFlush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.LerpFluid
// (BlueprintCallable, BlueprintEvent)

void UBPW_FlushHandle_C::LerpFluid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.LerpFluid");

	UBPW_FlushHandle_C_LerpFluid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.ExecuteUbergraph_BPW_FlushHandle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::ExecuteUbergraph_BPW_FlushHandle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.ExecuteUbergraph_BPW_FlushHandle");

	UBPW_FlushHandle_C_ExecuteUbergraph_BPW_FlushHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidFilledUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_FlushHandle_C::OnFluidFilledUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidFilledUp__DelegateSignature");

	UBPW_FlushHandle_C_OnFluidFilledUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidLerp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::OnFluidLerp__DelegateSignature(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidLerp__DelegateSignature");

	UBPW_FlushHandle_C_OnFluidLerp__DelegateSignature_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlushCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_FlushHandle_C::OnFlushCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlushCompleted__DelegateSignature");

	UBPW_FlushHandle_C_OnFlushCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlush__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FlushDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FlushHandle_C::OnFlush__DelegateSignature(float* FlushDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlush__DelegateSignature");

	UBPW_FlushHandle_C_OnFlush__DelegateSignature_Params params;
	params.FlushDuration = FlushDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

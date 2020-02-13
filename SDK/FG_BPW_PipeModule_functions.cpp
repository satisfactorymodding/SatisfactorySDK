// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_PipeModule_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_PipeModule.BPW_PipeModule_C.InternalUpdateValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentStorage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxStorage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FlowIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FlowOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxFlowRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::InternalUpdateValues(float* CurrentStorage, float* MaxStorage, float* FlowIn, float* FlowOut, float* MaxFlowRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.InternalUpdateValues");

	UBPW_PipeModule_C_InternalUpdateValues_Params params;
	params.CurrentStorage = CurrentStorage;
	params.MaxStorage = MaxStorage;
	params.FlowIn = FlowIn;
	params.FlowOut = FlowOut;
	params.MaxFlowRate = MaxFlowRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.SetFluidType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 fluidDescriptor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::SetFluidType(class UClass** fluidDescriptor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.SetFluidType");

	UBPW_PipeModule_C_SetFluidType_Params params;
	params.fluidDescriptor = fluidDescriptor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.SetTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           mTint                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::SetTint(struct FLinearColor* mTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.SetTint");

	UBPW_PipeModule_C_SetTint_Params params;
	params.mTint = mTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentStorage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxStorage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FlowIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FlowOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxFlowRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::UpdateValues(float* CurrentStorage, float* MaxStorage, float* FlowIn, float* FlowOut, float* MaxFlowRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.UpdateValues");

	UBPW_PipeModule_C_UpdateValues_Params params;
	params.CurrentStorage = CurrentStorage;
	params.MaxStorage = MaxStorage;
	params.FlowIn = FlowIn;
	params.FlowOut = FlowOut;
	params.MaxFlowRate = MaxFlowRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.UpdateTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::UpdateTank(float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.UpdateTank");

	UBPW_PipeModule_C_UpdateTank_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         FlushDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature(float* FlushDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature");

	UBPW_PipeModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature_Params params;
	params.FlushDuration = FlushDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBPW_PipeModule_C::BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UBPW_PipeModule_C_BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBPW_PipeModule_C::BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UBPW_PipeModule_C_BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_PipeModule_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.Construct");

	UBPW_PipeModule_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnFluidFilledUp__DelegateSignature
// (BlueprintEvent)

void UBPW_PipeModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnFluidFilledUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnFluidFilledUp__DelegateSignature");

	UBPW_PipeModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnFluidFilledUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFluidLerp__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFluidLerp__DelegateSignature(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFluidLerp__DelegateSignature");

	UBPW_PipeModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFluidLerp__DelegateSignature_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.ExecuteUbergraph_BPW_PipeModule
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::ExecuteUbergraph_BPW_PipeModule(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.ExecuteUbergraph_BPW_PipeModule");

	UBPW_PipeModule_C_ExecuteUbergraph_BPW_PipeModule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PipeModule.BPW_PipeModule_C.OnFlush__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FlushNetwork                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PipeModule_C::OnFlush__DelegateSignature(bool* FlushNetwork)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.OnFlush__DelegateSignature");

	UBPW_PipeModule_C_OnFlush__DelegateSignature_Params params;
	params.FlushNetwork = FlushNetwork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

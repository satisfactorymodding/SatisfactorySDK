// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PipelineInspector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PipelineInspector.Widget_PipelineInspector_C.InitFluid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_PipelineInspector_C::InitFluid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.InitFluid");

	UWidget_PipelineInspector_C_InitFluid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::UpdateGauge(float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateGauge");

	UWidget_PipelineInspector_C_UpdateGauge_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateTank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         mNewValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::UpdateTank(float* mNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateTank");

	UWidget_PipelineInspector_C_UpdateTank_Params params;
	params.mNewValue = mNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateFlowRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_PipelineInspector_C::UpdateFlowRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateFlowRate");

	UWidget_PipelineInspector_C_UpdateFlowRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatFlow
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Flow                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWidget_PipelineInspector_C::FormatFlow(float* Flow, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatFlow");

	UWidget_PipelineInspector_C_FormatFlow_Params params;
	params.Flow = Flow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatContentPct
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWidget_PipelineInspector_C::FormatContentPct(float* Content, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatContentPct");

	UWidget_PipelineInspector_C_FormatContentPct_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.SetTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_PipelineInspector_C::SetTexts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.SetTexts");

	UWidget_PipelineInspector_C_SetTexts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UWidget_PipelineInspector_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.Tick");

	UWidget_PipelineInspector_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Button_1629_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_PipelineInspector_C::BndEvt__Button_1629_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Button_1629_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__Button_1629_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_PipelineInspector_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.Init");

	UWidget_PipelineInspector_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.OnCustomTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         UpdateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::OnCustomTick(float* UpdateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.OnCustomTick");

	UWidget_PipelineInspector_C_OnCustomTick_Params params;
	params.UpdateTime = UpdateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          FlushNetwork                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature(bool* FlushNetwork)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature_Params params;
	params.FlushNetwork = FlushNetwork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Flush
// (BlueprintCallable, BlueprintEvent)

void UWidget_PipelineInspector_C::Flush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.Flush");

	UWidget_PipelineInspector_C_Flush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PipelineInspector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.Construct");

	UWidget_PipelineInspector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_PipelineInspector_C::BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__mPipeNetworkButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_PipelineInspector_C::BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__mPipeSegmentButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFlush__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         FlushDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFlush__DelegateSignature(float* FlushDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFlush__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFlush__DelegateSignature_Params params;
	params.FlushDuration = FlushDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_6_OnFluidLerp__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_6_OnFluidLerp__DelegateSignature(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_6_OnFluidLerp__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_6_OnFluidLerp__DelegateSignature_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_8_OnFluidFilledUp__DelegateSignature
// (BlueprintEvent)

void UWidget_PipelineInspector_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_8_OnFluidFilledUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_8_OnFluidFilledUp__DelegateSignature");

	UWidget_PipelineInspector_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_8_OnFluidFilledUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipelineInspector.Widget_PipelineInspector_C.ExecuteUbergraph_Widget_PipelineInspector
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipelineInspector_C::ExecuteUbergraph_Widget_PipelineInspector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipelineInspector.Widget_PipelineInspector_C.ExecuteUbergraph_Widget_PipelineInspector");

	UWidget_PipelineInspector_C_ExecuteUbergraph_Widget_PipelineInspector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Overclock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Overclock.Widget_Overclock_C.SetSuffix
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  suffix                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Overclock_C::SetSuffix(struct FText* suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetSuffix");

	UWidget_Overclock_C_SetSuffix_Params params;
	params.suffix = suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.UpdateTargetProductionSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::UpdateTargetProductionSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.UpdateTargetProductionSpeed");

	UWidget_Overclock_C_UpdateTargetProductionSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetDefaultProductionSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::SetDefaultProductionSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetDefaultProductionSpeed");

	UWidget_Overclock_C_SetDefaultProductionSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_Overclock_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.OnMouseButtonDown");

	UWidget_Overclock_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.UpdateDropArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_CostSlotWrapper_C** NewActiveCostslot              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Overclock_C::UpdateDropArea(class UWidget_CostSlotWrapper_C** NewActiveCostslot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.UpdateDropArea");

	UWidget_Overclock_C_UpdateDropArea_Params params;
	params.NewActiveCostslot = NewActiveCostslot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetPercentText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::SetPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetPercentText");

	UWidget_Overclock_C_SetPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.CheckIsOverclockUnlocked
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::CheckIsOverclockUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.CheckIsOverclockUnlocked");

	UWidget_Overclock_C_CheckIsOverclockUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetCrystalSlotUsable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_CostSlotWrapper_C** CostSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Overclock_C::SetCrystalSlotUsable(int* SlotIndex, class UWidget_CostSlotWrapper_C** CostSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetCrystalSlotUsable");

	UWidget_Overclock_C_SetCrystalSlotUsable_Params params;
	params.SlotIndex = SlotIndex;
	params.CostSlot = CostSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.IsCrystalSlotEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::IsCrystalSlotEnabled(int* SlotIndex, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.IsCrystalSlotEnabled");

	UWidget_Overclock_C_IsCrystalSlotEnabled_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function Widget_Overclock.Widget_Overclock_C.InitCostSlots
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_CostSlotWrapper_C** CostSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::InitCostSlots(int* idx, class UWidget_CostSlotWrapper_C** CostSlot, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.InitCostSlots");

	UWidget_Overclock_C_InitCostSlots_Params params;
	params.idx = idx;
	params.CostSlot = CostSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_Overclock.Widget_Overclock_C.SetActiveProgressbars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::SetActiveProgressbars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetActiveProgressbars");

	UWidget_Overclock_C_SetActiveProgressbars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.GetClampedSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ClampedOvercklock              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::GetClampedSliderValue(float* ClampedOvercklock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.GetClampedSliderValue");

	UWidget_Overclock_C_GetClampedSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedOvercklock != nullptr)
		*ClampedOvercklock = params.ClampedOvercklock;
}


// Function Widget_Overclock.Widget_Overclock_C.ScaleToOverclock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Normalized_Overclock           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scaled_Overclock               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::ScaleToOverclock(float* Normalized_Overclock, float* Scaled_Overclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.ScaleToOverclock");

	UWidget_Overclock_C_ScaleToOverclock_Params params;
	params.Normalized_Overclock = Normalized_Overclock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scaled_Overclock != nullptr)
		*Scaled_Overclock = params.Scaled_Overclock;
}


// Function Widget_Overclock.Widget_Overclock_C.NormalizeOverclock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         ScaledOverclock                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NormalizedOverclock            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::NormalizeOverclock(float* ScaledOverclock, float* NormalizedOverclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.NormalizeOverclock");

	UWidget_Overclock_C_NormalizeOverclock_Params params;
	params.ScaledOverclock = ScaledOverclock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedOverclock != nullptr)
		*NormalizedOverclock = params.NormalizedOverclock;
}


// Function Widget_Overclock.Widget_Overclock_C.GetPercentText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Overclock_C::GetPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.GetPercentText");

	UWidget_Overclock_C_GetPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.GetMAXColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Overclock_C::GetMAXColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.GetMAXColor");

	UWidget_Overclock_C_GetMAXColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.Get200%Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Overclock_C::Get200_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.Get200%Color");

	UWidget_Overclock_C_Get200_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.Get150%Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Overclock_C::Get150_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.Get150%Color");

	UWidget_Overclock_C_Get150_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.Get100%Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Overclock_C::Get100_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.Get100%Color");

	UWidget_Overclock_C_Get100_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.Get0%Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Overclock_C::Get0_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.Get0%Color");

	UWidget_Overclock_C_Get0_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Overclock.Widget_Overclock_C.SetBarValue
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::SetBarValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetBarValue");

	UWidget_Overclock_C_SetBarValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Overclock_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.Construct");

	UWidget_Overclock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetOvercklockAmountWithKnob
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::SetOvercklockAmountWithKnob(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetOvercklockAmountWithKnob");

	UWidget_Overclock_C_SetOvercklockAmountWithKnob_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetOverclockOnServer
// (BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::SetOverclockOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetOverclockOnServer");

	UWidget_Overclock_C_SetOverclockOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.Tick");

	UWidget_Overclock_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetupCostslots
// (BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::SetupCostslots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetupCostslots");

	UWidget_Overclock_C_SetupCostslots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Overclock_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Overclock_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__PercentText_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_Overclock_C::BndEvt__PercentText_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__PercentText_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__PercentText_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__PercentText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::BndEvt__PercentText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__PercentText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__PercentText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.OnPercentageTextConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::OnPercentageTextConfirmed(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.OnPercentageTextConfirmed");

	UWidget_Overclock_C_OnPercentageTextConfirmed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_Overclock_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.OnMouseEnter");

	UWidget_Overclock_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_Overclock_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.OnMouseLeave");

	UWidget_Overclock_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Overclock_C::BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.SetupOverclock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         OvecklockAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::SetupOverclock(float* OvecklockAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.SetupOverclock");

	UWidget_Overclock_C_SetupOverclock_Params params;
	params.OvecklockAmount = OvecklockAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.OnPotentialInventoryReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 replicationDetailActorOwner    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::OnPotentialInventoryReplicated(class AActor** replicationDetailActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.OnPotentialInventoryReplicated");

	UWidget_Overclock_C_OnPotentialInventoryReplicated_Params params;
	params.replicationDetailActorOwner = replicationDetailActorOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.BndEvt__mPartsPerMinutes_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::BndEvt__mPartsPerMinutes_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.BndEvt__mPartsPerMinutes_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_Overclock_C_BndEvt__mPartsPerMinutes_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.PreConstruct");

	UWidget_Overclock_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.ExecuteUbergraph_Widget_Overclock
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Overclock_C::ExecuteUbergraph_Widget_Overclock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.ExecuteUbergraph_Widget_Overclock");

	UWidget_Overclock_C_ExecuteUbergraph_Widget_Overclock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Overclock.Widget_Overclock_C.UpdateBarFill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Overclock_C::UpdateBarFill__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Overclock.Widget_Overclock_C.UpdateBarFill__DelegateSignature");

	UWidget_Overclock_C_UpdateBarFill__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

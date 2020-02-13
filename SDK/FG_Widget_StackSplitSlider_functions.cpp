// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_StackSplitSlider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ClampToValidRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWidget_StackSplitSlider_C::ClampToValidRange(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ClampToValidRange");

	UWidget_StackSplitSlider_C_ClampToValidRange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_StackSplitSlider_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnKeyUp");

	UWidget_StackSplitSlider_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SetSliderAfterText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDirection>*       LeftOrRight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::SetSliderAfterText(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod, TEnumAsByte<EDirection>* LeftOrRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SetSliderAfterText");

	UWidget_StackSplitSlider_C_SetSliderAfterText_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;
	params.LeftOrRight = LeftOrRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_StackSplitSlider_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateText");

	UWidget_StackSplitSlider_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SnapSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         NormalizedValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SnappedValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::SnapSliderValue(float* NormalizedValue, float* SnappedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SnapSliderValue");

	UWidget_StackSplitSlider_C_SnapSliderValue_Params params;
	params.NormalizedValue = NormalizedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SnappedValue != nullptr)
		*SnappedValue = params.SnappedValue;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_StackSplitSlider_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnPaint");

	UWidget_StackSplitSlider_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWidget_StackSplitSlider_C::UpdateSliderValue(struct FGeometry* MyGeometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateSliderValue");

	UWidget_StackSplitSlider_C_UpdateSliderValue_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetProgressBarPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_StackSplitSlider_C::GetProgressBarPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetProgressBarPercentage");

	UWidget_StackSplitSlider_C_GetProgressBarPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumInNewStackText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_StackSplitSlider_C::GetNumInNewStackText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumInNewStackText");

	UWidget_StackSplitSlider_C_GetNumInNewStackText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumLeft                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::GetNumLeftAtSlot(int* NumLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlot");

	UWidget_StackSplitSlider_C_GetNumLeftAtSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumLeft != nullptr)
		*NumLeft = params.NumLeft;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlotText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_StackSplitSlider_C::GetNumLeftAtSlotText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlotText");

	UWidget_StackSplitSlider_C_GetNumLeftAtSlotText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SplitResource
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StackSplitSlider_C::SplitResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SplitResource");

	UWidget_StackSplitSlider_C_SplitResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_StackSplitSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.Construct");

	UWidget_StackSplitSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UWidget_StackSplitSlider_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_StackSplitSlider_C::BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_StackSplitSlider_C_BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_StackSplitSlider_C::BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_StackSplitSlider_C_BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_StackSplitSlider_C_BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_StackSplitSlider_C_BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.CloseStackSplitSlider
// (BlueprintCallable, BlueprintEvent)

void UWidget_StackSplitSlider_C::CloseStackSplitSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.CloseStackSplitSlider");

	UWidget_StackSplitSlider_C_CloseStackSplitSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ExecuteUbergraph_Widget_StackSplitSlider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StackSplitSlider_C::ExecuteUbergraph_Widget_StackSplitSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ExecuteUbergraph_Widget_StackSplitSlider");

	UWidget_StackSplitSlider_C_ExecuteUbergraph_Widget_StackSplitSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

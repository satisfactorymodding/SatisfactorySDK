// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_OptionsSlider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionsSlider.Widget_OptionsSlider_C.UpdateSliderValue
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSlider_C::UpdateSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.UpdateSliderValue");

	UWidget_OptionsSlider_C_UpdateSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.HandleSlider
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSlider_C::HandleSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.HandleSlider");

	UWidget_OptionsSlider_C_HandleSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.SetupSlider
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSlider_C::SetupSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.SetupSlider");

	UWidget_OptionsSlider_C_SetupSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetDisplayValue
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DisplayValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::GetDisplayValue(float* DisplayValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetDisplayValue");

	UWidget_OptionsSlider_C_GetDisplayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayValue != nullptr)
		*DisplayValue = params.DisplayValue;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.SetNormalizedValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentUnadjustedValue         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::SetNormalizedValue(float* CurrentUnadjustedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.SetNormalizedValue");

	UWidget_OptionsSlider_C_SetNormalizedValue_Params params;
	params.CurrentUnadjustedValue = CurrentUnadjustedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetAdjustedValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AdjustedValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::GetAdjustedValue(float* AdjustedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetAdjustedValue");

	UWidget_OptionsSlider_C_GetAdjustedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustedValue != nullptr)
		*AdjustedValue = params.AdjustedValue;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.SetProgressBarPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::SetProgressBarPercentage(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.SetProgressBarPercentage");

	UWidget_OptionsSlider_C_SetProgressBarPercentage_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetProgressBarPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_OptionsSlider_C::GetProgressBarPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetProgressBarPercentage");

	UWidget_OptionsSlider_C_GetProgressBarPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetValueText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_OptionsSlider_C::GetValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetValueText");

	UWidget_OptionsSlider_C_GetValueText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnInitValueController
// (Event, Public, BlueprintEvent)

void UWidget_OptionsSlider_C::OnInitValueController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnInitValueController");

	UWidget_OptionsSlider_C_OnInitValueController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnRowUnhovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSlider_C::OnRowUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnRowUnhovered");

	UWidget_OptionsSlider_C_OnRowUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnRowHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSlider_C::OnRowHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnRowHovered");

	UWidget_OptionsSlider_C_OnRowHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWidget_OptionsSlider_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature");

	UWidget_OptionsSlider_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnOptionValueUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSlider_C::OnOptionValueUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.OnOptionValueUpdated");

	UWidget_OptionsSlider_C_OnOptionValueUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.ExecuteUbergraph_Widget_OptionsSlider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::ExecuteUbergraph_Widget_OptionsSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.ExecuteUbergraph_Widget_OptionsSlider");

	UWidget_OptionsSlider_C_ExecuteUbergraph_Widget_OptionsSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetNewValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsSlider_C::GetNewValue__DelegateSignature(float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSlider.Widget_OptionsSlider_C.GetNewValue__DelegateSignature");

	UWidget_OptionsSlider_C_GetNewValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

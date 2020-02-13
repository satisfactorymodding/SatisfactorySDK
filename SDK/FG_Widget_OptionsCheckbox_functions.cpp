// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_OptionsCheckbox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.HandleChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsCheckbox_C::HandleChecked(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.HandleChecked");

	UWidget_OptionsCheckbox_C_HandleChecked_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.UpdateCheckboxValue
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsCheckbox_C::UpdateCheckboxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.UpdateCheckboxValue");

	UWidget_OptionsCheckbox_C_UpdateCheckboxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.SetChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          mIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TriggerCheckedEvent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChecked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsCheckbox_C::SetChecked(bool* mIsChecked, bool* TriggerCheckedEvent, bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.SetChecked");

	UWidget_OptionsCheckbox_C_SetChecked_Params params;
	params.mIsChecked = mIsChecked;
	params.TriggerCheckedEvent = TriggerCheckedEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChecked != nullptr)
		*IsChecked = params.IsChecked;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UWidget_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnRowHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsCheckbox_C::OnRowHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnRowHovered");

	UWidget_OptionsCheckbox_C_OnRowHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnRowUnhovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsCheckbox_C::OnRowUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnRowUnhovered");

	UWidget_OptionsCheckbox_C_OnRowUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsCheckbox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.PreConstruct");

	UWidget_OptionsCheckbox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UWidget_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnInitValueController
// (Event, Public, BlueprintEvent)

void UWidget_OptionsCheckbox_C::OnInitValueController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnInitValueController");

	UWidget_OptionsCheckbox_C_OnInitValueController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UWidget_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnOptionValueUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsCheckbox_C::OnOptionValueUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnOptionValueUpdated");

	UWidget_OptionsCheckbox_C_OnOptionValueUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionsCheckbox_C::BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UWidget_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.ExecuteUbergraph_Widget_OptionsCheckbox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsCheckbox_C::ExecuteUbergraph_Widget_OptionsCheckbox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.ExecuteUbergraph_Widget_OptionsCheckbox");

	UWidget_OptionsCheckbox_C_ExecuteUbergraph_Widget_OptionsCheckbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnCheckChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionsCheckbox_C::OnCheckChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsCheckbox.Widget_OptionsCheckbox_C.OnCheckChanged__DelegateSignature");

	UWidget_OptionsCheckbox_C_OnCheckChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

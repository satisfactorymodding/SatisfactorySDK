// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_OptionSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionSelection.Widget_OptionSelection_C.HandleSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          incrementSelection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionSelection_C::HandleSelection(bool* incrementSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.HandleSelection");

	UWidget_OptionSelection_C_HandleSelection_Params params;
	params.incrementSelection = incrementSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.UpdateSelectionValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_OptionSelection_C::UpdateSelectionValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.UpdateSelectionValue");

	UWidget_OptionSelection_C_UpdateSelectionValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.GetHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_OptionSelection_C::GetHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.GetHoverColor");

	UWidget_OptionSelection_C_GetHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.GetOptionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_OptionSelection_C::GetOptionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.GetOptionName");

	UWidget_OptionSelection_C_GetOptionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionSelection_C::BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature");

	UWidget_OptionSelection_C_BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.OnRowHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionSelection_C::OnRowHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.OnRowHovered");

	UWidget_OptionSelection_C_OnRowHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.OnRowUnhovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionSelection_C::OnRowUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.OnRowUnhovered");

	UWidget_OptionSelection_C_OnRowUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionSelection_C::BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_OptionSelection_C_BndEvt__mButtonOptionRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.OnInitValueController
// (Event, Public, BlueprintEvent)

void UWidget_OptionSelection_C::OnInitValueController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.OnInitValueController");

	UWidget_OptionSelection_C_OnInitValueController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionSelection_C::BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_OptionSelection_C_BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.OnOptionValueUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionSelection_C::OnOptionValueUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.OnOptionValueUpdated");

	UWidget_OptionSelection_C_OnOptionValueUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_188_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_OptionSelection_C::BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_188_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_188_OnButtonClickedEvent__DelegateSignature");

	UWidget_OptionSelection_C_BndEvt__mButtonOptionLeft_K2Node_ComponentBoundEvent_188_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionSelection.Widget_OptionSelection_C.ExecuteUbergraph_Widget_OptionSelection
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionSelection_C::ExecuteUbergraph_Widget_OptionSelection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionSelection.Widget_OptionSelection_C.ExecuteUbergraph_Widget_OptionSelection");

	UWidget_OptionSelection_C_ExecuteUbergraph_Widget_OptionSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

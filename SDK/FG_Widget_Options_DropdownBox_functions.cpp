// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Options_DropdownBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.SetDropdownColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_DropdownBox_C::SetDropdownColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.SetDropdownColor");

	UWidget_Options_DropdownBox_C_SetDropdownColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.IsValidIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_DropdownBox_C::IsValidIndex(int* Index, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.IsValidIndex");

	UWidget_Options_DropdownBox_C_IsValidIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mDropDownButton_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Options_DropdownBox_C::BndEvt__mDropDownButton_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mDropDownButton_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature");

	UWidget_Options_DropdownBox_C_BndEvt__mDropDownButton_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Options_DropdownBox_C::BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");

	UWidget_Options_DropdownBox_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Options_DropdownBox_C::BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWidget_Options_DropdownBox_C_BndEvt__mFakeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_DropdownBox_C::BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UWidget_Options_DropdownBox_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_DropdownBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.PreConstruct");

	UWidget_Options_DropdownBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.OnRowHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_DropdownBox_C::OnRowHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.OnRowHovered");

	UWidget_Options_DropdownBox_C_OnRowHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.OnRowUnhovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_DropdownBox_C::OnRowUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.OnRowUnhovered");

	UWidget_Options_DropdownBox_C_OnRowUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.ExecuteUbergraph_Widget_Options_DropdownBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_DropdownBox_C::ExecuteUbergraph_Widget_Options_DropdownBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.ExecuteUbergraph_Widget_Options_DropdownBox");

	UWidget_Options_DropdownBox_C_ExecuteUbergraph_Widget_Options_DropdownBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.onSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 SelectedOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWidget_Options_DropdownBox_C::onSelectionChanged__DelegateSignature(class FString* SelectedOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options_DropdownBox.Widget_Options_DropdownBox_C.onSelectionChanged__DelegateSignature");

	UWidget_Options_DropdownBox_C_onSelectionChanged__DelegateSignature_Params params;
	params.SelectedOption = SelectedOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

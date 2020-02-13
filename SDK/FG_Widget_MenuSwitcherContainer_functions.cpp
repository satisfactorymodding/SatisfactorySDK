// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MenuSwitcherContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.GetFirstChildOfSwitcher
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           SwitcherWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Child                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_MenuSwitcherContainer_C::GetFirstChildOfSwitcher(class UPanelWidget** SwitcherWidget, class UWidget** Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.GetFirstChildOfSwitcher");

	UWidget_MenuSwitcherContainer_C_GetFirstChildOfSwitcher_Params params;
	params.SwitcherWidget = SwitcherWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Child != nullptr)
		*Child = params.Child;
}


// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetSwitcherWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*         Widget_Switcher                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_MenuSwitcherContainer_C::SetSwitcherWidget(class UWidgetSwitcher** Widget_Switcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetSwitcherWidget");

	UWidget_MenuSwitcherContainer_C_SetSwitcherWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Switcher != nullptr)
		*Widget_Switcher = params.Widget_Switcher;
}


// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetNoneActive
// (BlueprintCallable, BlueprintEvent)

void UWidget_MenuSwitcherContainer_C::SetNoneActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetNoneActive");

	UWidget_MenuSwitcherContainer_C_SetNoneActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_MenuSwitcherContainer_C::SetActiveWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetActiveWidget");

	UWidget_MenuSwitcherContainer_C_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWidget_MenuSwitcherContainer_C::WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1");

	UWidget_MenuSwitcherContainer_C_WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.ExecuteUbergraph_Widget_MenuSwitcherContainer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MenuSwitcherContainer_C::ExecuteUbergraph_Widget_MenuSwitcherContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.ExecuteUbergraph_Widget_MenuSwitcherContainer");

	UWidget_MenuSwitcherContainer_C_ExecuteUbergraph_Widget_MenuSwitcherContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.OnWidgetSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          mHasChangedActiveWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MenuSwitcherContainer_C::OnWidgetSet__DelegateSignature(bool* mHasChangedActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.OnWidgetSet__DelegateSignature");

	UWidget_MenuSwitcherContainer_C_OnWidgetSet__DelegateSignature_Params params;
	params.mHasChangedActiveWidget = mHasChangedActiveWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

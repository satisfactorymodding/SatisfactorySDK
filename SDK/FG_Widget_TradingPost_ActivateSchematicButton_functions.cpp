// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TradingPost_ActivateSchematicButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.SetSelectedSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 SelectedSchematic              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TradingPost_ActivateSchematicButton_C::SetSelectedSchematic(class UClass** SelectedSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.SetSelectedSchematic");

	UWidget_TradingPost_ActivateSchematicButton_C_SetSelectedSchematic_Params params;
	params.SelectedSchematic = SelectedSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.GetClickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_TradingPost_ActivateSchematicButton_C::GetClickable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.GetClickable");

	UWidget_TradingPost_ActivateSchematicButton_C_GetClickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_TradingPost_ActivateSchematicButton_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.GetText");

	UWidget_TradingPost_ActivateSchematicButton_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.GetColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_TradingPost_ActivateSchematicButton_C::GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.GetColor");

	UWidget_TradingPost_ActivateSchematicButton_C_GetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TradingPost_ActivateSchematicButton_C::BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UWidget_TradingPost_ActivateSchematicButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TradingPost_ActivateSchematicButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_TradingPost_ActivateSchematicButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TradingPost_ActivateSchematicButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_TradingPost_ActivateSchematicButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.ExecuteUbergraph_Widget_TradingPost_ActivateSchematicButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TradingPost_ActivateSchematicButton_C::ExecuteUbergraph_Widget_TradingPost_ActivateSchematicButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.ExecuteUbergraph_Widget_TradingPost_ActivateSchematicButton");

	UWidget_TradingPost_ActivateSchematicButton_C_ExecuteUbergraph_Widget_TradingPost_ActivateSchematicButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.onSchematicActivateButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_TradingPost_ActivateSchematicButton_C::onSchematicActivateButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_ActivateSchematicButton.Widget_TradingPost_ActivateSchematicButton_C.onSchematicActivateButtonClicked__DelegateSignature");

	UWidget_TradingPost_ActivateSchematicButton_C_onSchematicActivateButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

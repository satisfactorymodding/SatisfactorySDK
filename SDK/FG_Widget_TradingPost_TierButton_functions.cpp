// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TradingPost_TierButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.SetLockedText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TradingPost_TierButton_C::SetLockedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.SetLockedText");

	UWidget_TradingPost_TierButton_C_SetLockedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetTierNumVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_TradingPost_TierButton_C::GetTierNumVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetTierNumVisibility");

	UWidget_TradingPost_TierButton_C_GetTierNumVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetCheckVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_TradingPost_TierButton_C::GetCheckVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetCheckVisibility");

	UWidget_TradingPost_TierButton_C_GetCheckVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.isSelectable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isSelectable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_TradingPost_TierButton_C::isSelectable(bool* isSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.isSelectable");

	UWidget_TradingPost_TierButton_C_isSelectable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isSelectable != nullptr)
		*isSelectable = params.isSelectable;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetWidgetClickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_TradingPost_TierButton_C::GetWidgetClickable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetWidgetClickable");

	UWidget_TradingPost_TierButton_C_GetWidgetClickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetTextHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_TradingPost_TierButton_C::GetTextHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetTextHoverColor");

	UWidget_TradingPost_TierButton_C_GetTextHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetButtonColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_TradingPost_TierButton_C::GetButtonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetButtonColor");

	UWidget_TradingPost_TierButton_C_GetButtonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.UpdateTier
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TradingPost_TierButton_C::UpdateTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.UpdateTier");

	UWidget_TradingPost_TierButton_C_UpdateTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.SetTierNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TierNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_TradingPost_C**  Tradingpost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TradingPost_TierButton_C::SetTierNumber(int* TierNumber, class UWidget_TradingPost_C** Tradingpost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.SetTierNumber");

	UWidget_TradingPost_TierButton_C_SetTierNumber_Params params;
	params.TierNumber = TierNumber;
	params.Tradingpost = Tradingpost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TradingPost_TierButton_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UWidget_TradingPost_TierButton_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.ExecuteUbergraph_Widget_TradingPost_TierButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TradingPost_TierButton_C::ExecuteUbergraph_Widget_TradingPost_TierButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.ExecuteUbergraph_Widget_TradingPost_TierButton");

	UWidget_TradingPost_TierButton_C_ExecuteUbergraph_Widget_TradingPost_TierButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

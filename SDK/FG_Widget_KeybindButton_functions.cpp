// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_KeybindButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_KeybindButton.Widget_KeybindButton_C.UpdateKeyMapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_KeybindButton_C::UpdateKeyMapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.UpdateKeyMapping");

	UWidget_KeybindButton_C_UpdateKeyMapping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.RebindKey
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_KeybindButton_C::RebindKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.RebindKey");

	UWidget_KeybindButton_C_RebindKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.KeyBindingOverrideConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirmed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_KeybindButton_C::KeyBindingOverrideConfirmed(bool* confirmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.KeyBindingOverrideConfirmed");

	UWidget_KeybindButton_C_KeyBindingOverrideConfirmed_Params params;
	params.confirmed = confirmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.GetHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_KeybindButton_C::GetHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.GetHoverColor");

	UWidget_KeybindButton_C_GetHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.HandleInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputEvent*            InputEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKey*                   keyPressed                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_KeybindButton_C::HandleInput(struct FInputEvent* InputEvent, struct FKey* keyPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.HandleInput");

	UWidget_KeybindButton_C_HandleInput_Params params;
	params.InputEvent = InputEvent;
	params.keyPressed = keyPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_KeybindButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.Construct");

	UWidget_KeybindButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_KeybindButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UWidget_KeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_KeybindButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UWidget_KeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_KeybindButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_KeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.ShowKeyBindWidget
// (BlueprintCallable, BlueprintEvent)

void UWidget_KeybindButton_C::ShowKeyBindWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.ShowKeyBindWidget");

	UWidget_KeybindButton_C_ShowKeyBindWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindButton.Widget_KeybindButton_C.ExecuteUbergraph_Widget_KeybindButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_KeybindButton_C::ExecuteUbergraph_Widget_KeybindButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindButton.Widget_KeybindButton_C.ExecuteUbergraph_Widget_KeybindButton");

	UWidget_KeybindButton_C_ExecuteUbergraph_Widget_KeybindButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

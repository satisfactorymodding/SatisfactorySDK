// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_StandardButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StandardButton.Widget_StandardButton_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StandardButton_C::SetIconSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.SetIconSize");

	UWidget_StandardButton_C_SetIconSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.SetIconBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush*            mIconBrush                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_StandardButton_C::SetIconBrush(struct FSlateBrush* mIconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.SetIconBrush");

	UWidget_StandardButton_C_SetIconBrush_Params params;
	params.mIconBrush = mIconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mText                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_StandardButton_C::SetText(struct FText* mText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.SetText");

	UWidget_StandardButton_C_SetText_Params params;
	params.mText = mText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.SetFocused
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StandardButton_C::SetFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.SetFocused");

	UWidget_StandardButton_C_SetFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.PreConstruct");

	UWidget_StandardButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__MarkAsReadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_StandardButton_C::BndEvt__MarkAsReadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__MarkAsReadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_StandardButton_C_BndEvt__MarkAsReadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_StandardButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_StandardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.ExecuteUbergraph_Widget_StandardButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_C::ExecuteUbergraph_Widget_StandardButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.ExecuteUbergraph_Widget_StandardButton");

	UWidget_StandardButton_C_ExecuteUbergraph_Widget_StandardButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton.Widget_StandardButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_StandardButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton.Widget_StandardButton_C.OnClicked__DelegateSignature");

	UWidget_StandardButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

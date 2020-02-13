// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SaveInputBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SaveInputBox.Widget_SaveInputBox_C.SetButtonColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_SaveInputBox_C::SetButtonColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.SetButtonColor");

	UWidget_SaveInputBox_C_SetButtonColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SaveInputBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.Construct");

	UWidget_SaveInputBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_SaveInputBox_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_SaveInputBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_SaveInputBox_C::BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWidget_SaveInputBox_C_BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SaveInputBox_C::BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWidget_SaveInputBox_C_BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.CheckUserFocus
// (BlueprintCallable, BlueprintEvent)

void UWidget_SaveInputBox_C::CheckUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.CheckUserFocus");

	UWidget_SaveInputBox_C_CheckUserFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SaveInputBox_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.Destruct");

	UWidget_SaveInputBox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.ExecuteUbergraph_Widget_SaveInputBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SaveInputBox_C::ExecuteUbergraph_Widget_SaveInputBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.ExecuteUbergraph_Widget_SaveInputBox");

	UWidget_SaveInputBox_C_ExecuteUbergraph_Widget_SaveInputBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_SaveInputBox_C::OnUnfocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnUnfocused__DelegateSignature");

	UWidget_SaveInputBox_C_OnUnfocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_SaveInputBox_C::OnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnFocused__DelegateSignature");

	UWidget_SaveInputBox_C_OnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnTextCommited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SaveInputBox_C::OnTextCommited__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnTextCommited__DelegateSignature");

	UWidget_SaveInputBox_C_OnTextCommited__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnTextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_SaveInputBox_C::OnTextChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnTextChanged__DelegateSignature");

	UWidget_SaveInputBox_C_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

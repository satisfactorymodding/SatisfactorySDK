// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ShoppingListButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_ShoppingListButton_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnKeyDown");

	UWidget_ShoppingListButton_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetMinusVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ShoppingListButton_C::GetMinusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetMinusVisibility");

	UWidget_ShoppingListButton_C_GetMinusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputNumberTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_ShoppingListButton_C::GetInputNumberTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputNumberTooltip");

	UWidget_ShoppingListButton_C_GetInputNumberTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetButtonTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_ShoppingListButton_C::GetButtonTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetButtonTooltip");

	UWidget_ShoppingListButton_C_GetButtonTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputTextfieldVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ShoppingListButton_C::GetInputTextfieldVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputTextfieldVisibility");

	UWidget_ShoppingListButton_C_GetInputTextfieldVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetAmountText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_ShoppingListButton_C::SetAmountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetAmountText");

	UWidget_ShoppingListButton_C_SetAmountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetHoverVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ShoppingListButton_C::GetHoverVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetHoverVisibility");

	UWidget_ShoppingListButton_C_GetHoverVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumberRecipes                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_ShoppingListButton_C::GetAmount(int* NumberRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmount");

	UWidget_ShoppingListButton_C_GetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberRecipes != nullptr)
		*NumberRecipes = params.NumberRecipes;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmountRecipesInListColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_ShoppingListButton_C::GetAmountRecipesInListColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmountRecipesInListColor");

	UWidget_ShoppingListButton_C_GetAmountRecipesInListColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_ShoppingListButton_C::BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWidget_ShoppingListButton_C_BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ShoppingListButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Construct");

	UWidget_ShoppingListButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_ShoppingListButton_C::BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ShoppingListButton_C_BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ShoppingListButton_C::BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWidget_ShoppingListButton_C_BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.ExecuteUbergraph_Widget_ShoppingListButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ShoppingListButton_C::ExecuteUbergraph_Widget_ShoppingListButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.ExecuteUbergraph_Widget_ShoppingListButton");

	UWidget_ShoppingListButton_C_ExecuteUbergraph_Widget_ShoppingListButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShortcutRemapClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           shortcutIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 newRecipe                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ShoppingListButton_C::OnShortcutRemapClicked__DelegateSignature(int* shortcutIndex, class UClass** newRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShortcutRemapClicked__DelegateSignature");

	UWidget_ShoppingListButton_C_OnShortcutRemapClicked__DelegateSignature_Params params;
	params.shortcutIndex = shortcutIndex;
	params.newRecipe = newRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

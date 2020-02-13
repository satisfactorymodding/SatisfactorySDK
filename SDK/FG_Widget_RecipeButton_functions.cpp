// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RecipeButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RecipeButton.Widget_RecipeButton_C.ClearButtonSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::ClearButtonSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.ClearButtonSelection");

	UWidget_RecipeButton_C_ClearButtonSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetCustomTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_RecipeButton_C::GetCustomTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetCustomTooltip");

	UWidget_RecipeButton_C_GetCustomTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetRightClickMenuVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_RecipeButton_C::GetRightClickMenuVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetRightClickMenuVisibility");

	UWidget_RecipeButton_C_GetRightClickMenuVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.CreateRightClickMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_RecipeButton_C::CreateRightClickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.CreateRightClickMenu");

	UWidget_RecipeButton_C_CreateRightClickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetButtonHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_RecipeButton_C::GetButtonHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetButtonHoverColor");

	UWidget_RecipeButton_C_GetButtonHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetTextHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_RecipeButton_C::GetTextHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetTextHoverColor");

	UWidget_RecipeButton_C_GetTextHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.IsButtonEnabled
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_RecipeButton_C::IsButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.IsButtonEnabled");

	UWidget_RecipeButton_C_IsButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduce
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_RecipeButton_C::GetNumCanProduce(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduce");

	UWidget_RecipeButton_C_GetNumCanProduce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduceVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_RecipeButton_C::GetNumCanProduceVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduceVisibility");

	UWidget_RecipeButton_C_GetNumCanProduceVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduceText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_RecipeButton_C::GetNumCanProduceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduceText");

	UWidget_RecipeButton_C_GetNumCanProduceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.CheckIngredients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::CheckIngredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.CheckIngredients");

	UWidget_RecipeButton_C_CheckIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetRecipeIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_RecipeButton_C::GetRecipeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetRecipeIcon");

	UWidget_RecipeButton_C_GetRecipeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetIconColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_RecipeButton_C::GetIconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetIconColor");

	UWidget_RecipeButton_C_GetIconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_RecipeButton_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.OnMouseButtonDown");

	UWidget_RecipeButton_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.GetRecipeDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_RecipeButton_C::GetRecipeDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.GetRecipeDisplayName");

	UWidget_RecipeButton_C_GetRecipeDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RecipeButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.Construct");

	UWidget_RecipeButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RecipeButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.Tick");

	UWidget_RecipeButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.OnClicked
// (BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.OnClicked");

	UWidget_RecipeButton_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.OnHovered
// (BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.OnHovered");

	UWidget_RecipeButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.OnPressed
// (BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::OnPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.OnPressed");

	UWidget_RecipeButton_C_OnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_RecipeButton_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.OnMouseLeave");

	UWidget_RecipeButton_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.UpdateWindowWidgetOffset_Event
// (BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::UpdateWindowWidgetOffset_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.UpdateWindowWidgetOffset_Event");

	UWidget_RecipeButton_C_UpdateWindowWidgetOffset_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   ListButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_RecipeButton_C::BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int* Index, class UWidget_ListButton_C** ListButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_RecipeButton_C_BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;
	params.ListButton = ListButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.ExecuteUbergraph_Widget_RecipeButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RecipeButton_C::ExecuteUbergraph_Widget_RecipeButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.ExecuteUbergraph_Widget_RecipeButton");

	UWidget_RecipeButton_C_ExecuteUbergraph_Widget_RecipeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.OnRecipeButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_RecipeButton_C** ClickedButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_RecipeButton_C::OnRecipeButtonClicked__DelegateSignature(class UWidget_RecipeButton_C** ClickedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.OnRecipeButtonClicked__DelegateSignature");

	UWidget_RecipeButton_C_OnRecipeButtonClicked__DelegateSignature_Params params;
	params.ClickedButton = ClickedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeButton.Widget_RecipeButton_C.UpdateWindowWidgetOffset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_RecipeButton_C::UpdateWindowWidgetOffset__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeButton.Widget_RecipeButton_C.UpdateWindowWidgetOffset__DelegateSignature");

	UWidget_RecipeButton_C_UpdateWindowWidgetOffset__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_BuildMenuRecipeButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetFontScaleForLanguage
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::SetFontScaleForLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetFontScaleForLanguage");

	UWidget_BuildMenuRecipeButton_C_SetFontScaleForLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.UpdateNewItemOverlayVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::UpdateNewItemOverlayVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.UpdateNewItemOverlayVisibility");

	UWidget_BuildMenuRecipeButton_C_UpdateNewItemOverlayVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_BuildMenuRecipeButton_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnKeyDown");

	UWidget_BuildMenuRecipeButton_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRightClickMenuVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_BuildMenuRecipeButton_C::GetRightClickMenuVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRightClickMenuVisibility");

	UWidget_BuildMenuRecipeButton_C_GetRightClickMenuVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateRightClickMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_BuildMenuRecipeButton_C::CreateRightClickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateRightClickMenu");

	UWidget_BuildMenuRecipeButton_C_CreateRightClickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_BuildMenuRecipeButton_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnMouseButtonDown");

	UWidget_BuildMenuRecipeButton_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetTextHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_BuildMenuRecipeButton_C::GetTextHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetTextHoverColor");

	UWidget_BuildMenuRecipeButton_C_GetTextHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetGraphicsHoverColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_BuildMenuRecipeButton_C::GetGraphicsHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetGraphicsHoverColor");

	UWidget_BuildMenuRecipeButton_C_GetGraphicsHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ResolveHotkeyIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::ResolveHotkeyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ResolveHotkeyIndex");

	UWidget_BuildMenuRecipeButton_C_ResolveHotkeyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateShoppingListButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::CreateShoppingListButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateShoppingListButtons");

	UWidget_BuildMenuRecipeButton_C_CreateShoppingListButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetBuildingIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::GetBuildingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetBuildingIcon");

	UWidget_BuildMenuRecipeButton_C_GetBuildingIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_BuildMenuRecipeButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnFocusReceived");

	UWidget_BuildMenuRecipeButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRecipeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::GetRecipeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRecipeName");

	UWidget_BuildMenuRecipeButton_C_GetRecipeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.Construct");

	UWidget_BuildMenuRecipeButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");

	UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature");

	UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnHovered
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::SimulateOnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnHovered");

	UWidget_BuildMenuRecipeButton_C_SimulateOnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuildMenuRecipeButton_C::SimulateOnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnUnhovered");

	UWidget_BuildMenuRecipeButton_C_SimulateOnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BuildMenuRecipeButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PreConstruct");

	UWidget_BuildMenuRecipeButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ExecuteUbergraph_Widget_BuildMenuRecipeButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BuildMenuRecipeButton_C::ExecuteUbergraph_Widget_BuildMenuRecipeButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ExecuteUbergraph_Widget_BuildMenuRecipeButton");

	UWidget_BuildMenuRecipeButton_C_ExecuteUbergraph_Widget_BuildMenuRecipeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnStopHoveringRecipe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_BuildMenuRecipeButton_C** RecipeButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_BuildMenuRecipeButton_C::OnStopHoveringRecipe__DelegateSignature(class UClass** Recipe, class UWidget_BuildMenuRecipeButton_C** RecipeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnStopHoveringRecipe__DelegateSignature");

	UWidget_BuildMenuRecipeButton_C_OnStopHoveringRecipe__DelegateSignature_Params params;
	params.Recipe = Recipe;
	params.RecipeButton = RecipeButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 RecipeHover                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_BuildMenuRecipeButton_C** RecipeButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_BuildMenuRecipeButton_C::OnRecipeHovered__DelegateSignature(class UClass** RecipeHover, class UWidget_BuildMenuRecipeButton_C** RecipeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeHovered__DelegateSignature");

	UWidget_BuildMenuRecipeButton_C_OnRecipeHovered__DelegateSignature_Params params;
	params.RecipeHover = RecipeHover;
	params.RecipeButton = RecipeButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BuildMenuRecipeButton_C::OnRecipeClicked__DelegateSignature(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeClicked__DelegateSignature");

	UWidget_BuildMenuRecipeButton_C_OnRecipeClicked__DelegateSignature_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

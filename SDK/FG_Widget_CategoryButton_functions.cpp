// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_CategoryButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_CategoryButton.Widget_CategoryButton_C.SetAsSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CategoryButton_C::SetAsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.SetAsSelected");

	UWidget_CategoryButton_C_SetAsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.UnselectOtherCategoryButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CategoryButton_C::UnselectOtherCategoryButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.UnselectOtherCategoryButtons");

	UWidget_CategoryButton_C_UnselectOtherCategoryButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             mIcon                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CategoryButton_C::SetCategoryIcon(class UTexture2D** mIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryIcon");

	UWidget_CategoryButton_C_SetCategoryIcon_Params params;
	params.mIcon = mIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mName                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_CategoryButton_C::SetCategoryName(struct FText* mName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryName");

	UWidget_CategoryButton_C_SetCategoryName_Params params;
	params.mName = mName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.UpdateButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_CategoryButton_C::UpdateButtonStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.UpdateButtonStyle");

	UWidget_CategoryButton_C_UpdateButtonStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_CategoryButton_C::BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UWidget_CategoryButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_CategoryButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_CategoryButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_CategoryButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_CategoryButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_CategoryButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.Construct");

	UWidget_CategoryButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.ExecuteUbergraph_Widget_CategoryButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CategoryButton_C::ExecuteUbergraph_Widget_CategoryButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.ExecuteUbergraph_Widget_CategoryButton");

	UWidget_CategoryButton_C_ExecuteUbergraph_Widget_CategoryButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CategoryButton.Widget_CategoryButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CategoryButton_C::OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CategoryButton.Widget_CategoryButton_C.OnClicked__DelegateSignature");

	UWidget_CategoryButton_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

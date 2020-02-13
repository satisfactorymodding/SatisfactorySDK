// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ManufacturingButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetByProductIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManufacturingButton_C::GetByProductIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetByProductIcon");

	UWidget_ManufacturingButton_C_GetByProductIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.UpdateButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManufacturingButton_C::UpdateButtonStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.UpdateButtonStyle");

	UWidget_ManufacturingButton_C_UpdateButtonStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.CheckIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           mIsSelected                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::CheckIsSelected(bool* mIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.CheckIsSelected");

	UWidget_ManufacturingButton_C_CheckIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mIsSelected != nullptr)
		*mIsSelected = params.mIsSelected;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManufacturingButton_C::GetRecipeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeName");

	UWidget_ManufacturingButton_C_GetRecipeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManufacturingButton_C::GetRecipeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIcon");

	UWidget_ManufacturingButton_C_GetRecipeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_ManufacturingButton_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnMouseButtonDown");

	UWidget_ManufacturingButton_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_ManufacturingButton_C::BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_ManufacturingButton_C::BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_ManufacturingButton_C::BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ManufacturingButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Construct");

	UWidget_ManufacturingButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.PreConstruct");

	UWidget_ManufacturingButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ManufacturingButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Destruct");

	UWidget_ManufacturingButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.ExecuteUbergraph_Widget_ManufacturingButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::ExecuteUbergraph_Widget_ManufacturingButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.ExecuteUbergraph_Widget_ManufacturingButton");

	UWidget_ManufacturingButton_C_ExecuteUbergraph_Widget_ManufacturingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnStopHoveringManufacturingRecipe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 UnhoveredRecipe                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::OnStopHoveringManufacturingRecipe__DelegateSignature(class UClass** UnhoveredRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnStopHoveringManufacturingRecipe__DelegateSignature");

	UWidget_ManufacturingButton_C_OnStopHoveringManufacturingRecipe__DelegateSignature_Params params;
	params.UnhoveredRecipe = UnhoveredRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 RecipeHover                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::OnManufacturingRecipeHovered__DelegateSignature(class UClass** RecipeHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeHovered__DelegateSignature");

	UWidget_ManufacturingButton_C_OnManufacturingRecipeHovered__DelegateSignature_Params params;
	params.RecipeHover = RecipeHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::OnManufacturingRecipeClicked__DelegateSignature(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeClicked__DelegateSignature");

	UWidget_ManufacturingButton_C_OnManufacturingRecipeClicked__DelegateSignature_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

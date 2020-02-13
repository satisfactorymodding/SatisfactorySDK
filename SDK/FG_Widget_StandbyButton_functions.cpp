// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_StandbyButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StandbyButton.Widget_StandbyButton_C.SetIsProductionPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandbyButton_C::SetIsProductionPaused(bool* IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.SetIsProductionPaused");

	UWidget_StandbyButton_C_SetIsProductionPaused_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_StandbyButton_C::BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_StandbyButton_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.SetStandbyButtonBrush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          productionIsPaused             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandbyButton_C::SetStandbyButtonBrush(bool* productionIsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.SetStandbyButtonBrush");

	UWidget_StandbyButton_C_SetStandbyButtonBrush_Params params;
	params.productionIsPaused = productionIsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_StandbyButton_C::BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_StandbyButton_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_StandbyButton_C::BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_StandbyButton_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandbyButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.PreConstruct");

	UWidget_StandbyButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_StandbyButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.Construct");

	UWidget_StandbyButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.ExecuteUbergraph_Widget_StandbyButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandbyButton_C::ExecuteUbergraph_Widget_StandbyButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.ExecuteUbergraph_Widget_StandbyButton");

	UWidget_StandbyButton_C_ExecuteUbergraph_Widget_StandbyButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandbyButton.Widget_StandbyButton_C.OnStandbyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_StandbyButton_C::OnStandbyClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandbyButton.Widget_StandbyButton_C.OnStandbyClicked__DelegateSignature");

	UWidget_StandbyButton_C_OnStandbyClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TrainButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TrainButton.Widget_TrainButton_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mTitle                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TrainButton_C::SetTitle(struct FText* mTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.SetTitle");

	UWidget_TrainButton_C_SetTitle_Params params;
	params.mTitle = mTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.PreConstruct");

	UWidget_TrainButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TrainButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_TrainButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TrainButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.Construct");

	UWidget_TrainButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.CheckNextStop
// (BlueprintCallable, BlueprintEvent)

void UWidget_TrainButton_C::CheckNextStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.CheckNextStop");

	UWidget_TrainButton_C_CheckNextStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TrainButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.Destruct");

	UWidget_TrainButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TrainButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_TrainButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_TrainButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_TrainButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.ExecuteUbergraph_Widget_TrainButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainButton_C::ExecuteUbergraph_Widget_TrainButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.ExecuteUbergraph_Widget_TrainButton");

	UWidget_TrainButton_C_ExecuteUbergraph_Widget_TrainButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainButton.Widget_TrainButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_TrainButton_C**  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TrainButton_C::OnClicked__DelegateSignature(class UWidget_TrainButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainButton.Widget_TrainButton_C.OnClicked__DelegateSignature");

	UWidget_TrainButton_C_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

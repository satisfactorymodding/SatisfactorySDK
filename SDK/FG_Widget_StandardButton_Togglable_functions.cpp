// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_StandardButton_Togglable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.SetButtonState
// ()
// Parameters:
// bool                           mIsTrue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_Togglable_C::SetButtonState(bool mIsTrue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.SetButtonState");

	UWidget_StandardButton_Togglable_C_SetButtonState_Params params;
	params.mIsTrue = mIsTrue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.PreConstruct
// ()
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_Togglable_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.PreConstruct");

	UWidget_StandardButton_Togglable_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.Init
// ()
// Parameters:
// bool                           mIsTrue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_Togglable_C::Init(bool mIsTrue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.Init");

	UWidget_StandardButton_Togglable_C_Init_Params params;
	params.mIsTrue = mIsTrue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// ()

void UWidget_StandardButton_Togglable_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_StandardButton_Togglable_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.ExecuteUbergraph_Widget_StandardButton_Togglable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_Togglable_C::ExecuteUbergraph_Widget_StandardButton_Togglable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.ExecuteUbergraph_Widget_StandardButton_Togglable");

	UWidget_StandardButton_Togglable_C_ExecuteUbergraph_Widget_StandardButton_Togglable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.OnStateChanged__DelegateSignature
// ()
// Parameters:
// bool                           IsTrue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_StandardButton_Togglable_C::OnStateChanged__DelegateSignature(bool IsTrue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C.OnStateChanged__DelegateSignature");

	UWidget_StandardButton_Togglable_C_OnStateChanged__DelegateSignature_Params params;
	params.IsTrue = IsTrue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_DarkButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_DarkButton.BPW_DarkButton_C.SetIsSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          mIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DarkButton_C::SetIsSelected(bool* mIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DarkButton.BPW_DarkButton_C.SetIsSelected");

	UBPW_DarkButton_C_SetIsSelected_Params params;
	params.mIsSelected = mIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DarkButton.BPW_DarkButton_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mText                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_DarkButton_C::SetText(struct FText* mText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DarkButton.BPW_DarkButton_C.SetText");

	UBPW_DarkButton_C_SetText_Params params;
	params.mText = mText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DarkButton.BPW_DarkButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DarkButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DarkButton.BPW_DarkButton_C.PreConstruct");

	UBPW_DarkButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DarkButton.BPW_DarkButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DarkButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DarkButton.BPW_DarkButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBPW_DarkButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DarkButton.BPW_DarkButton_C.ExecuteUbergraph_BPW_DarkButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DarkButton_C::ExecuteUbergraph_BPW_DarkButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DarkButton.BPW_DarkButton_C.ExecuteUbergraph_BPW_DarkButton");

	UBPW_DarkButton_C_ExecuteUbergraph_BPW_DarkButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DarkButton.BPW_DarkButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_DarkButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DarkButton.BPW_DarkButton_C.OnClicked__DelegateSignature");

	UBPW_DarkButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

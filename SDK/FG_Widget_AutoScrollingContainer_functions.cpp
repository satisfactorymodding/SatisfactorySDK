// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_AutoScrollingContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StopAutoScroll
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_AutoScrollingContainer_C::StopAutoScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StopAutoScroll");

	UWidget_AutoScrollingContainer_C_StopAutoScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StartAutoScroll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_AutoScrollingContainer_C::StartAutoScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StartAutoScroll");

	UWidget_AutoScrollingContainer_C_StartAutoScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.AutoScroll
// (BlueprintCallable, BlueprintEvent)

void UWidget_AutoScrollingContainer_C::AutoScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.AutoScroll");

	UWidget_AutoScrollingContainer_C_AutoScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_AutoScrollingContainer_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_AutoScrollingContainer_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_AutoScrollingContainer_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_AutoScrollingContainer_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_AutoScrollingContainer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.PreConstruct");

	UWidget_AutoScrollingContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.DelayedStartAutoScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds_Delayed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_AutoScrollingContainer_C::DelayedStartAutoScroll(float* Seconds_Delayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.DelayedStartAutoScroll");

	UWidget_AutoScrollingContainer_C_DelayedStartAutoScroll_Params params;
	params.Seconds_Delayed = Seconds_Delayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.ExecuteUbergraph_Widget_AutoScrollingContainer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_AutoScrollingContainer_C::ExecuteUbergraph_Widget_AutoScrollingContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.ExecuteUbergraph_Widget_AutoScrollingContainer");

	UWidget_AutoScrollingContainer_C_ExecuteUbergraph_Widget_AutoScrollingContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

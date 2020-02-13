// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SwitchingImage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SwitchingImage.Widget_SwitchingImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SwitchingImage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SwitchingImage.Widget_SwitchingImage_C.PreConstruct");

	UWidget_SwitchingImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SwitchingImage.Widget_SwitchingImage_C.EventImageSwitch
// (BlueprintCallable, BlueprintEvent)

void UWidget_SwitchingImage_C::EventImageSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SwitchingImage.Widget_SwitchingImage_C.EventImageSwitch");

	UWidget_SwitchingImage_C_EventImageSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SwitchingImage.Widget_SwitchingImage_C.SwitchImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               newTexture                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SwitchingImage_C::SwitchImage(class UTexture** newTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SwitchingImage.Widget_SwitchingImage_C.SwitchImage");

	UWidget_SwitchingImage_C_SwitchImage_Params params;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SwitchingImage.Widget_SwitchingImage_C.WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWidget_SwitchingImage_C::WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SwitchingImage.Widget_SwitchingImage_C.WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1");

	UWidget_SwitchingImage_C_WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SwitchingImage.Widget_SwitchingImage_C.ExecuteUbergraph_Widget_SwitchingImage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SwitchingImage_C::ExecuteUbergraph_Widget_SwitchingImage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SwitchingImage.Widget_SwitchingImage_C.ExecuteUbergraph_Widget_SwitchingImage");

	UWidget_SwitchingImage_C_ExecuteUbergraph_Widget_SwitchingImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SwitchingImage.Widget_SwitchingImage_C.OnSwitchAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_SwitchingImage_C::OnSwitchAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SwitchingImage.Widget_SwitchingImage_C.OnSwitchAnimationFinished__DelegateSignature");

	UWidget_SwitchingImage_C_OnSwitchAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

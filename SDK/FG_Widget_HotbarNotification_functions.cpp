// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_HotbarNotification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_HotbarNotification.Widget_HotbarNotification_C.GetDarkGrayColour
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_HotbarNotification_C::GetDarkGrayColour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.GetDarkGrayColour");

	UWidget_HotbarNotification_C_GetDarkGrayColour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWidget_HotbarNotification_C::WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1");

	UWidget_HotbarNotification_C_WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UWidget_HotbarNotification_C::WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2");

	UWidget_HotbarNotification_C_WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HotbarNotification.Widget_HotbarNotification_C.ExecuteUbergraph_Widget_HotbarNotification
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_HotbarNotification_C::ExecuteUbergraph_Widget_HotbarNotification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.ExecuteUbergraph_Widget_HotbarNotification");

	UWidget_HotbarNotification_C_ExecuteUbergraph_Widget_HotbarNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

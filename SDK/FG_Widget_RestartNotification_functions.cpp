// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RestartNotification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RestartNotification.Widget_RestartNotification_C.GetTimeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         timeToRestart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWidget_RestartNotification_C::GetTimeText(float* timeToRestart, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RestartNotification.Widget_RestartNotification_C.GetTimeText");

	UWidget_RestartNotification_C_GetTimeText_Params params;
	params.timeToRestart = timeToRestart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function Widget_RestartNotification.Widget_RestartNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RestartNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RestartNotification.Widget_RestartNotification_C.Construct");

	UWidget_RestartNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RestartNotification.Widget_RestartNotification_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RestartNotification_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RestartNotification.Widget_RestartNotification_C.Destruct");

	UWidget_RestartNotification_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RestartNotification.Widget_RestartNotification_C.OnTimeLeftUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RestartNotification_C::OnTimeLeftUpdated(float* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RestartNotification.Widget_RestartNotification_C.OnTimeLeftUpdated");

	UWidget_RestartNotification_C_OnTimeLeftUpdated_Params params;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RestartNotification.Widget_RestartNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RestartNotification_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RestartNotification.Widget_RestartNotification_C.PreConstruct");

	UWidget_RestartNotification_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RestartNotification.Widget_RestartNotification_C.ExecuteUbergraph_Widget_RestartNotification
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RestartNotification_C::ExecuteUbergraph_Widget_RestartNotification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RestartNotification.Widget_RestartNotification_C.ExecuteUbergraph_Widget_RestartNotification");

	UWidget_RestartNotification_C_ExecuteUbergraph_Widget_RestartNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

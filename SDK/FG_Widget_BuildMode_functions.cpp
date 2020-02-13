// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_BuildMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuildMode.Widget_BuildMode_C.UpdateHintVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMode_C::UpdateHintVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.UpdateHintVisibility");

	UWidget_BuildMode_C_UpdateHintVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.CheckHologramState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_BuildMode_C::CheckHologramState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.CheckHologramState");

	UWidget_BuildMode_C_CheckHologramState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMode.Widget_BuildMode_C.GetBuildDisqualifiersVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_BuildMode_C::GetBuildDisqualifiersVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.GetBuildDisqualifiersVisibility");

	UWidget_BuildMode_C_GetBuildDisqualifiersVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMode.Widget_BuildMode_C.GetBuildDisqualifiersText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuildMode_C::GetBuildDisqualifiersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.GetBuildDisqualifiersText");

	UWidget_BuildMode_C_GetBuildDisqualifiersText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMode.Widget_BuildMode_C.UpdateCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMode_C::UpdateCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.UpdateCost");

	UWidget_BuildMode_C_UpdateCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.CreateCostSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMode_C::CreateCostSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.CreateCostSlots");

	UWidget_BuildMode_C_CreateCostSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_BuildMode_C::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.GetTextColor");

	UWidget_BuildMode_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMode.Widget_BuildMode_C.OnEscapePressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuildMode_C::OnEscapePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnEscapePressed");

	UWidget_BuildMode_C_OnEscapePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BuildMode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.Construct");

	UWidget_BuildMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.PlayDismantleAnimation
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuildMode_C::PlayDismantleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.PlayDismantleAnimation");

	UWidget_BuildMode_C_PlayDismantleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.StopDismantleAnimation
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuildMode_C::StopDismantleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.StopDismantleAnimation");

	UWidget_BuildMode_C_StopDismantleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.OnCustomTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         UpdateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BuildMode_C::OnCustomTick(float* UpdateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnCustomTick");

	UWidget_BuildMode_C_OnCustomTick_Params params;
	params.UpdateTime = UpdateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.PlayOnSplineModeChangedAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EHologramSplinePathMode*       newSplineMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BuildMode_C::PlayOnSplineModeChangedAnimation(EHologramSplinePathMode* newSplineMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.PlayOnSplineModeChangedAnimation");

	UWidget_BuildMode_C_PlayOnSplineModeChangedAnimation_Params params;
	params.newSplineMode = newSplineMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuildMode.Widget_BuildMode_C.ExecuteUbergraph_Widget_BuildMode
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BuildMode_C::ExecuteUbergraph_Widget_BuildMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.ExecuteUbergraph_Widget_BuildMode");

	UWidget_BuildMode_C_ExecuteUbergraph_Widget_BuildMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

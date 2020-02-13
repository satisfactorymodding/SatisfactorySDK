// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DismantleMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DismantleMode.Widget_DismantleMode_C.UpdateMassDismantleFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DismantleMode_C::UpdateMassDismantleFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.UpdateMassDismantleFeedback");

	UWidget_DismantleMode_C_UpdateMassDismantleFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleFeedbackVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DismantleMode_C::SetDismantleFeedbackVisibility(bool* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleFeedbackVisibility");

	UWidget_DismantleMode_C_SetDismantleFeedbackVisibility_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.GetReticleVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_DismantleMode_C::GetReticleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.GetReticleVisibility");

	UWidget_DismantleMode_C_GetReticleVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleRefunds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DismantleMode_C::SetDismantleRefunds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.SetDismantleRefunds");

	UWidget_DismantleMode_C_SetDismantleRefunds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.OnEscapePressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_DismantleMode_C::OnEscapePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.OnEscapePressed");

	UWidget_DismantleMode_C_OnEscapePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_DismantleMode_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Init");

	UWidget_DismantleMode_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DismantleMode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Construct");

	UWidget_DismantleMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.OnDismantleRefundChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGBuildGunStateDismantle** dismantleGun                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DismantleMode_C::OnDismantleRefundChanged(class UFGBuildGunStateDismantle** dismantleGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.OnDismantleRefundChanged");

	UWidget_DismantleMode_C_OnDismantleRefundChanged_Params params;
	params.dismantleGun = dismantleGun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnMultiDismantleStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          newState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DismantleMode_C::Event_OnMultiDismantleStateChanged(bool* newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnMultiDismantleStateChanged");

	UWidget_DismantleMode_C_Event_OnMultiDismantleStateChanged_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnPendingDismantleActorsChanged
// (BlueprintCallable, BlueprintEvent)

void UWidget_DismantleMode_C::Event_OnPendingDismantleActorsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Event OnPendingDismantleActorsChanged");

	UWidget_DismantleMode_C_Event_OnPendingDismantleActorsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DismantleMode_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.Destruct");

	UWidget_DismantleMode_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DismantleMode.Widget_DismantleMode_C.ExecuteUbergraph_Widget_DismantleMode
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DismantleMode_C::ExecuteUbergraph_Widget_DismantleMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DismantleMode.Widget_DismantleMode_C.ExecuteUbergraph_Widget_DismantleMode");

	UWidget_DismantleMode_C_ExecuteUbergraph_Widget_DismantleMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

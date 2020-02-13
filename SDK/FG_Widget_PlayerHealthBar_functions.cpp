// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PlayerHealthBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetHealthFillColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_PlayerHealthBar_C::GetHealthFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetHealthFillColor");

	UWidget_PlayerHealthBar_C_GetHealthFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.IsValidHealthComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerHealthBar_C::IsValidHealthComponent(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.IsValidHealthComponent");

	UWidget_PlayerHealthBar_C_IsValidHealthComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetHealthbar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_PlayerHealthBar_C::GetHealthbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetHealthbar");

	UWidget_PlayerHealthBar_C_GetHealthbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetProgressbarPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_PlayerHealthBar_C::GetProgressbarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.GetProgressbarPercent");

	UWidget_PlayerHealthBar_C_GetProgressbarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PlayerHealthBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.Construct");

	UWidget_PlayerHealthBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerHealthBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.Tick");

	UWidget_PlayerHealthBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.ResetAnimGate
// (BlueprintCallable, BlueprintEvent)

void UWidget_PlayerHealthBar_C::ResetAnimGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.ResetAnimGate");

	UWidget_PlayerHealthBar_C_ResetAnimGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.SetupHealthComponent
// (BlueprintCallable, BlueprintEvent)

void UWidget_PlayerHealthBar_C::SetupHealthComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.SetupHealthComponent");

	UWidget_PlayerHealthBar_C_SetupHealthComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.ExecuteUbergraph_Widget_PlayerHealthBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerHealthBar_C::ExecuteUbergraph_Widget_PlayerHealthBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerHealthBar.Widget_PlayerHealthBar_C.ExecuteUbergraph_Widget_PlayerHealthBar");

	UWidget_PlayerHealthBar_C_ExecuteUbergraph_Widget_PlayerHealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

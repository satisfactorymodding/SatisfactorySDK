// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_GeoThermal_Generator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.GetFuseVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_GeoThermal_Generator_C::GetFuseVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.GetFuseVisibility");

	UWidget_GeoThermal_Generator_C_GetFuseVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.OnGetPowerCircuit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGPowerCircuit*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFGPowerCircuit* UWidget_GeoThermal_Generator_C::OnGetPowerCircuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.OnGetPowerCircuit");

	UWidget_GeoThermal_Generator_C_OnGetPowerCircuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.IsConnected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsConnected                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_GeoThermal_Generator_C::IsConnected(bool* IsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.IsConnected");

	UWidget_GeoThermal_Generator_C_IsConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsConnected != nullptr)
		*IsConnected = params.IsConnected;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_GeoThermal_Generator_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Cleanup");

	UWidget_GeoThermal_Generator_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.GetBurnProgressPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_GeoThermal_Generator_C::GetBurnProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.GetBurnProgressPercent");

	UWidget_GeoThermal_Generator_C_GetBurnProgressPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_GeoThermal_Generator_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Init");

	UWidget_GeoThermal_Generator_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_GeoThermal_Generator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Construct");

	UWidget_GeoThermal_Generator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_GeoThermal_Generator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.Destruct");

	UWidget_GeoThermal_Generator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.ExecuteUbergraph_Widget_GeoThermal_Generator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_GeoThermal_Generator_C::ExecuteUbergraph_Widget_GeoThermal_Generator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GeoThermal_Generator.Widget_GeoThermal_Generator_C.ExecuteUbergraph_Widget_GeoThermal_Generator");

	UWidget_GeoThermal_Generator_C_ExecuteUbergraph_Widget_GeoThermal_Generator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PowerCircuitStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PowerCircuitStatus.Widget_PowerCircuitStatus_C.IsConnectedVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_PowerCircuitStatus_C::IsConnectedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitStatus.Widget_PowerCircuitStatus_C.IsConnectedVisibility");

	UWidget_PowerCircuitStatus_C_IsConnectedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PowerCircuitStatus.Widget_PowerCircuitStatus_C.IsConnected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsConnected                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_PowerCircuitStatus_C::IsConnected(bool* IsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitStatus.Widget_PowerCircuitStatus_C.IsConnected");

	UWidget_PowerCircuitStatus_C_IsConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsConnected != nullptr)
		*IsConnected = params.IsConnected;
}


// Function Widget_PowerCircuitStatus.Widget_PowerCircuitStatus_C.GetCircuitText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_PowerCircuitStatus_C::GetCircuitText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PowerCircuitStatus.Widget_PowerCircuitStatus_C.GetCircuitText");

	UWidget_PowerCircuitStatus_C_GetCircuitText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

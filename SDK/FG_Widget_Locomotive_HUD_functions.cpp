// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Locomotive_HUD_parameters.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.SetSpeedometerPosition
// ()

void UWidget_Locomotive_HUD_C::SetSpeedometerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.SetSpeedometerPosition");

	UWidget_Locomotive_HUD_C_SetSpeedometerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.GetPowerConsumptionText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Locomotive_HUD_C::GetPowerConsumptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.GetPowerConsumptionText");

	UWidget_Locomotive_HUD_C_GetPowerConsumptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.GetSpeedInKMHText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Locomotive_HUD_C::GetSpeedInKMHText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.GetSpeedInKMHText");

	UWidget_Locomotive_HUD_C_GetSpeedInKMHText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Locomotive_HUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Tick");

	UWidget_Locomotive_HUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StartBrakeIndicatorAnim
// ()

void UWidget_Locomotive_HUD_C::StartBrakeIndicatorAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StartBrakeIndicatorAnim");

	UWidget_Locomotive_HUD_C_StartBrakeIndicatorAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StopBrakeIndicatorAnim
// ()

void UWidget_Locomotive_HUD_C::StopBrakeIndicatorAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StopBrakeIndicatorAnim");

	UWidget_Locomotive_HUD_C_StopBrakeIndicatorAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Construct
// ()

void UWidget_Locomotive_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Construct");

	UWidget_Locomotive_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.ExecuteUbergraph_Widget_Locomotive_HUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Locomotive_HUD_C::ExecuteUbergraph_Widget_Locomotive_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.ExecuteUbergraph_Widget_Locomotive_HUD");

	UWidget_Locomotive_HUD_C_ExecuteUbergraph_Widget_Locomotive_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

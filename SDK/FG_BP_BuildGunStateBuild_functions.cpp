// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_BuildGunStateBuild_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.SecondaryFire
// (Event, Public, BlueprintEvent)

void UBP_BuildGunStateBuild_C::SecondaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.SecondaryFire");

	UBP_BuildGunStateBuild_C_SecondaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnMultiStepPlacement
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isFinalStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BuildGunStateBuild_C::OnMultiStepPlacement(bool* isFinalStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnMultiStepPlacement");

	UBP_BuildGunStateBuild_C_OnMultiStepPlacement_Params params;
	params.isFinalStep = isFinalStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnResetHologram
// (Event, Protected, BlueprintEvent)

void UBP_BuildGunStateBuild_C::OnResetHologram()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnResetHologram");

	UBP_BuildGunStateBuild_C_OnResetHologram_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.PrimaryFire
// (Event, Public, BlueprintEvent)

void UBP_BuildGunStateBuild_C::PrimaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.PrimaryFire");

	UBP_BuildGunStateBuild_C_PrimaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.EndState
// (Event, Public, BlueprintEvent)

void UBP_BuildGunStateBuild_C::EndState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.EndState");

	UBP_BuildGunStateBuild_C_EndState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ShowSplineModeSelectUI
// (Event, Public, BlueprintEvent)

void UBP_BuildGunStateBuild_C::ShowSplineModeSelectUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ShowSplineModeSelectUI");

	UBP_BuildGunStateBuild_C_ShowSplineModeSelectUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.CloseSplineModeSelectUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BuildGunStateBuild_C::CloseSplineModeSelectUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.CloseSplineModeSelectUI");

	UBP_BuildGunStateBuild_C_CloseSplineModeSelectUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.BeginState
// (Event, Public, BlueprintEvent)

void UBP_BuildGunStateBuild_C::BeginState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.BeginState");

	UBP_BuildGunStateBuild_C_BeginState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OpenBuildModeUI
// (BlueprintCallable, BlueprintEvent)

void UBP_BuildGunStateBuild_C::OpenBuildModeUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OpenBuildModeUI");

	UBP_BuildGunStateBuild_C_OpenBuildModeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ExecuteUbergraph_BP_BuildGunStateBuild
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BuildGunStateBuild_C::ExecuteUbergraph_BP_BuildGunStateBuild(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ExecuteUbergraph_BP_BuildGunStateBuild");

	UBP_BuildGunStateBuild_C_ExecuteUbergraph_BP_BuildGunStateBuild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

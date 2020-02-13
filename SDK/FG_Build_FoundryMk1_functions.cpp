// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_FoundryMk1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_FoundryMk1.Build_FoundryMk1_C.RemoveProductionEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_FoundryMk1_C::RemoveProductionEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.RemoveProductionEffects");

	ABuild_FoundryMk1_C_RemoveProductionEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.SetupProductionEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_FoundryMk1_C::SetupProductionEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.SetupProductionEffects");

	ABuild_FoundryMk1_C_SetupProductionEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.RemoveIdleEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_FoundryMk1_C::RemoveIdleEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.RemoveIdleEffects");

	ABuild_FoundryMk1_C_RemoveIdleEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.SetupIdleEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_FoundryMk1_C::SetupIdleEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.SetupIdleEffects");

	ABuild_FoundryMk1_C_SetupIdleEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_FoundryMk1_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.StartProductionLoopEffects");

	ABuild_FoundryMk1_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_FoundryMk1_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.StopProductionLoopEffects");

	ABuild_FoundryMk1_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.StartIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didGainPower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_FoundryMk1_C::StartIdlingLoopEffects(bool* didGainPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.StartIdlingLoopEffects");

	ABuild_FoundryMk1_C_StartIdlingLoopEffects_Params params;
	params.didGainPower = didGainPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.StopIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didLosePower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_FoundryMk1_C::StopIdlingLoopEffects(bool* didLosePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.StopIdlingLoopEffects");

	ABuild_FoundryMk1_C_StopIdlingLoopEffects_Params params;
	params.didLosePower = didLosePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_FoundryMk1_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.LostSignificance");

	ABuild_FoundryMk1_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_FoundryMk1_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.GainedSignificance");

	ABuild_FoundryMk1_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_FoundryMk1.Build_FoundryMk1_C.ExecuteUbergraph_Build_FoundryMk1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_FoundryMk1_C::ExecuteUbergraph_Build_FoundryMk1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_FoundryMk1.Build_FoundryMk1_C.ExecuteUbergraph_Build_FoundryMk1");

	ABuild_FoundryMk1_C_ExecuteUbergraph_Build_FoundryMk1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

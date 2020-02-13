// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_OilRefinery_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_OilRefinery.Build_OilRefinery_C.StartIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didGainPower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilRefinery_C::StartIdlingLoopEffects(bool* didGainPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.StartIdlingLoopEffects");

	ABuild_OilRefinery_C_StartIdlingLoopEffects_Params params;
	params.didGainPower = didGainPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilRefinery.Build_OilRefinery_C.StopIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didLosePower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilRefinery_C::StopIdlingLoopEffects(bool* didLosePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.StopIdlingLoopEffects");

	ABuild_OilRefinery_C_StopIdlingLoopEffects_Params params;
	params.didLosePower = didLosePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilRefinery.Build_OilRefinery_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilRefinery_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.StartProductionLoopEffects");

	ABuild_OilRefinery_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilRefinery.Build_OilRefinery_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilRefinery_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.StopProductionLoopEffects");

	ABuild_OilRefinery_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilRefinery.Build_OilRefinery_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_OilRefinery_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.GainedSignificance");

	ABuild_OilRefinery_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilRefinery.Build_OilRefinery_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_OilRefinery_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.LostSignificance");

	ABuild_OilRefinery_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilRefinery.Build_OilRefinery_C.ExecuteUbergraph_Build_OilRefinery
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilRefinery_C::ExecuteUbergraph_Build_OilRefinery(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilRefinery.Build_OilRefinery_C.ExecuteUbergraph_Build_OilRefinery");

	ABuild_OilRefinery_C_ExecuteUbergraph_Build_OilRefinery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

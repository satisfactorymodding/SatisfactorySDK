// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_GeneratorGeoThermal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_GeneratorGeoThermal_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.GainedSignificance");

	ABuild_GeneratorGeoThermal_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_GeneratorGeoThermal_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.LostSignificance");

	ABuild_GeneratorGeoThermal_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorGeoThermal_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StartProductionLoopEffects");

	ABuild_GeneratorGeoThermal_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorGeoThermal_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StopProductionLoopEffects");

	ABuild_GeneratorGeoThermal_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.ExecuteUbergraph_Build_GeneratorGeoThermal
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorGeoThermal_C::ExecuteUbergraph_Build_GeneratorGeoThermal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.ExecuteUbergraph_Build_GeneratorGeoThermal");

	ABuild_GeneratorGeoThermal_C_ExecuteUbergraph_Build_GeneratorGeoThermal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

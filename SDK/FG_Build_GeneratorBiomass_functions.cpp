// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_GeneratorBiomass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_GeneratorBiomass_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.GainedSignificance");

	ABuild_GeneratorBiomass_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorBiomass_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StartProductionLoopEffects");

	ABuild_GeneratorBiomass_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorBiomass_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StopProductionLoopEffects");

	ABuild_GeneratorBiomass_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_GeneratorBiomass_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.LostSignificance");

	ABuild_GeneratorBiomass_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ReceiveUpdateEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorBiomass_C::ReceiveUpdateEffects(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ReceiveUpdateEffects");

	ABuild_GeneratorBiomass_C_ReceiveUpdateEffects_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ExecuteUbergraph_Build_GeneratorBiomass
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorBiomass_C::ExecuteUbergraph_Build_GeneratorBiomass(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ExecuteUbergraph_Build_GeneratorBiomass");

	ABuild_GeneratorBiomass_C_ExecuteUbergraph_Build_GeneratorBiomass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

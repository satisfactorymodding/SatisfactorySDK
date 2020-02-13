// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_GeneratorNuclear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_GeneratorNuclear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveBeginPlay");

	ABuild_GeneratorNuclear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_GeneratorNuclear_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.GainedSignificance");

	ABuild_GeneratorNuclear_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_GeneratorNuclear_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.LostSignificance");

	ABuild_GeneratorNuclear_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorNuclear_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartProductionLoopEffects");

	ABuild_GeneratorNuclear_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorNuclear_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StopProductionLoopEffects");

	ABuild_GeneratorNuclear_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didGainPower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorNuclear_C::StartIdlingLoopEffects(bool* didGainPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartIdlingLoopEffects");

	ABuild_GeneratorNuclear_C_StartIdlingLoopEffects_Params params;
	params.didGainPower = didGainPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StopIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didLosePower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorNuclear_C::StopIdlingLoopEffects(bool* didLosePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StopIdlingLoopEffects");

	ABuild_GeneratorNuclear_C_StopIdlingLoopEffects_Params params;
	params.didLosePower = didLosePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveUpdateEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorNuclear_C::ReceiveUpdateEffects(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveUpdateEffects");

	ABuild_GeneratorNuclear_C_ReceiveUpdateEffects_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ExecuteUbergraph_Build_GeneratorNuclear
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorNuclear_C::ExecuteUbergraph_Build_GeneratorNuclear(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ExecuteUbergraph_Build_GeneratorNuclear");

	ABuild_GeneratorNuclear_C_ExecuteUbergraph_Build_GeneratorNuclear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_GeneratorIntegratedBiomass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanDismantle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_GeneratorIntegratedBiomass_C::CanDismantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanDismantle");

	ABuild_GeneratorIntegratedBiomass_C_CanDismantle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.UserConstructionScript
// ()

void ABuild_GeneratorIntegratedBiomass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.UserConstructionScript");

	ABuild_GeneratorIntegratedBiomass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GainedSignificance
// ()

void ABuild_GeneratorIntegratedBiomass_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GainedSignificance");

	ABuild_GeneratorIntegratedBiomass_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StartProductionLoopEffects
// ()
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorIntegratedBiomass_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StartProductionLoopEffects");

	ABuild_GeneratorIntegratedBiomass_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StopProductionLoopEffects
// ()
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorIntegratedBiomass_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StopProductionLoopEffects");

	ABuild_GeneratorIntegratedBiomass_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.LostSignificance
// ()

void ABuild_GeneratorIntegratedBiomass_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.LostSignificance");

	ABuild_GeneratorIntegratedBiomass_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveUpdateEffects
// ()
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorIntegratedBiomass_C::ReceiveUpdateEffects(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveUpdateEffects");

	ABuild_GeneratorIntegratedBiomass_C_ReceiveUpdateEffects_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ExecuteUbergraph_Build_GeneratorIntegratedBiomass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_GeneratorIntegratedBiomass_C::ExecuteUbergraph_Build_GeneratorIntegratedBiomass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ExecuteUbergraph_Build_GeneratorIntegratedBiomass");

	ABuild_GeneratorIntegratedBiomass_C_ExecuteUbergraph_Build_GeneratorIntegratedBiomass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_MinerMk2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_MinerMk2.Build_MinerMk2_C.GetMiningParticles
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*         FirstParticle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         SecondParticle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           foundParticle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuild_MinerMk2_C::GetMiningParticles(class UParticleSystem** FirstParticle, class UParticleSystem** SecondParticle, bool* foundParticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.GetMiningParticles");

	ABuild_MinerMk2_C_GetMiningParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstParticle != nullptr)
		*FirstParticle = params.FirstParticle;
	if (SecondParticle != nullptr)
		*SecondParticle = params.SecondParticle;
	if (foundParticle != nullptr)
		*foundParticle = params.foundParticle;
}


// Function Build_MinerMk2.Build_MinerMk2_C.GetExtractedResource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Resource                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuild_MinerMk2_C::GetExtractedResource(class UClass** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.GetExtractedResource");

	ABuild_MinerMk2_C_GetExtractedResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resource != nullptr)
		*Resource = params.Resource;
}


// Function Build_MinerMk2.Build_MinerMk2_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABuild_MinerMk2_C::SetDisplayText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.SetDisplayText");

	ABuild_MinerMk2_C_SetDisplayText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_MinerMk2.Build_MinerMk2_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_MinerMk2_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.GainedSignificance");

	ABuild_MinerMk2_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_MinerMk2.Build_MinerMk2_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_MinerMk2_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.LostSignificance");

	ABuild_MinerMk2_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_MinerMk2.Build_MinerMk2_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_MinerMk2_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.StartProductionLoopEffects");

	ABuild_MinerMk2_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_MinerMk2.Build_MinerMk2_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_MinerMk2_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.StopProductionLoopEffects");

	ABuild_MinerMk2_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_MinerMk2.Build_MinerMk2_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABuild_MinerMk2_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.ReceiveDestroyed");

	ABuild_MinerMk2_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_MinerMk2.Build_MinerMk2_C.ExecuteUbergraph_Build_MinerMk2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_MinerMk2_C::ExecuteUbergraph_Build_MinerMk2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_MinerMk2.Build_MinerMk2_C.ExecuteUbergraph_Build_MinerMk2");

	ABuild_MinerMk2_C_ExecuteUbergraph_Build_MinerMk2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

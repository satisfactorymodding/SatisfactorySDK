// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_OilPump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_OilPump.Build_OilPump_C.GetExtractedResource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Resource                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuild_OilPump_C::GetExtractedResource(class UClass** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.GetExtractedResource");

	ABuild_OilPump_C_GetExtractedResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resource != nullptr)
		*Resource = params.Resource;
}


// Function Build_OilPump.Build_OilPump_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABuild_OilPump_C::SetDisplayText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.SetDisplayText");

	ABuild_OilPump_C_SetDisplayText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.StopIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didLosePower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilPump_C::StopIdlingLoopEffects(bool* didLosePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.StopIdlingLoopEffects");

	ABuild_OilPump_C_StopIdlingLoopEffects_Params params;
	params.didLosePower = didLosePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilPump_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.StopProductionLoopEffects");

	ABuild_OilPump_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_OilPump_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.LostSignificance");

	ABuild_OilPump_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_OilPump_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.GainedSignificance");

	ABuild_OilPump_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.StartIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didGainPower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilPump_C::StartIdlingLoopEffects(bool* didGainPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.StartIdlingLoopEffects");

	ABuild_OilPump_C_StartIdlingLoopEffects_Params params;
	params.didGainPower = didGainPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilPump_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.StartProductionLoopEffects");

	ABuild_OilPump_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_OilPump.Build_OilPump_C.ExecuteUbergraph_Build_OilPump
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_OilPump_C::ExecuteUbergraph_Build_OilPump(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_OilPump.Build_OilPump_C.ExecuteUbergraph_Build_OilPump");

	ABuild_OilPump_C_ExecuteUbergraph_Build_OilPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

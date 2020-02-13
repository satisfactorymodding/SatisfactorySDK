// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipelinePump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PipelinePump.Build_PipelinePump_C.PlayPistonSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_PipelinePump_C::PlayPistonSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.PlayPistonSound");

	ABuild_PipelinePump_C_PlayPistonSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.OnPumpStopped
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_PipelinePump_C::OnPumpStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.OnPumpStopped");

	ABuild_PipelinePump_C_OnPumpStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.Factory_ReceiveStopProducing
// (Event, Protected, BlueprintEvent)

void ABuild_PipelinePump_C::Factory_ReceiveStopProducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.Factory_ReceiveStopProducing");

	ABuild_PipelinePump_C_Factory_ReceiveStopProducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.OnHasPowerChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          newHasPower                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelinePump_C::OnHasPowerChanged(bool* newHasPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.OnHasPowerChanged");

	ABuild_PipelinePump_C_OnHasPowerChanged_Params params;
	params.newHasPower = newHasPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.StopIsLookedAtForDismantle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelinePump_C::StopIsLookedAtForDismantle(class AFGCharacterPlayer** byCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.StopIsLookedAtForDismantle");

	ABuild_PipelinePump_C_StopIsLookedAtForDismantle_Params params;
	params.byCharacter = byCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_PipelinePump_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.LostSignificance");

	ABuild_PipelinePump_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_PipelinePump_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.GainedSignificance");

	ABuild_PipelinePump_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.BuildEffectFinishedEvent
// (Event, Protected, BlueprintEvent)

void ABuild_PipelinePump_C::BuildEffectFinishedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.BuildEffectFinishedEvent");

	ABuild_PipelinePump_C_BuildEffectFinishedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.PlayProductionAudioChain
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipelinePump_C::PlayProductionAudioChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.PlayProductionAudioChain");

	ABuild_PipelinePump_C_PlayProductionAudioChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.StopProductionAudioChain
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipelinePump_C::StopProductionAudioChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.StopProductionAudioChain");

	ABuild_PipelinePump_C_StopProductionAudioChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.FluidDescriptorSetNotify
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass**                 fluidDesc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelinePump_C::FluidDescriptorSetNotify(class UClass** fluidDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.FluidDescriptorSetNotify");

	ABuild_PipelinePump_C_FluidDescriptorSetNotify_Params params;
	params.fluidDesc = fluidDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_PipelinePump_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.ReceiveBeginPlay");

	ABuild_PipelinePump_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.PlayEngineAudioChain
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipelinePump_C::PlayEngineAudioChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.PlayEngineAudioChain");

	ABuild_PipelinePump_C_PlayEngineAudioChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.StopEngineAudioChain
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipelinePump_C::StopEngineAudioChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.StopEngineAudioChain");

	ABuild_PipelinePump_C_StopEngineAudioChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelinePump_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.ReceiveTick");

	ABuild_PipelinePump_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelinePump.Build_PipelinePump_C.ExecuteUbergraph_Build_PipelinePump
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelinePump_C::ExecuteUbergraph_Build_PipelinePump(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelinePump.Build_PipelinePump_C.ExecuteUbergraph_Build_PipelinePump");

	ABuild_PipelinePump_C_ExecuteUbergraph_Build_PipelinePump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

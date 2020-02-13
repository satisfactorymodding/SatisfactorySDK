// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_WaterPump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_WaterPump.Build_WaterPump_C.GetPlayRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuild_WaterPump_C::GetPlayRate(float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.GetPlayRate");

	ABuild_WaterPump_C_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
}


// Function Build_WaterPump.Build_WaterPump_C.mAudioTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_WaterPump_C::mAudioTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.mAudioTimer");

	ABuild_WaterPump_C_mAudioTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 intText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABuild_WaterPump_C::SetText(class FString* intText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.SetText");

	ABuild_WaterPump_C_SetText_Params params;
	params.intText = intText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.PlayPitchAndVolumeRTPCTimeline__FinishedFunc
// (BlueprintEvent)

void ABuild_WaterPump_C::PlayPitchAndVolumeRTPCTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.PlayPitchAndVolumeRTPCTimeline__FinishedFunc");

	ABuild_WaterPump_C_PlayPitchAndVolumeRTPCTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.PlayPitchAndVolumeRTPCTimeline__UpdateFunc
// (BlueprintEvent)

void ABuild_WaterPump_C::PlayPitchAndVolumeRTPCTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.PlayPitchAndVolumeRTPCTimeline__UpdateFunc");

	ABuild_WaterPump_C_PlayPitchAndVolumeRTPCTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__FinishedFunc
// (BlueprintEvent)

void ABuild_WaterPump_C::mWaterpumpTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__FinishedFunc");

	ABuild_WaterPump_C_mWaterpumpTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__UpdateFunc
// (BlueprintEvent)

void ABuild_WaterPump_C::mWaterpumpTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__UpdateFunc");

	ABuild_WaterPump_C_mWaterpumpTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_WaterPump_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.ReceiveBeginPlay");

	ABuild_WaterPump_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABuild_WaterPump_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.ReceiveDestroyed");

	ABuild_WaterPump_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_WaterPump_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.StopProductionLoopEffects");

	ABuild_WaterPump_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.PlayProducingSounds
// (BlueprintCallable, BlueprintEvent)

void ABuild_WaterPump_C::PlayProducingSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.PlayProducingSounds");

	ABuild_WaterPump_C_PlayProducingSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_WaterPump_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.StartProductionLoopEffects");

	ABuild_WaterPump_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.StartVFXIteration
// (BlueprintCallable, BlueprintEvent)

void ABuild_WaterPump_C::StartVFXIteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.StartVFXIteration");

	ABuild_WaterPump_C_StartVFXIteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.OnIsProducingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          newIsProducing                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_WaterPump_C::OnIsProducingChanged(bool* newIsProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.OnIsProducingChanged");

	ABuild_WaterPump_C_OnIsProducingChanged_Params params;
	params.newIsProducing = newIsProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_WaterPump_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.GainedSignificance");

	ABuild_WaterPump_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_WaterPump_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.LostSignificance");

	ABuild_WaterPump_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.Start_VFX_Loop
// (BlueprintCallable, BlueprintEvent)

void ABuild_WaterPump_C::Start_VFX_Loop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.Start_VFX_Loop");

	ABuild_WaterPump_C_Start_VFX_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.Stop_VFX_Loop
// (BlueprintCallable, BlueprintEvent)

void ABuild_WaterPump_C::Stop_VFX_Loop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.Stop_VFX_Loop");

	ABuild_WaterPump_C_Stop_VFX_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_WaterPump.Build_WaterPump_C.ExecuteUbergraph_Build_WaterPump
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_WaterPump_C::ExecuteUbergraph_Build_WaterPump(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WaterPump.Build_WaterPump_C.ExecuteUbergraph_Build_WaterPump");

	ABuild_WaterPump_C_ExecuteUbergraph_Build_WaterPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

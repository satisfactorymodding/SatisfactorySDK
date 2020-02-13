// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ResourceSink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_ResourceSink.Build_ResourceSink_C.SFX_Timeline__FinishedFunc
// (BlueprintEvent)

void ABuild_ResourceSink_C::SFX_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.SFX_Timeline__FinishedFunc");

	ABuild_ResourceSink_C_SFX_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.SFX_Timeline__UpdateFunc
// (BlueprintEvent)

void ABuild_ResourceSink_C::SFX_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.SFX_Timeline__UpdateFunc");

	ABuild_ResourceSink_C_SFX_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.SFXEngineTimeline__FinishedFunc
// (BlueprintEvent)

void ABuild_ResourceSink_C::SFXEngineTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.SFXEngineTimeline__FinishedFunc");

	ABuild_ResourceSink_C_SFXEngineTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.SFXEngineTimeline__UpdateFunc
// (BlueprintEvent)

void ABuild_ResourceSink_C::SFXEngineTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.SFXEngineTimeline__UpdateFunc");

	ABuild_ResourceSink_C_SFXEngineTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_ResourceSink_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.GainedSignificance");

	ABuild_ResourceSink_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_ResourceSink_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.LostSignificance");

	ABuild_ResourceSink_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.OnHasPowerChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          newHasPower                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::OnHasPowerChanged(bool* newHasPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.OnHasPowerChanged");

	ABuild_ResourceSink_C_OnHasPowerChanged_Params params;
	params.newHasPower = newHasPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_ResourceSink_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ReceiveBeginPlay");

	ABuild_ResourceSink_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartProductionLoopEffects");

	ABuild_ResourceSink_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopProductionLoopEffects");

	ABuild_ResourceSink_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABuild_ResourceSink_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ReceiveDestroyed");

	ABuild_ResourceSink_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.StartSFXEngineOnPower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          didGainPower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::StartSFXEngineOnPower(bool* didGainPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartSFXEngineOnPower");

	ABuild_ResourceSink_C_StartSFXEngineOnPower_Params params;
	params.didGainPower = didGainPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.StopSFXEngineOnPower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          didLosePower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::StopSFXEngineOnPower(bool* didLosePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopSFXEngineOnPower");

	ABuild_ResourceSink_C_StopSFXEngineOnPower_Params params;
	params.didLosePower = didLosePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.StartIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didGainPower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::StartIdlingLoopEffects(bool* didGainPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartIdlingLoopEffects");

	ABuild_ResourceSink_C_StartIdlingLoopEffects_Params params;
	params.didGainPower = didGainPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.StopIdlingLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didLosePower                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::StopIdlingLoopEffects(bool* didLosePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopIdlingLoopEffects");

	ABuild_ResourceSink_C_StopIdlingLoopEffects_Params params;
	params.didLosePower = didLosePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSink.Build_ResourceSink_C.ExecuteUbergraph_Build_ResourceSink
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSink_C::ExecuteUbergraph_Build_ResourceSink(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ExecuteUbergraph_Build_ResourceSink");

	ABuild_ResourceSink_C_ExecuteUbergraph_Build_ResourceSink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

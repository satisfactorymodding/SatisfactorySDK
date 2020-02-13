// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipeHyperStart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.CanProduce
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_PipeHyperStart_C::CanProduce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.CanProduce");

	ABuild_PipeHyperStart_C_CanProduce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.UserConstructionScript");

	ABuild_PipeHyperStart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.InterpolateEngineSound__FinishedFunc
// (BlueprintEvent)

void ABuild_PipeHyperStart_C::InterpolateEngineSound__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.InterpolateEngineSound__FinishedFunc");

	ABuild_PipeHyperStart_C_InterpolateEngineSound__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.InterpolateEngineSound__UpdateFunc
// (BlueprintEvent)

void ABuild_PipeHyperStart_C::InterpolateEngineSound__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.InterpolateEngineSound__UpdateFunc");

	ABuild_PipeHyperStart_C_InterpolateEngineSound__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnHasPowerChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          newHasPower                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeHyperStart_C::OnHasPowerChanged(bool* newHasPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnHasPowerChanged");

	ABuild_PipeHyperStart_C_OnHasPowerChanged_Params params;
	params.newHasPower = newHasPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_PipeHyperStart_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.GainedSignificance");

	ABuild_PipeHyperStart_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_PipeHyperStart_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.LostSignificance");

	ABuild_PipeHyperStart_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartUpHypertube
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::StartUpHypertube()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartUpHypertube");

	ABuild_PipeHyperStart_C_StartUpHypertube_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopHyperTube
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::StopHyperTube()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopHyperTube");

	ABuild_PipeHyperStart_C_StopHyperTube_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartEngineSoundTimelineEvent
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::StartEngineSoundTimelineEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartEngineSoundTimelineEvent");

	ABuild_PipeHyperStart_C_StartEngineSoundTimelineEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.EndEngineSoundTimelineEvent
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::EndEngineSoundTimelineEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.EndEngineSoundTimelineEvent");

	ABuild_PipeHyperStart_C_EndEngineSoundTimelineEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_PipeHyperStart_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.ReceiveBeginPlay");

	ABuild_PipeHyperStart_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABuild_PipeHyperStart_C::BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABuild_PipeHyperStart_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayConstructSound_2
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::PlayConstructSound_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayConstructSound_2");

	ABuild_PipeHyperStart_C_PlayConstructSound_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnIsProducingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          newIsProducing                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeHyperStart_C::OnIsProducingChanged(bool* newIsProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnIsProducingChanged");

	ABuild_PipeHyperStart_C_OnIsProducingChanged_Params params;
	params.newIsProducing = newIsProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeHyperStart_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartProductionLoopEffects");

	ABuild_PipeHyperStart_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeHyperStart_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopProductionLoopEffects");

	ABuild_PipeHyperStart_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayOnSi
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperStart_C::PlayOnSi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayOnSi");

	ABuild_PipeHyperStart_C_PlayOnSi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperStart.Build_PipeHyperStart_C.ExecuteUbergraph_Build_PipeHyperStart
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeHyperStart_C::ExecuteUbergraph_Build_PipeHyperStart(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.ExecuteUbergraph_Build_PipeHyperStart");

	ABuild_PipeHyperStart_C_ExecuteUbergraph_Build_PipeHyperStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

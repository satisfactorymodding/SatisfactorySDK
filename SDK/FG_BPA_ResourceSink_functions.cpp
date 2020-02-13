// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_ResourceSink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_ResourceSink.BPA_ResourceSink_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331
// (BlueprintEvent)

void UBPA_ResourceSink_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331");

	UBPA_ResourceSink_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_ResourceSink_AnimGraphNode_TransitionResult_1C5A94AE40C3D7020742998831888331_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkEnteredProducingState
// (BlueprintCallable, BlueprintEvent)

void UBPA_ResourceSink_C::AnimNotify_SinkEnteredProducingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkEnteredProducingState");

	UBPA_ResourceSink_C_AnimNotify_SinkEnteredProducingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkLeftProducingState
// (BlueprintCallable, BlueprintEvent)

void UBPA_ResourceSink_C::AnimNotify_SinkLeftProducingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.AnimNotify_SinkLeftProducingState");

	UBPA_ResourceSink_C_AnimNotify_SinkLeftProducingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ResourceSink.BPA_ResourceSink_C.ExecuteUbergraph_BPA_ResourceSink
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_ResourceSink_C::ExecuteUbergraph_BPA_ResourceSink(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ResourceSink.BPA_ResourceSink_C.ExecuteUbergraph_BPA_ResourceSink");

	UBPA_ResourceSink_C_ExecuteUbergraph_BPA_ResourceSink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

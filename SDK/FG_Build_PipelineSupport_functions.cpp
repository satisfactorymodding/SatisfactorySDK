// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipelineSupport_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PipelineSupport.Build_PipelineSupport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuild_PipelineSupport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelineSupport.Build_PipelineSupport_C.UserConstructionScript");

	ABuild_PipelineSupport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelineSupport.Build_PipelineSupport_C.PlayConstructSound_2
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipelineSupport_C::PlayConstructSound_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelineSupport.Build_PipelineSupport_C.PlayConstructSound_2");

	ABuild_PipelineSupport_C_PlayConstructSound_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelineSupport.Build_PipelineSupport_C.ExecuteUbergraph_Build_PipelineSupport
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelineSupport_C::ExecuteUbergraph_Build_PipelineSupport(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelineSupport.Build_PipelineSupport_C.ExecuteUbergraph_Build_PipelineSupport");

	ABuild_PipelineSupport_C_ExecuteUbergraph_Build_PipelineSupport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

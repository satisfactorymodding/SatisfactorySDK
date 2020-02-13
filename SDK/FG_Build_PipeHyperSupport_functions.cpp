// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipeHyperSupport_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperSupport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.UserConstructionScript");

	ABuild_PipeHyperSupport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.PlayConstructSound_2
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeHyperSupport_C::PlayConstructSound_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.PlayConstructSound_2");

	ABuild_PipeHyperSupport_C_PlayConstructSound_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.ExecuteUbergraph_Build_PipeHyperSupport
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeHyperSupport_C::ExecuteUbergraph_Build_PipeHyperSupport(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.ExecuteUbergraph_Build_PipeHyperSupport");

	ABuild_PipeHyperSupport_C_ExecuteUbergraph_Build_PipeHyperSupport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipelineJunction_Cross_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.PlayConstructSound_2
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipelineJunction_Cross_C::PlayConstructSound_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.PlayConstructSound_2");

	ABuild_PipelineJunction_Cross_C_PlayConstructSound_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.ExecuteUbergraph_Build_PipelineJunction_Cross
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipelineJunction_Cross_C::ExecuteUbergraph_Build_PipelineJunction_Cross(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.ExecuteUbergraph_Build_PipelineJunction_Cross");

	ABuild_PipelineJunction_Cross_C_ExecuteUbergraph_Build_PipelineJunction_Cross_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

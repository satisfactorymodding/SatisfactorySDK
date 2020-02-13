// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipeSupportStackable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuild_PipeSupportStackable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.UserConstructionScript");

	ABuild_PipeSupportStackable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.PlayConstructSound_2
// (BlueprintCallable, BlueprintEvent)

void ABuild_PipeSupportStackable_C::PlayConstructSound_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.PlayConstructSound_2");

	ABuild_PipeSupportStackable_C_PlayConstructSound_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.ExecuteUbergraph_Build_PipeSupportStackable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PipeSupportStackable_C::ExecuteUbergraph_Build_PipeSupportStackable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.ExecuteUbergraph_Build_PipeSupportStackable");

	ABuild_PipeSupportStackable_C_ExecuteUbergraph_Build_PipeSupportStackable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

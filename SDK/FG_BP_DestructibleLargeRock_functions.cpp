// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_DestructibleLargeRock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.PlayDestructEffects
// (Event, Public, BlueprintEvent)

void ABP_DestructibleLargeRock_C::PlayDestructEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.PlayDestructEffects");

	ABP_DestructibleLargeRock_C_PlayDestructEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.ExecuteUbergraph_BP_DestructibleLargeRock
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleLargeRock_C::ExecuteUbergraph_BP_DestructibleLargeRock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.ExecuteUbergraph_BP_DestructibleLargeRock");

	ABP_DestructibleLargeRock_C_ExecuteUbergraph_BP_DestructibleLargeRock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

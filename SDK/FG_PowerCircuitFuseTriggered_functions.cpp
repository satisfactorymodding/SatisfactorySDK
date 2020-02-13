// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_PowerCircuitFuseTriggered_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerCircuitFuseTriggered_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.Construct");

	UPowerCircuitFuseTriggered_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.ExecuteUbergraph_PowerCircuitFuseTriggered
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerCircuitFuseTriggered_C::ExecuteUbergraph_PowerCircuitFuseTriggered(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.ExecuteUbergraph_PowerCircuitFuseTriggered");

	UPowerCircuitFuseTriggered_C_ExecuteUbergraph_PowerCircuitFuseTriggered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

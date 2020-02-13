// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_CircuitSubsystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnFuseSet
// (Event, Protected, BlueprintEvent)

void ABP_CircuitSubsystem_C::PowerCircuit_OnFuseSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnFuseSet");

	ABP_CircuitSubsystem_C_PowerCircuit_OnFuseSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayFuseSetSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_CircuitSubsystem_C::Multicast_PlayFuseSetSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayFuseSetSound");

	ABP_CircuitSubsystem_C_Multicast_PlayFuseSetSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.ExecuteUbergraph_BP_CircuitSubsystem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CircuitSubsystem_C::ExecuteUbergraph_BP_CircuitSubsystem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.ExecuteUbergraph_BP_CircuitSubsystem");

	ABP_CircuitSubsystem_C_ExecuteUbergraph_BP_CircuitSubsystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

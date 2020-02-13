// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_JetPackMk2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attach_JetPackMk2.Attach_JetPackMk2_C.OnStopThrusting
// (Event, Public, BlueprintEvent)

void AAttach_JetPackMk2_C::OnStopThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPackMk2.Attach_JetPackMk2_C.OnStopThrusting");

	AAttach_JetPackMk2_C_OnStopThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_JetPackMk2.Attach_JetPackMk2_C.OnStartThrusting
// (Event, Public, BlueprintEvent)

void AAttach_JetPackMk2_C::OnStartThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPackMk2.Attach_JetPackMk2_C.OnStartThrusting");

	AAttach_JetPackMk2_C_OnStartThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_JetPackMk2.Attach_JetPackMk2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttach_JetPackMk2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPackMk2.Attach_JetPackMk2_C.ReceiveBeginPlay");

	AAttach_JetPackMk2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_JetPackMk2.Attach_JetPackMk2_C.ExecuteUbergraph_Attach_JetPackMk2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_JetPackMk2_C::ExecuteUbergraph_Attach_JetPackMk2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPackMk2.Attach_JetPackMk2_C.ExecuteUbergraph_Attach_JetPackMk2");

	AAttach_JetPackMk2_C_ExecuteUbergraph_Attach_JetPackMk2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

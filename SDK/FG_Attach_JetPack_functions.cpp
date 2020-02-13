// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_JetPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attach_JetPack.Attach_JetPack_C.OnStopThrusting
// (Event, Public, BlueprintEvent)

void AAttach_JetPack_C::OnStopThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.OnStopThrusting");

	AAttach_JetPack_C_OnStopThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_JetPack.Attach_JetPack_C.OnStartThrusting
// (Event, Public, BlueprintEvent)

void AAttach_JetPack_C::OnStartThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.OnStartThrusting");

	AAttach_JetPack_C_OnStartThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_JetPack.Attach_JetPack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttach_JetPack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.ReceiveBeginPlay");

	AAttach_JetPack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_JetPack.Attach_JetPack_C.ExecuteUbergraph_Attach_JetPack
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_JetPack_C::ExecuteUbergraph_Attach_JetPack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.ExecuteUbergraph_Attach_JetPack");

	AAttach_JetPack_C_ExecuteUbergraph_Attach_JetPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

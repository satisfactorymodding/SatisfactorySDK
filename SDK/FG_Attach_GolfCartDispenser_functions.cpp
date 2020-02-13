// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_GolfCartDispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayAttachEffects3P
// (Event, Public, BlueprintEvent)

void AAttach_GolfCartDispenser_C::PlayAttachEffects3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayAttachEffects3P");

	AAttach_GolfCartDispenser_C_PlayAttachEffects3P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayDetachEffects3P
// (Event, Public, BlueprintEvent)

void AAttach_GolfCartDispenser_C::PlayDetachEffects3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayDetachEffects3P");

	AAttach_GolfCartDispenser_C_PlayDetachEffects3P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.ExecuteUbergraph_Attach_GolfCartDispenser
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_GolfCartDispenser_C::ExecuteUbergraph_Attach_GolfCartDispenser(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.ExecuteUbergraph_Attach_GolfCartDispenser");

	AAttach_GolfCartDispenser_C_ExecuteUbergraph_Attach_GolfCartDispenser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_Cup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attach_Cup.Attach_Cup_C.PlayAttachEffects3P
// (Event, Public, BlueprintEvent)

void AAttach_Cup_C::PlayAttachEffects3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_Cup.Attach_Cup_C.PlayAttachEffects3P");

	AAttach_Cup_C_PlayAttachEffects3P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_Cup.Attach_Cup_C.PlayUseEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                UseLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_Cup_C::PlayUseEffect(struct FVector* UseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_Cup.Attach_Cup_C.PlayUseEffect");

	AAttach_Cup_C_PlayUseEffect_Params params;
	params.UseLocation = UseLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_Cup.Attach_Cup_C.ExecuteUbergraph_Attach_Cup
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_Cup_C::ExecuteUbergraph_Attach_Cup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_Cup.Attach_Cup_C.ExecuteUbergraph_Attach_Cup");

	AAttach_Cup_C_ExecuteUbergraph_Attach_Cup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

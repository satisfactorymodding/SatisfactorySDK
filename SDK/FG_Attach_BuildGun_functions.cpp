// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_BuildGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attach_BuildGun.Attach_BuildGun_C.PlayAttachEffects3P
// (Event, Public, BlueprintEvent)

void AAttach_BuildGun_C::PlayAttachEffects3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_BuildGun.Attach_BuildGun_C.PlayAttachEffects3P");

	AAttach_BuildGun_C_PlayAttachEffects3P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_BuildGun.Attach_BuildGun_C.ExecuteUbergraph_Attach_BuildGun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_BuildGun_C::ExecuteUbergraph_Attach_BuildGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_BuildGun.Attach_BuildGun_C.ExecuteUbergraph_Attach_BuildGun");

	AAttach_BuildGun_C_ExecuteUbergraph_Attach_BuildGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

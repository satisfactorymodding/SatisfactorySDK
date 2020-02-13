// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_RawInput_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FRegisteredDeviceInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRegisteredDeviceInfo> URawInputFunctionLibrary::STATIC_GetRegisteredDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices");

	URawInputFunctionLibrary_GetRegisteredDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

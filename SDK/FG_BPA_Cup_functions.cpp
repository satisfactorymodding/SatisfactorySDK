// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Cup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_Cup.BPA_Cup_C.ExecuteUbergraph_BPA_Cup
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_Cup_C::ExecuteUbergraph_BPA_Cup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Cup.BPA_Cup_C.ExecuteUbergraph_BPA_Cup");

	UBPA_Cup_C_ExecuteUbergraph_BPA_Cup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

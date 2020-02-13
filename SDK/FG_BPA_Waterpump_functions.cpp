// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Waterpump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_Waterpump.BPA_Waterpump_C.ExecuteUbergraph_BPA_Waterpump
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_Waterpump_C::ExecuteUbergraph_BPA_Waterpump(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Waterpump.BPA_Waterpump_C.ExecuteUbergraph_BPA_Waterpump");

	UBPA_Waterpump_C_ExecuteUbergraph_BPA_Waterpump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

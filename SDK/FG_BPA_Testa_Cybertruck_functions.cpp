// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Testa_Cybertruck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_Testa_Cybertruck.BPA_Testa_Cybertruck_C.ExecuteUbergraph_BPA_Testa_Cybertruck
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_Testa_Cybertruck_C::ExecuteUbergraph_BPA_Testa_Cybertruck(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Testa_Cybertruck.BPA_Testa_Cybertruck_C.ExecuteUbergraph_BPA_Testa_Cybertruck");

	UBPA_Testa_Cybertruck_C_ExecuteUbergraph_BPA_Testa_Cybertruck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

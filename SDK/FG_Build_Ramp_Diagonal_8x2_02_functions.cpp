// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_Ramp_Diagonal_8x2_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_Ramp_Diagonal_8x2_02.Build_Ramp_Diagonal_8x2_02_C.UserConstructionScript
// ()

void ABuild_Ramp_Diagonal_8x2_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_Ramp_Diagonal_8x2_02.Build_Ramp_Diagonal_8x2_02_C.UserConstructionScript");

	ABuild_Ramp_Diagonal_8x2_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

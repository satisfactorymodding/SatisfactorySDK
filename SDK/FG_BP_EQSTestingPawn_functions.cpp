// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_EQSTestingPawn_parameters.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EQSTestingPawn.BP_EQSTestingPawn_C.UserConstructionScript
// ()

void ABP_EQSTestingPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EQSTestingPawn.BP_EQSTestingPawn_C.UserConstructionScript");

	ABP_EQSTestingPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

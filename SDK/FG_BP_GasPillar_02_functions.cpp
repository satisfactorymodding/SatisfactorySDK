// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_GasPillar_02_parameters.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GasPillar_02.BP_GasPillar_02_C.UserConstructionScript
// ()

void ABP_GasPillar_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasPillar_02.BP_GasPillar_02_C.UserConstructionScript");

	ABP_GasPillar_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

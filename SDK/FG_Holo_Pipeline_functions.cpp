// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Holo_Pipeline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Holo_Pipeline.Holo_Pipeline_C.GetSupportedSplineModes
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<EHologramSplinePathMode> out_splineModes                (Parm, OutParm, ZeroConstructor)

void AHolo_Pipeline_C::GetSupportedSplineModes(TArray<EHologramSplinePathMode>* out_splineModes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Holo_Pipeline.Holo_Pipeline_C.GetSupportedSplineModes");

	AHolo_Pipeline_C_GetSupportedSplineModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_splineModes != nullptr)
		*out_splineModes = params.out_splineModes;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

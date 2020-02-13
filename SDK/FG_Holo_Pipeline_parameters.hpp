#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Holo_Pipeline_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Holo_Pipeline.Holo_Pipeline_C.GetSupportedSplineModes
struct AHolo_Pipeline_C_GetSupportedSplineModes_Params
{
	TArray<EHologramSplinePathMode>                    out_splineModes;                                          // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

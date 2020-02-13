#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_3pHypertube_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPA_3pHypertube.BPA_3pHypertube_C.BlueprintUpdateAnimation
struct UBPA_3pHypertube_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_3pHypertube.BPA_3pHypertube_C.ExecuteUbergraph_BPA_3pHypertube
struct UBPA_3pHypertube_C_ExecuteUbergraph_BPA_3pHypertube_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

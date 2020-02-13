#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_GasPillar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GasPillar.BP_GasPillar_C.ReceiveDestroyed
struct ABP_GasPillar_C_ReceiveDestroyed_Params
{
};

// Function BP_GasPillar.BP_GasPillar_C.ExecuteUbergraph_BP_GasPillar
struct ABP_GasPillar_C_ExecuteUbergraph_BP_GasPillar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

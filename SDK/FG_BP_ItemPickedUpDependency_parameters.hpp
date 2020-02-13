#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ItemPickedUpDependency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ItemPickedUpDependency.BP_ItemPickedUpDependency_C.GetDependecyData
struct UBP_ItemPickedUpDependency_C_GetDependecyData_Params
{
	TArray<struct FFAvailabilityDependencyData>        DependecyData;                                            // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

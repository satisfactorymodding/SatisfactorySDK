#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPI_AvailabilityDependencyInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C.GetDependecyData
struct UBPI_AvailabilityDependencyInterface_C_GetDependecyData_Params
{
	TArray<struct FFAvailabilityDependencyData>        DependecyData;                                            // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

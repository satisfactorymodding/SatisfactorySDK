#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ManufacturerMk1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.SetText
struct ABuild_ManufacturerMk1_C_SetText_Params
{
	class FString                                      intText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.UserConstructionScript
struct ABuild_ManufacturerMk1_C_UserConstructionScript_Params
{
};

// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.GainedSignificance
struct ABuild_ManufacturerMk1_C_GainedSignificance_Params
{
};

// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.LostSignificance
struct ABuild_ManufacturerMk1_C_LostSignificance_Params
{
};

// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.ExecuteUbergraph_Build_ManufacturerMk1
struct ABuild_ManufacturerMk1_C_ExecuteUbergraph_Build_ManufacturerMk1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

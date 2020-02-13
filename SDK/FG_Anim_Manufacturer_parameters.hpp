#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_Manufacturer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Anim_Manufacturer.Anim_Manufacturer_C.AnimNotify_ManuEnteredProducing
struct UAnim_Manufacturer_C_AnimNotify_ManuEnteredProducing_Params
{
};

// Function Anim_Manufacturer.Anim_Manufacturer_C.AnimNotify_ManuLeftProducing
struct UAnim_Manufacturer_C_AnimNotify_ManuLeftProducing_Params
{
};

// Function Anim_Manufacturer.Anim_Manufacturer_C.ExecuteUbergraph_Anim_Manufacturer
struct UAnim_Manufacturer_C_ExecuteUbergraph_Anim_Manufacturer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

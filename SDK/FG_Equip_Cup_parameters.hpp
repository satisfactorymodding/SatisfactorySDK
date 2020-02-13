#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Cup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equip_Cup.Equip_Cup_C.WasEquipped
struct AEquip_Cup_C_WasEquipped_Params
{
};

// Function Equip_Cup.Equip_Cup_C.DoDefaultPrimaryFireEffects
struct AEquip_Cup_C_DoDefaultPrimaryFireEffects_Params
{
};

// Function Equip_Cup.Equip_Cup_C.ExecuteUbergraph_Equip_Cup
struct AEquip_Cup_C_ExecuteUbergraph_Equip_Cup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

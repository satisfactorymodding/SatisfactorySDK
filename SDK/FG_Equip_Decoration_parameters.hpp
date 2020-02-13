#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Decoration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equip_Decoration.Equip_Decoration_C.CacheDescriptor
struct AEquip_Decoration_C_CacheDescriptor_Params
{
};

// Function Equip_Decoration.Equip_Decoration_C.WasEquipped
struct AEquip_Decoration_C_WasEquipped_Params
{
};

// Function Equip_Decoration.Equip_Decoration_C.SpawnDecoration
struct AEquip_Decoration_C_SpawnDecoration_Params
{
};

// Function Equip_Decoration.Equip_Decoration_C.ExecuteUbergraph_Equip_Decoration
struct AEquip_Decoration_C_ExecuteUbergraph_Equip_Decoration_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

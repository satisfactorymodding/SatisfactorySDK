#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_GolfCartDispenser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasEquipped
struct AEquip_GolfCartDispenser_C_WasEquipped_Params
{
};

// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.PlaySpawnEffects
struct AEquip_GolfCartDispenser_C_PlaySpawnEffects_Params
{
	class ABP_Golfcart_C**                             GolfCart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasUnEquipped
struct AEquip_GolfCartDispenser_C_WasUnEquipped_Params
{
};

// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.SpawnGolfCart
struct AEquip_GolfCartDispenser_C_SpawnGolfCart_Params
{
};

// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ExecuteUbergraph_Equip_GolfCartDispenser
struct AEquip_GolfCartDispenser_C_ExecuteUbergraph_Equip_GolfCartDispenser_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

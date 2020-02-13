#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Hookshot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equip_Hookshot.Equip_Hookshot_C.ReceiveTick
struct AEquip_Hookshot_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_Hookshot.Equip_Hookshot_C.OnFire
struct AEquip_Hookshot_C_OnFire_Params
{
	bool*                                              attachedToSomething;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Equip_Hookshot.Equip_Hookshot_C.OwnerLanded
struct AEquip_Hookshot_C_OwnerLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Equip_Hookshot.Equip_Hookshot_C.OnWireDetach
struct AEquip_Hookshot_C_OnWireDetach_Params
{
};

// Function Equip_Hookshot.Equip_Hookshot_C.DidNotAffordUse
struct AEquip_Hookshot_C_DidNotAffordUse_Params
{
};

// Function Equip_Hookshot.Equip_Hookshot_C.ExecuteUbergraph_Equip_Hookshot
struct AEquip_Hookshot_C_ExecuteUbergraph_Equip_Hookshot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

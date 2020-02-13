#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_HazardSuit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equip_HazardSuit.Equip_HazardSuit_C.EnablePostProcessing
struct AEquip_HazardSuit_C_EnablePostProcessing_Params
{
	bool*                                              mEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_HazardSuit.Equip_HazardSuit_C.AdjustDamage
struct AEquip_HazardSuit_C_AdjustDamage_Params
{
	float*                                             damageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Equip_HazardSuit.Equip_HazardSuit_C.WasUnEquipped
struct AEquip_HazardSuit_C_WasUnEquipped_Params
{
};

// Function Equip_HazardSuit.Equip_HazardSuit_C.WasEquipped
struct AEquip_HazardSuit_C_WasEquipped_Params
{
};

// Function Equip_HazardSuit.Equip_HazardSuit_C.ReceiveTick
struct AEquip_HazardSuit_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equip_HazardSuit.Equip_HazardSuit_C.ExecuteUbergraph_Equip_HazardSuit
struct AEquip_HazardSuit_C_ExecuteUbergraph_Equip_HazardSuit_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

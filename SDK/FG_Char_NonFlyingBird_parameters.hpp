#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_NonFlyingBird_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnRep_mIsLuring
struct AChar_NonFlyingBird_C_OnRep_mIsLuring_Params
{
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.SetLuring
struct AChar_NonFlyingBird_C_SetLuring_Params
{
	bool*                                              isLuring;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveBeginPlay
struct AChar_NonFlyingBird_C_ReceiveBeginPlay_Params
{
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveTick
struct AChar_NonFlyingBird_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.TryToJump
struct AChar_NonFlyingBird_C_TryToJump_Params
{
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLanded
struct AChar_NonFlyingBird_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveDied
struct AChar_NonFlyingBird_C_ReceiveDied_Params
{
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.NotifyOnTakeDamage
struct AChar_NonFlyingBird_C_NotifyOnTakeDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             damageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ReceiveEndPlay
struct AChar_NonFlyingBird_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.GainedSignificance
struct AChar_NonFlyingBird_C_GainedSignificance_Params
{
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.LostSignificance
struct AChar_NonFlyingBird_C_LostSignificance_Params
{
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.ExecuteUbergraph_Char_NonFlyingBird
struct AChar_NonFlyingBird_C_ExecuteUbergraph_Char_NonFlyingBird_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_NonFlyingBird.Char_NonFlyingBird_C.OnLandedDelegate__DelegateSignature
struct AChar_NonFlyingBird_C_OnLandedDelegate__DelegateSignature_Params
{
	class AChar_NonFlyingBird_C**                      selfPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

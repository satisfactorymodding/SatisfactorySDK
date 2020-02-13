#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_Hog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Char_Hog.Char_Hog_C.OnRep_mIsThreatened
struct AChar_Hog_C_OnRep_mIsThreatened_Params
{
};

// Function Char_Hog.Char_Hog_C.StartChargeMovement
struct AChar_Hog_C_StartChargeMovement_Params
{
};

// Function Char_Hog.Char_Hog_C.UpdateChargeMovement
struct AChar_Hog_C_UpdateChargeMovement_Params
{
};

// Function Char_Hog.Char_Hog_C.StopChargeMovement
struct AChar_Hog_C_StopChargeMovement_Params
{
};

// Function Char_Hog.Char_Hog_C.UpdateChargeDirection
struct AChar_Hog_C_UpdateChargeDirection_Params
{
};

// Function Char_Hog.Char_Hog_C.ReceiveHit
struct AChar_Hog_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.NotifyOnTakeDamage
struct AChar_Hog_C_NotifyOnTakeDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             damageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.CheckTargetHeight
struct AChar_Hog_C_CheckTargetHeight_Params
{
};

// Function Char_Hog.Char_Hog_C.ReceiveTick
struct AChar_Hog_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.circle
struct AChar_Hog_C_circle_Params
{
};

// Function Char_Hog.Char_Hog_C.StartCircling
struct AChar_Hog_C_StartCircling_Params
{
	class UBTT_CircleMove_C**                          BTTCircleMove;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.StopCircling
struct AChar_Hog_C_StopCircling_Params
{
};

// Function Char_Hog.Char_Hog_C.ReceiveDied
struct AChar_Hog_C_ReceiveDied_Params
{
};

// Function Char_Hog.Char_Hog_C.ReceiveBeginPlay
struct AChar_Hog_C_ReceiveBeginPlay_Params
{
};

// Function Char_Hog.Char_Hog_C.GainedSignificance
struct AChar_Hog_C_GainedSignificance_Params
{
};

// Function Char_Hog.Char_Hog_C.LostSignificance
struct AChar_Hog_C_LostSignificance_Params
{
};

// Function Char_Hog.Char_Hog_C.ReceiveEndPlay
struct AChar_Hog_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.NotifyOnWeakspotHit
struct AChar_Hog_C_NotifyOnWeakspotHit_Params
{
};

// Function Char_Hog.Char_Hog_C.NotifyOnTakePointDamage
struct AChar_Hog_C_NotifyOnTakePointDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.ExecuteUbergraph_Char_Hog
struct AChar_Hog_C_ExecuteUbergraph_Char_Hog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Hog.Char_Hog_C.OnChargeMovementStopped__DelegateSignature
struct AChar_Hog_C_OnChargeMovementStopped__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

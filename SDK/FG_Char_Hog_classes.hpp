#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_Hog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Char_Hog.Char_Hog_C
// 0x0090 (0x0A30 - 0x09A0)
class AChar_Hog_C : public AFGEnemy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ChargeParticle;                                           // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mStuckInMovement;                                         // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mDebug;                                                   // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09B2(0x0002) MISSED OFFSET
	struct FVector                                     mChargeDirection;                                         // 0x09B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mChargeDistance;                                          // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	struct FTimerHandle                                mChargeTimerHandle;                                       // 0x09C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               mIsCharging;                                              // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChargeMovementStopped;                                  // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                mChargeDamage;                                            // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 mRotationRateCurveHog;                                    // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsThreatened;                                            // 0x09F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	float                                              mChargeDamageCooldown;                                    // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mChargeDamageCooldownDefault;                             // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mDoPanicName;                                             // 0x0A04(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mCircling;                                                // 0x0A0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A0D(0x0003) MISSED OFFSET
	float                                              mCircleAngle;                                             // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A14(0x0004) MISSED OFFSET
	class UBTT_CircleMove_C*                           mBTTCircleMove;                                           // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mDamageCauserBBKey;                                       // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mStaggered;                                               // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsAlpha;                                                 // 0x0A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0A2A(0x0002) MISSED OFFSET
	float                                              mStaggerCooldown;                                         // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Char_Hog.Char_Hog_C");
		return ptr;
	}


	void OnRep_mIsThreatened();
	void StartChargeMovement();
	void UpdateChargeMovement();
	void StopChargeMovement();
	void UpdateChargeDirection();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void NotifyOnTakeDamage(class AActor** DamagedActor, float* damageAmount, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void CheckTargetHeight();
	void ReceiveTick(float* DeltaSeconds);
	void circle();
	void StartCircling(class UBTT_CircleMove_C** BTTCircleMove);
	void StopCircling();
	void ReceiveDied();
	void ReceiveBeginPlay();
	void GainedSignificance();
	void LostSignificance();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void NotifyOnWeakspotHit();
	void NotifyOnTakePointDamage(class AActor** DamagedActor, float* Damage, class AController** InstigatedBy, struct FVector* HitLocation, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class UDamageType** DamageType, class AActor** DamageCauser);
	void ExecuteUbergraph_Char_Hog(int* EntryPoint);
	void OnChargeMovementStopped__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

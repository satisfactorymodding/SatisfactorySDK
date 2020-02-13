// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_Hog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Char_Hog.Char_Hog_C.OnRep_mIsThreatened
// (BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::OnRep_mIsThreatened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.OnRep_mIsThreatened");

	AChar_Hog_C_OnRep_mIsThreatened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.StartChargeMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::StartChargeMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.StartChargeMovement");

	AChar_Hog_C_StartChargeMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.UpdateChargeMovement
// (Public, BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::UpdateChargeMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.UpdateChargeMovement");

	AChar_Hog_C_UpdateChargeMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.StopChargeMovement
// (Public, BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::StopChargeMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.StopChargeMovement");

	AChar_Hog_C_StopChargeMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.UpdateChargeDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::UpdateChargeDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.UpdateChargeDirection");

	AChar_Hog_C_UpdateChargeDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AChar_Hog_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.ReceiveHit");

	AChar_Hog_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.NotifyOnTakeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         damageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Hog_C::NotifyOnTakeDamage(class AActor** DamagedActor, float* damageAmount, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.NotifyOnTakeDamage");

	AChar_Hog_C_NotifyOnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.damageAmount = damageAmount;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.CheckTargetHeight
// (BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::CheckTargetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.CheckTargetHeight");

	AChar_Hog_C_CheckTargetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Hog_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.ReceiveTick");

	AChar_Hog_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.circle
// (BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::circle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.circle");

	AChar_Hog_C_circle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.StartCircling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTT_CircleMove_C**      BTTCircleMove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Hog_C::StartCircling(class UBTT_CircleMove_C** BTTCircleMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.StartCircling");

	AChar_Hog_C_StartCircling_Params params;
	params.BTTCircleMove = BTTCircleMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.StopCircling
// (BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::StopCircling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.StopCircling");

	AChar_Hog_C_StopCircling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.ReceiveDied
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::ReceiveDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.ReceiveDied");

	AChar_Hog_C_ReceiveDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChar_Hog_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.ReceiveBeginPlay");

	AChar_Hog_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void AChar_Hog_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.GainedSignificance");

	AChar_Hog_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.LostSignificance
// (Event, Public, BlueprintEvent)

void AChar_Hog_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.LostSignificance");

	AChar_Hog_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Hog_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.ReceiveEndPlay");

	AChar_Hog_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.NotifyOnWeakspotHit
// (Event, Public, BlueprintEvent)

void AChar_Hog_C::NotifyOnWeakspotHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.NotifyOnWeakspotHit");

	AChar_Hog_C_NotifyOnWeakspotHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.NotifyOnTakePointDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Hog_C::NotifyOnTakePointDamage(class AActor** DamagedActor, float* Damage, class AController** InstigatedBy, struct FVector* HitLocation, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class UDamageType** DamageType, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.NotifyOnTakePointDamage");

	AChar_Hog_C_NotifyOnTakePointDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.ExecuteUbergraph_Char_Hog
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Hog_C::ExecuteUbergraph_Char_Hog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.ExecuteUbergraph_Char_Hog");

	AChar_Hog_C_ExecuteUbergraph_Char_Hog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Hog.Char_Hog_C.OnChargeMovementStopped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AChar_Hog_C::OnChargeMovementStopped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Hog.Char_Hog_C.OnChargeMovementStopped__DelegateSignature");

	AChar_Hog_C_OnChargeMovementStopped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

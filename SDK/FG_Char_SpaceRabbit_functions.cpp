// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_SpaceRabbit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Char_SpaceRabbit.Char_SpaceRabbit_C.GetLookAtDecription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AChar_SpaceRabbit_C::GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.GetLookAtDecription");

	AChar_SpaceRabbit_C_GetLookAtDecription_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.IsUseable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChar_SpaceRabbit_C::IsUseable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.IsUseable");

	AChar_SpaceRabbit_C_IsUseable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                atLocation                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent**    componentHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUseState               out_useState                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChar_SpaceRabbit_C::UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateUseState");

	AChar_SpaceRabbit_C_UpdateUseState_Params params;
	params.byCharacter = byCharacter;
	params.atLocation = atLocation;
	params.componentHit = componentHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_useState != nullptr)
		*out_useState = params.out_useState;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetupLootTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::SetupLootTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetupLootTimer");

	AChar_SpaceRabbit_C_SetupLootTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnRep_mLootTableIndex
// (BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::OnRep_mLootTableIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnRep_mLootTableIndex");

	AChar_SpaceRabbit_C_OnRep_mLootTableIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.RollLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::RollLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.RollLoot");

	AChar_SpaceRabbit_C_RollLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetNewFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 newFriend                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::SetNewFriend(class AActor** newFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetNewFriend");

	AChar_SpaceRabbit_C_SetNewFriend_Params params;
	params.newFriend = newFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.StopBackwardWalk
// (Public, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::StopBackwardWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.StopBackwardWalk");

	AChar_SpaceRabbit_C_StopBackwardWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateWalkBackMovement
// (Public, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::UpdateWalkBackMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateWalkBackMovement");

	AChar_SpaceRabbit_C_UpdateWalkBackMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateWalkBackDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::UpdateWalkBackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateWalkBackDirection");

	AChar_SpaceRabbit_C_UpdateWalkBackDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.StartWalkBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::StartWalkBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.StartWalkBack");

	AChar_SpaceRabbit_C_StartWalkBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnUseStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChar_SpaceRabbit_C::OnUseStop(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnUseStop");

	AChar_SpaceRabbit_C_OnUseStop_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.RegisterInteractingPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::RegisterInteractingPlayer(class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.RegisterInteractingPlayer");

	AChar_SpaceRabbit_C_RegisterInteractingPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.StartIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChar_SpaceRabbit_C::StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.StartIsLookedAt");

	AChar_SpaceRabbit_C_StartIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.StopIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChar_SpaceRabbit_C::StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.StopIsLookedAt");

	AChar_SpaceRabbit_C_StopIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.UnregisterInteractingPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::UnregisterInteractingPlayer(class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.UnregisterInteractingPlayer");

	AChar_SpaceRabbit_C_UnregisterInteractingPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveTick");

	AChar_SpaceRabbit_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         damageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::NotifyOnTakeDamage(class AActor** DamagedActor, float* damageAmount, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakeDamage");

	AChar_SpaceRabbit_C_NotifyOnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.damageAmount = damageAmount;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveDied
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::ReceiveDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveDied");

	AChar_SpaceRabbit_C_ReceiveDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakePointDamage
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

void AChar_SpaceRabbit_C::NotifyOnTakePointDamage(class AActor** DamagedActor, float* Damage, class AController** InstigatedBy, struct FVector* HitLocation, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class UDamageType** DamageType, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakePointDamage");

	AChar_SpaceRabbit_C_NotifyOnTakePointDamage_Params params;
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


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakeRadialDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::NotifyOnTakeRadialDamage(class AActor** DamagedActor, float* Damage, class AController** InstigatedBy, class UDamageType** DamageType, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakeRadialDamage");

	AChar_SpaceRabbit_C_NotifyOnTakeRadialDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChar_SpaceRabbit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveBeginPlay");

	AChar_SpaceRabbit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.PlayConsumeItemEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 itemDescriptor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::PlayConsumeItemEffect(class UClass** itemDescriptor, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.PlayConsumeItemEffect");

	AChar_SpaceRabbit_C_PlayConsumeItemEffect_Params params;
	params.itemDescriptor = itemDescriptor;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnUse
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChar_SpaceRabbit_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnUse");

	AChar_SpaceRabbit_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.ExecuteUbergraph_Char_SpaceRabbit
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_SpaceRabbit_C::ExecuteUbergraph_Char_SpaceRabbit(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.ExecuteUbergraph_Char_SpaceRabbit");

	AChar_SpaceRabbit_C_ExecuteUbergraph_Char_SpaceRabbit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnWalkBackStopped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AChar_SpaceRabbit_C::OnWalkBackStopped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnWalkBackStopped__DelegateSignature");

	AChar_SpaceRabbit_C_OnWalkBackStopped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

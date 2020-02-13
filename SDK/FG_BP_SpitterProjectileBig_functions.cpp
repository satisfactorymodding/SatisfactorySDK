// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SpitterProjectileBig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.GetNewTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpitterProjectileBig_C::GetNewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.GetNewTarget");

	ABP_SpitterProjectileBig_C_GetNewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.GetNewTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpitterProjectileBig_C::GetNewTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.GetNewTargetLocation");

	ABP_SpitterProjectileBig_C_GetNewTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpitterProjectileBig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.ReceiveBeginPlay");

	ABP_SpitterProjectileBig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.SplitProjectile
// (BlueprintCallable, BlueprintEvent)

void ABP_SpitterProjectileBig_C::SplitProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.SplitProjectile");

	ABP_SpitterProjectileBig_C_SplitProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpitterProjectileBig_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.ReceiveTick");

	ABP_SpitterProjectileBig_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.BndEvt__mProjectileMovement_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent**        component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpitterProjectileBig_C::BndEvt__mProjectileMovement_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** component, bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.BndEvt__mProjectileMovement_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	ABP_SpitterProjectileBig_C_BndEvt__mProjectileMovement_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.component = component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.PlayExplosionEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_SpitterProjectileBig_C::PlayExplosionEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.PlayExplosionEffects");

	ABP_SpitterProjectileBig_C_PlayExplosionEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.OnTakeAnyDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpitterProjectileBig_C::OnTakeAnyDamage_Event_1(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.OnTakeAnyDamage_Event_1");

	ABP_SpitterProjectileBig_C_OnTakeAnyDamage_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.SpitterDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DeadActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpitterProjectileBig_C::SpitterDied(class AActor** DeadActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.SpitterDied");

	ABP_SpitterProjectileBig_C_SpitterDied_Params params;
	params.DeadActor = DeadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)

void ABP_SpitterProjectileBig_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.DestroySelf");

	ABP_SpitterProjectileBig_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.ExecuteUbergraph_BP_SpitterProjectileBig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpitterProjectileBig_C::ExecuteUbergraph_BP_SpitterProjectileBig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpitterProjectileBig.BP_SpitterProjectileBig_C.ExecuteUbergraph_BP_SpitterProjectileBig");

	ABP_SpitterProjectileBig_C_ExecuteUbergraph_BP_SpitterProjectileBig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

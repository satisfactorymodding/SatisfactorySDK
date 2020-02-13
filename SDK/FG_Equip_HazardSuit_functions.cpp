// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_HazardSuit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_HazardSuit.Equip_HazardSuit_C.EnablePostProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          mEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_HazardSuit_C::EnablePostProcessing(bool* mEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazardSuit.Equip_HazardSuit_C.EnablePostProcessing");

	AEquip_HazardSuit_C_EnablePostProcessing_Params params;
	params.mEnabled = mEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_HazardSuit.Equip_HazardSuit_C.AdjustDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         damageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEquip_HazardSuit_C::AdjustDamage(float* damageAmount, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazardSuit.Equip_HazardSuit_C.AdjustDamage");

	AEquip_HazardSuit_C_AdjustDamage_Params params;
	params.damageAmount = damageAmount;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_HazardSuit.Equip_HazardSuit_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_HazardSuit_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazardSuit.Equip_HazardSuit_C.WasUnEquipped");

	AEquip_HazardSuit_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_HazardSuit.Equip_HazardSuit_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_HazardSuit_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazardSuit.Equip_HazardSuit_C.WasEquipped");

	AEquip_HazardSuit_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_HazardSuit.Equip_HazardSuit_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_HazardSuit_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazardSuit.Equip_HazardSuit_C.ReceiveTick");

	AEquip_HazardSuit_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_HazardSuit.Equip_HazardSuit_C.ExecuteUbergraph_Equip_HazardSuit
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_HazardSuit_C::ExecuteUbergraph_Equip_HazardSuit(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazardSuit.Equip_HazardSuit_C.ExecuteUbergraph_Equip_HazardSuit");

	AEquip_HazardSuit_C_ExecuteUbergraph_Equip_HazardSuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

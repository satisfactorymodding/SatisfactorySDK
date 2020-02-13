// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TakeDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TakeDamage.Widget_TakeDamage_C.GetIsHealthCritical
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHealthCritical               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_TakeDamage_C::GetIsHealthCritical(bool* IsHealthCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.GetIsHealthCritical");

	UWidget_TakeDamage_C_GetIsHealthCritical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHealthCritical != nullptr)
		*IsHealthCritical = params.IsHealthCritical;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TakeDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.Construct");

	UWidget_TakeDamage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.SpawnPointer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TakeDamage_C::SpawnPointer(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.SpawnPointer");

	UWidget_TakeDamage_C_SpawnPointer_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.OnRadiationDamage
// (BlueprintCallable, BlueprintEvent)

void UWidget_TakeDamage_C::OnRadiationDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.OnRadiationDamage");

	UWidget_TakeDamage_C_OnRadiationDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.SetPlayerPawn
// (BlueprintCallable, BlueprintEvent)

void UWidget_TakeDamage_C::SetPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.SetPlayerPawn");

	UWidget_TakeDamage_C_SetPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.ShowWarningMessage
// (BlueprintCallable, BlueprintEvent)

void UWidget_TakeDamage_C::ShowWarningMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.ShowWarningMessage");

	UWidget_TakeDamage_C_ShowWarningMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.UpdateRadiation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RadiationActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TakeDamage_C::UpdateRadiation(bool* RadiationActive, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.UpdateRadiation");

	UWidget_TakeDamage_C_UpdateRadiation_Params params;
	params.RadiationActive = RadiationActive;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TakeDamage.Widget_TakeDamage_C.ExecuteUbergraph_Widget_TakeDamage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TakeDamage_C::ExecuteUbergraph_Widget_TakeDamage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TakeDamage.Widget_TakeDamage_C.ExecuteUbergraph_Widget_TakeDamage");

	UWidget_TakeDamage_C_ExecuteUbergraph_Widget_TakeDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

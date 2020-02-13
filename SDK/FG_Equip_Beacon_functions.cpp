// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Beacon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_Beacon.Equip_Beacon_C.SpawnBeacon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEquip_Beacon_C::SpawnBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Beacon.Equip_Beacon_C.SpawnBeacon");

	AEquip_Beacon_C_SpawnBeacon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Beacon.Equip_Beacon_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_Beacon_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Beacon.Equip_Beacon_C.WasEquipped");

	AEquip_Beacon_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Beacon.Equip_Beacon_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_Beacon_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Beacon.Equip_Beacon_C.WasUnEquipped");

	AEquip_Beacon_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Beacon.Equip_Beacon_C.PlayConsumeEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFGConsumableDescriptor** consumable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Beacon_C::PlayConsumeEffects(class UFGConsumableDescriptor** consumable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Beacon.Equip_Beacon_C.PlayConsumeEffects");

	AEquip_Beacon_C_PlayConsumeEffects_Params params;
	params.consumable = consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Beacon.Equip_Beacon_C.ExecuteUbergraph_Equip_Beacon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Beacon_C::ExecuteUbergraph_Equip_Beacon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Beacon.Equip_Beacon_C.ExecuteUbergraph_Equip_Beacon");

	AEquip_Beacon_C_ExecuteUbergraph_Equip_Beacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_PortableMinerDispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.SpawnPortableMiner
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFGResourceNode**        resourceNode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_PortableMinerDispenser_C::SpawnPortableMiner(class AFGResourceNode** resourceNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.SpawnPortableMiner");

	AEquip_PortableMinerDispenser_C_SpawnPortableMiner_Params params;
	params.resourceNode = resourceNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.PlaySpawnEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PortableMiner_C**    PortableMiner                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_PortableMinerDispenser_C::PlaySpawnEffects(class ABP_PortableMiner_C** PortableMiner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.PlaySpawnEffects");

	AEquip_PortableMinerDispenser_C_PlaySpawnEffects_Params params;
	params.PortableMiner = PortableMiner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_PortableMinerDispenser_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasEquipped");

	AEquip_PortableMinerDispenser_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_PortableMinerDispenser_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasUnEquipped");

	AEquip_PortableMinerDispenser_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.ExecuteUbergraph_Equip_PortableMinerDispenser
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_PortableMinerDispenser_C::ExecuteUbergraph_Equip_PortableMinerDispenser(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.ExecuteUbergraph_Equip_PortableMinerDispenser");

	AEquip_PortableMinerDispenser_C_ExecuteUbergraph_Equip_PortableMinerDispenser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_GolfCartDispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_GolfCartDispenser_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasEquipped");

	AEquip_GolfCartDispenser_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.PlaySpawnEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Golfcart_C**         GolfCart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_GolfCartDispenser_C::PlaySpawnEffects(class ABP_Golfcart_C** GolfCart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.PlaySpawnEffects");

	AEquip_GolfCartDispenser_C_PlaySpawnEffects_Params params;
	params.GolfCart = GolfCart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_GolfCartDispenser_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasUnEquipped");

	AEquip_GolfCartDispenser_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.SpawnGolfCart
// (Event, Public, BlueprintEvent)

void AEquip_GolfCartDispenser_C::SpawnGolfCart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.SpawnGolfCart");

	AEquip_GolfCartDispenser_C_SpawnGolfCart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ExecuteUbergraph_Equip_GolfCartDispenser
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_GolfCartDispenser_C::ExecuteUbergraph_Equip_GolfCartDispenser(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ExecuteUbergraph_Equip_GolfCartDispenser");

	AEquip_GolfCartDispenser_C_ExecuteUbergraph_Equip_GolfCartDispenser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

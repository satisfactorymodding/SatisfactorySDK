// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_RebarGun_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFireEffect
// (Event, Protected, BlueprintEvent)

void AEquip_RebarGun_Projectile_C::PlayFireEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFireEffect");

	AEquip_RebarGun_Projectile_C_PlayFireEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayReloadEffects
// (Event, Protected, BlueprintEvent)

void AEquip_RebarGun_Projectile_C::PlayReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayReloadEffects");

	AEquip_RebarGun_Projectile_C_PlayReloadEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_RebarGun_Projectile_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasEquipped");

	AEquip_RebarGun_Projectile_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_RebarGun_Projectile_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasUnEquipped");

	AEquip_RebarGun_Projectile_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFailedToFireEffects
// (Event, Public, BlueprintEvent)

void AEquip_RebarGun_Projectile_C::PlayFailedToFireEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFailedToFireEffects");

	AEquip_RebarGun_Projectile_C_PlayFailedToFireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.ExecuteUbergraph_Equip_RebarGun_Projectile
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_RebarGun_Projectile_C::ExecuteUbergraph_Equip_RebarGun_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.ExecuteUbergraph_Equip_RebarGun_Projectile");

	AEquip_RebarGun_Projectile_C_ExecuteUbergraph_Equip_RebarGun_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

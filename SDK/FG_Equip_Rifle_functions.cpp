// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Rifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_Rifle.Equip_Rifle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEquip_Rifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.ReceiveBeginPlay");

	AEquip_Rifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Rifle.Equip_Rifle_C.PlayReloadEffects
// (Event, Protected, BlueprintEvent)

void AEquip_Rifle_C::PlayReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.PlayReloadEffects");

	AEquip_Rifle_C_PlayReloadEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Rifle.Equip_Rifle_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_Rifle_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.WasUnEquipped");

	AEquip_Rifle_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Rifle.Equip_Rifle_C.PlayFireEffect
// (Event, Protected, BlueprintEvent)

void AEquip_Rifle_C::PlayFireEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.PlayFireEffect");

	AEquip_Rifle_C_PlayFireEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Rifle.Equip_Rifle_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_Rifle_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.WasEquipped");

	AEquip_Rifle_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Rifle.Equip_Rifle_C.ExecuteUbergraph_Equip_Rifle
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Rifle_C::ExecuteUbergraph_Equip_Rifle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.ExecuteUbergraph_Equip_Rifle");

	AEquip_Rifle_C_ExecuteUbergraph_Equip_Rifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Rifle.Equip_Rifle_C.Fire__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEquip_Rifle_C::Fire__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Fire__DelegateSignature");

	AEquip_Rifle_C_Fire__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

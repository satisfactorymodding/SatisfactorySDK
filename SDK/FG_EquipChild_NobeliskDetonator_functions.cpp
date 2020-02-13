// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_EquipChild_NobeliskDetonator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyReloadComplete
// (Event, Public, BlueprintEvent)

void AEquipChild_NobeliskDetonator_C::NotifyReloadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyReloadComplete");

	AEquipChild_NobeliskDetonator_C_NotifyReloadComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyEndPrimaryFire
// (Event, Public, BlueprintEvent)

void AEquipChild_NobeliskDetonator_C::NotifyEndPrimaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyEndPrimaryFire");

	AEquipChild_NobeliskDetonator_C_NotifyEndPrimaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyReloading
// (Event, Public, BlueprintEvent)

void AEquipChild_NobeliskDetonator_C::NotifyReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyReloading");

	AEquipChild_NobeliskDetonator_C_NotifyReloading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyBeginPrimaryFire
// (Event, Public, BlueprintEvent)

void AEquipChild_NobeliskDetonator_C::NotifyBeginPrimaryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyBeginPrimaryFire");

	AEquipChild_NobeliskDetonator_C_NotifyBeginPrimaryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.OnEquip
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquipChild_NobeliskDetonator_C::OnEquip(class AFGCharacterPlayer** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.OnEquip");

	AEquipChild_NobeliskDetonator_C_OnEquip_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyPrimaryFireExecuted
// (Event, Public, BlueprintEvent)

void AEquipChild_NobeliskDetonator_C::NotifyPrimaryFireExecuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.NotifyPrimaryFireExecuted");

	AEquipChild_NobeliskDetonator_C_NotifyPrimaryFireExecuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.ExecuteUbergraph_EquipChild_NobeliskDetonator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquipChild_NobeliskDetonator_C::ExecuteUbergraph_EquipChild_NobeliskDetonator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipChild_NobeliskDetonator.EquipChild_NobeliskDetonator_C.ExecuteUbergraph_EquipChild_NobeliskDetonator");

	AEquipChild_NobeliskDetonator_C_ExecuteUbergraph_EquipChild_NobeliskDetonator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

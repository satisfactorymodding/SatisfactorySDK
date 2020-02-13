// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_C4Dispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_C4Dispenser.Equip_C4Dispenser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEquip_C4Dispenser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_C4Dispenser.Equip_C4Dispenser_C.ReceiveBeginPlay");

	AEquip_C4Dispenser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_C4Dispenser.Equip_C4Dispenser_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_C4Dispenser_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_C4Dispenser.Equip_C4Dispenser_C.WasEquipped");

	AEquip_C4Dispenser_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_C4Dispenser.Equip_C4Dispenser_C.ExecuteUbergraph_Equip_C4Dispenser
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_C4Dispenser_C::ExecuteUbergraph_Equip_C4Dispenser(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_C4Dispenser.Equip_C4Dispenser_C.ExecuteUbergraph_Equip_C4Dispenser");

	AEquip_C4Dispenser_C_ExecuteUbergraph_Equip_C4Dispenser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

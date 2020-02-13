// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Cup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_Cup.Equip_Cup_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_Cup_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Cup.Equip_Cup_C.WasEquipped");

	AEquip_Cup_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Cup.Equip_Cup_C.DoDefaultPrimaryFireEffects
// (Event, Public, BlueprintEvent)

void AEquip_Cup_C::DoDefaultPrimaryFireEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Cup.Equip_Cup_C.DoDefaultPrimaryFireEffects");

	AEquip_Cup_C_DoDefaultPrimaryFireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Cup.Equip_Cup_C.ExecuteUbergraph_Equip_Cup
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Cup_C::ExecuteUbergraph_Equip_Cup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Cup.Equip_Cup_C.ExecuteUbergraph_Equip_Cup");

	AEquip_Cup_C_ExecuteUbergraph_Equip_Cup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

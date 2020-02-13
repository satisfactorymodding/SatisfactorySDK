// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Decoration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_Decoration.Equip_Decoration_C.CacheDescriptor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEquip_Decoration_C::CacheDescriptor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Decoration.Equip_Decoration_C.CacheDescriptor");

	AEquip_Decoration_C_CacheDescriptor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Decoration.Equip_Decoration_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_Decoration_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Decoration.Equip_Decoration_C.WasEquipped");

	AEquip_Decoration_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Decoration.Equip_Decoration_C.SpawnDecoration
// (Event, Public, BlueprintEvent)

void AEquip_Decoration_C::SpawnDecoration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Decoration.Equip_Decoration_C.SpawnDecoration");

	AEquip_Decoration_C_SpawnDecoration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Decoration.Equip_Decoration_C.ExecuteUbergraph_Equip_Decoration
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Decoration_C::ExecuteUbergraph_Equip_Decoration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Decoration.Equip_Decoration_C.ExecuteUbergraph_Equip_Decoration");

	AEquip_Decoration_C_ExecuteUbergraph_Equip_Decoration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

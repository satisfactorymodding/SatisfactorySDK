// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_DowsingStick_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_DowsingStick.Equip_DowsingStick_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AEquip_DowsingStick_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_DowsingStick.Equip_DowsingStick_C.CustomEvent_1");

	AEquip_DowsingStick_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_DowsingStick.Equip_DowsingStick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEquip_DowsingStick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_DowsingStick.Equip_DowsingStick_C.ReceiveBeginPlay");

	AEquip_DowsingStick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_DowsingStick.Equip_DowsingStick_C.ExecuteUbergraph_Equip_DowsingStick
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_DowsingStick_C::ExecuteUbergraph_Equip_DowsingStick(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_DowsingStick.Equip_DowsingStick_C.ExecuteUbergraph_Equip_DowsingStick");

	AEquip_DowsingStick_C_ExecuteUbergraph_Equip_DowsingStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

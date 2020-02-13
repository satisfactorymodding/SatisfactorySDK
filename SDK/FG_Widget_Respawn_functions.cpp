// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Respawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Respawn.Widget_Respawn_C.GetRandomTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Respawn_C::GetRandomTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.GetRandomTip");

	UWidget_Respawn_C_GetRandomTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Respawn.Widget_Respawn_C.SetTipNumber
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Respawn_C::SetTipNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.SetTipNumber");

	UWidget_Respawn_C_SetTipNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Respawn.Widget_Respawn_C.UpdateProgressBlips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Respawn_C::UpdateProgressBlips()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.UpdateProgressBlips");

	UWidget_Respawn_C_UpdateProgressBlips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Respawn.Widget_Respawn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Respawn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.Construct");

	UWidget_Respawn_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Respawn.Widget_Respawn_C.SpawnRespawnMessage
// (BlueprintCallable, BlueprintEvent)

void UWidget_Respawn_C::SpawnRespawnMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.SpawnRespawnMessage");

	UWidget_Respawn_C_SpawnRespawnMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Respawn.Widget_Respawn_C.MoveProgressbar
// (BlueprintCallable, BlueprintEvent)

void UWidget_Respawn_C::MoveProgressbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.MoveProgressbar");

	UWidget_Respawn_C_MoveProgressbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Respawn.Widget_Respawn_C.ExecuteUbergraph_Widget_Respawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Respawn_C::ExecuteUbergraph_Widget_Respawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Respawn.Widget_Respawn_C.ExecuteUbergraph_Widget_Respawn");

	UWidget_Respawn_C_ExecuteUbergraph_Widget_Respawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

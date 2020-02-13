// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_ResourceMiner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_ResourceMiner.Equip_ResourceMiner_C.StopMining
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEquip_ResourceMiner_C::StopMining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.StopMining");

	AEquip_ResourceMiner_C_StopMining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartMining
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEquip_ResourceMiner_C::StartMining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartMining");

	AEquip_ResourceMiner_C_StartMining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_ResourceMiner_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.WasEquipped");

	AEquip_ResourceMiner_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayFinalEffects
// (BlueprintCallable, BlueprintEvent)

void AEquip_ResourceMiner_C::PlayFinalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayFinalEffects");

	AEquip_ResourceMiner_C_PlayFinalEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayMiningEffect
// (BlueprintCallable, BlueprintEvent)

void AEquip_ResourceMiner_C::PlayMiningEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayMiningEffect");

	AEquip_ResourceMiner_C_PlayMiningEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartCameraShake
// (BlueprintCallable, BlueprintEvent)

void AEquip_ResourceMiner_C::StartCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartCameraShake");

	AEquip_ResourceMiner_C_StartCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlaySecondEffects
// (BlueprintCallable, BlueprintEvent)

void AEquip_ResourceMiner_C::PlaySecondEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlaySecondEffects");

	AEquip_ResourceMiner_C_PlaySecondEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ResourceMiner.Equip_ResourceMiner_C.ExecuteUbergraph_Equip_ResourceMiner
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_ResourceMiner_C::ExecuteUbergraph_Equip_ResourceMiner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ResourceMiner.Equip_ResourceMiner_C.ExecuteUbergraph_Equip_ResourceMiner");

	AEquip_ResourceMiner_C_ExecuteUbergraph_Equip_ResourceMiner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

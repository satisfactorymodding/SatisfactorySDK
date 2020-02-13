// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_JetPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_JetPack.Equip_JetPack_C.GetMaxFuel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEquip_JetPack_C::GetMaxFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetMaxFuel");

	AEquip_JetPack_C_GetMaxFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_JetPack.Equip_JetPack_C.GetCurrentFuel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEquip_JetPack_C::GetCurrentFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetCurrentFuel");

	AEquip_JetPack_C_GetCurrentFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_JetPack.Equip_JetPack_C.GetNewVelocityWhenThrusting
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AEquip_JetPack_C::GetNewVelocityWhenThrusting(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetNewVelocityWhenThrusting");

	AEquip_JetPack_C_GetNewVelocityWhenThrusting_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_JetPack.Equip_JetPack_C.CanThrust
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEquip_JetPack_C::CanThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.CanThrust");

	AEquip_JetPack_C_CanThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_JetPack.Equip_JetPack_C.OnStartThrusting
// (Event, Public, BlueprintEvent)

void AEquip_JetPack_C::OnStartThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnStartThrusting");

	AEquip_JetPack_C_OnStartThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.OnStopThrusting
// (Event, Public, BlueprintEvent)

void AEquip_JetPack_C::OnStopThrusting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnStopThrusting");

	AEquip_JetPack_C_OnStopThrusting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_JetPack_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ReceiveTick");

	AEquip_JetPack_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.ConsumeFuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_JetPack_C::ConsumeFuel(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ConsumeFuel");

	AEquip_JetPack_C_ConsumeFuel_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.RegenerateFuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_JetPack_C::RegenerateFuel(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.RegenerateFuel");

	AEquip_JetPack_C_RegenerateFuel_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEquip_JetPack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ReceiveBeginPlay");

	AEquip_JetPack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_JetPack_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.WasEquipped");

	AEquip_JetPack_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_JetPack_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.WasUnEquipped");

	AEquip_JetPack_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_JetPack.Equip_JetPack_C.ExecuteUbergraph_Equip_JetPack
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_JetPack_C::ExecuteUbergraph_Equip_JetPack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ExecuteUbergraph_Equip_JetPack");

	AEquip_JetPack_C_ExecuteUbergraph_Equip_JetPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_DropPod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPod.BP_DropPod_C.Repair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_C::Repair(class AFGCharacterPlayer** byCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.Repair");

	ABP_DropPod_C_Repair_Params params;
	params.byCharacter = byCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.GetRepairAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemAmount             amount                         (Parm, OutParm)

void ABP_DropPod_C::GetRepairAmount(struct FItemAmount* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.GetRepairAmount");

	ABP_DropPod_C_GetRepairAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (amount != nullptr)
		*amount = params.amount;
}


// Function BP_DropPod.BP_DropPod_C.GetPowerConsumption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          POWER                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_C::GetPowerConsumption(float* POWER)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.GetPowerConsumption");

	ABP_DropPod_C_GetPowerConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (POWER != nullptr)
		*POWER = params.POWER;
}


// Function BP_DropPod.BP_DropPod_C.NeedsPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           NeedsPower                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_C::NeedsPower(bool* NeedsPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.NeedsPower");

	ABP_DropPod_C_NeedsPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsPower != nullptr)
		*NeedsPower = params.NeedsPower;
}


// Function BP_DropPod.BP_DropPod_C.NeedsRepair
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           NeedsRepair                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_C::NeedsRepair(bool* NeedsRepair)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.NeedsRepair");

	ABP_DropPod_C_NeedsRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsRepair != nullptr)
		*NeedsRepair = params.NeedsRepair;
}


// Function BP_DropPod.BP_DropPod_C.RollLoot
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_C::RollLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.RollLoot");

	ABP_DropPod_C_RollLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.OnOpened
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.OnOpened");

	ABP_DropPod_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.StopIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DropPod_C::StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.StopIsLookedAt");

	ABP_DropPod_C_StopIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.StartIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DropPod_C::StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.StartIsLookedAt");

	ABP_DropPod_C_StartIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DropPod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.ReceiveBeginPlay");

	ABP_DropPod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.OnUse
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DropPod_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.OnUse");

	ABP_DropPod_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.OnRepair
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     InteractingCharacter           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_C::OnRepair(class AFGCharacterPlayer** InteractingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.OnRepair");

	ABP_DropPod_C_OnRepair_Params params;
	params.InteractingCharacter = InteractingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPod.BP_DropPod_C.ExecuteUbergraph_BP_DropPod
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DropPod_C::ExecuteUbergraph_BP_DropPod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod.BP_DropPod_C.ExecuteUbergraph_BP_DropPod");

	ABP_DropPod_C_ExecuteUbergraph_BP_DropPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

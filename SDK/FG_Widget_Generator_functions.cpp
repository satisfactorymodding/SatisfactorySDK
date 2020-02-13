// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Generator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Generator.Widget_Generator_C.UpdateFluidStats
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::UpdateFluidStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.UpdateFluidStats");

	UWidget_Generator_C_UpdateFluidStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.SetupInputs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::SetupInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.SetupInputs");

	UWidget_Generator_C_SetupInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.OnReplicationDetailActorCreated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ReplicationDetailActor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Generator_C::OnReplicationDetailActorCreated(class AActor** ReplicationDetailActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.OnReplicationDetailActorCreated");

	UWidget_Generator_C_OnReplicationDetailActorCreated_Params params;
	params.ReplicationDetailActor = ReplicationDetailActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.InitModule
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::InitModule()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.InitModule");

	UWidget_Generator_C_InitModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.UpdateHeaderText
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::UpdateHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.UpdateHeaderText");

	UWidget_Generator_C_UpdateHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.UpdateWarningWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::UpdateWarningWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.UpdateWarningWidget");

	UWidget_Generator_C_UpdateWarningWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Generator_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.DropInventorySlotStack");

	UWidget_Generator_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function Widget_Generator.Widget_Generator_C.UpdateSlotStats
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::UpdateSlotStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.UpdateSlotStats");

	UWidget_Generator_C_UpdateSlotStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.GetFuseVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_Generator_C::GetFuseVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.GetFuseVisibility");

	UWidget_Generator_C_GetFuseVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Generator.Widget_Generator_C.UpdateSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::UpdateSlotInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.UpdateSlotInfo");

	UWidget_Generator_C_UpdateSlotInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.OnGetPowerCircuit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGPowerCircuit*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFGPowerCircuit* UWidget_Generator_C::OnGetPowerCircuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.OnGetPowerCircuit");

	UWidget_Generator_C_OnGetPowerCircuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Generator.Widget_Generator_C.IsConnected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsConnected                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Generator_C::IsConnected(bool* IsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.IsConnected");

	UWidget_Generator_C_IsConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsConnected != nullptr)
		*IsConnected = params.IsConnected;
}


// Function Widget_Generator.Widget_Generator_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.Cleanup");

	UWidget_Generator_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.GetBurnProgressPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_Generator_C::GetBurnProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.GetBurnProgressPercent");

	UWidget_Generator_C_GetBurnProgressPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Generator.Widget_Generator_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_Generator_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.Init");

	UWidget_Generator_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Generator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.Construct");

	UWidget_Generator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Generator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.Destruct");

	UWidget_Generator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_Generator_C::BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature");

	UWidget_Generator_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.ResetFuse
// (BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::ResetFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.ResetFuse");

	UWidget_Generator_C_ResetFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.WarningMessageCheck
// (BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::WarningMessageCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.WarningMessageCheck");

	UWidget_Generator_C_WarningMessageCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.SpawnSmoke
// (BlueprintCallable, BlueprintEvent)

void UWidget_Generator_C::SpawnSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.SpawnSmoke");

	UWidget_Generator_C_SpawnSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.OnProductionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Generator_C::OnProductionChanged(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.OnProductionChanged");

	UWidget_Generator_C_OnProductionChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.OnCustomTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         UpdateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Generator_C::OnCustomTick(float* UpdateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.OnCustomTick");

	UWidget_Generator_C_OnCustomTick_Params params;
	params.UpdateTime = UpdateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Generator.Widget_Generator_C.ExecuteUbergraph_Widget_Generator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Generator_C::ExecuteUbergraph_Widget_Generator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Generator.Widget_Generator_C.ExecuteUbergraph_Widget_Generator");

	UWidget_Generator_C_ExecuteUbergraph_Widget_Generator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Tractor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tractor.BP_Tractor_C.UpdateOutline
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                          aimingAtWorkbench              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tractor_C::UpdateOutline(bool* aimingAtWorkbench)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.UpdateOutline");

	ABP_Tractor_C_UpdateOutline_Params params;
	params.aimingAtWorkbench = aimingAtWorkbench;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.StopDrivingEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::StopDrivingEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.StopDrivingEffects");

	ABP_Tractor_C_StopDrivingEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.StartDrivingEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::StartDrivingEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.StartDrivingEffects");

	ABP_Tractor_C_StartDrivingEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.OnRep_mFlashlightOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::OnRep_mFlashlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.OnRep_mFlashlightOn");

	ABP_Tractor_C_OnRep_mFlashlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.ToggleFlashlight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::ToggleFlashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ToggleFlashlight");

	ABP_Tractor_C_ToggleFlashlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.GetEnemyTargetDesirability
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGEnemyController**     forController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Tractor_C::GetEnemyTargetDesirability(class AFGEnemyController** forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.GetEnemyTargetDesirability");

	ABP_Tractor_C_GetEnemyTargetDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tractor.BP_Tractor_C.GetAttackLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Tractor_C::GetAttackLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.GetAttackLocation");

	ABP_Tractor_C_GetAttackLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tractor.BP_Tractor_C.ShouldAutoregisterAsTargetable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Tractor_C::ShouldAutoregisterAsTargetable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ShouldAutoregisterAsTargetable");

	ABP_Tractor_C_ShouldAutoregisterAsTargetable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Tractor.BP_Tractor_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Tractor_C::InpActEvt_Flashlight_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1");

	ABP_Tractor_C_InpActEvt_Flashlight_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.ToggleFreeCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::ToggleFreeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ToggleFreeCamera");

	ABP_Tractor_C_ToggleFreeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleStartup
// (Event, Protected, BlueprintEvent)

void ABP_Tractor_C::ReceiveOnVehicleStartup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleStartup");

	ABP_Tractor_C_ReceiveOnVehicleStartup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleShutDown
// (Event, Protected, BlueprintEvent)

void ABP_Tractor_C::ReceiveOnVehicleShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleShutDown");

	ABP_Tractor_C_ReceiveOnVehicleShutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tractor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ReceiveBeginPlay");

	ABP_Tractor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.Server_SetFlashlightOn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FlashlightOn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tractor_C::Server_SetFlashlightOn(bool* FlashlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.Server_SetFlashlightOn");

	ABP_Tractor_C_Server_SetFlashlightOn_Params params;
	params.FlashlightOn = FlashlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABP_Tractor_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.GainedSignificance");

	ABP_Tractor_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABP_Tractor_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.LostSignificance");

	ABP_Tractor_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.Multicast_CloseTrunk
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::Multicast_CloseTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.Multicast_CloseTrunk");

	ABP_Tractor_C_Multicast_CloseTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.Multicast_OpenTrunk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Tractor_C::Multicast_OpenTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.Multicast_OpenTrunk");

	ABP_Tractor_C_Multicast_OpenTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tractor.BP_Tractor_C.ExecuteUbergraph_BP_Tractor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tractor_C::ExecuteUbergraph_BP_Tractor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tractor.BP_Tractor_C.ExecuteUbergraph_BP_Tractor");

	ABP_Tractor_C_ExecuteUbergraph_BP_Tractor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

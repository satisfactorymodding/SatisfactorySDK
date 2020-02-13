// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Explorer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Explorer.BP_Explorer_C.UpdateOutline
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                          aimingAtWorkbench              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explorer_C::UpdateOutline(bool* aimingAtWorkbench)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.UpdateOutline");

	ABP_Explorer_C_UpdateOutline_Params params;
	params.aimingAtWorkbench = aimingAtWorkbench;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.GetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Explorer_C::GetActorRepresentationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.GetActorRepresentationText");

	ABP_Explorer_C_GetActorRepresentationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Explorer.BP_Explorer_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_Explorer_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.GetActorRepresentationTexture");

	ABP_Explorer_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Explorer.BP_Explorer_C.CheckSuspension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explorer_C::CheckSuspension(float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.CheckSuspension");

	ABP_Explorer_C_CheckSuspension_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.OnRep_mFlashlightOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Explorer_C::OnRep_mFlashlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.OnRep_mFlashlightOn");

	ABP_Explorer_C_OnRep_mFlashlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.GetAttackLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Explorer_C::GetAttackLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.GetAttackLocation");

	ABP_Explorer_C_GetAttackLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Explorer.BP_Explorer_C.GetEnemyTargetDesirability
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGEnemyController**     forController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Explorer_C::GetEnemyTargetDesirability(class AFGEnemyController** forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.GetEnemyTargetDesirability");

	ABP_Explorer_C_GetEnemyTargetDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Explorer.BP_Explorer_C.ShouldAutoregisterAsTargetable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Explorer_C::ShouldAutoregisterAsTargetable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.ShouldAutoregisterAsTargetable");

	ABP_Explorer_C_ShouldAutoregisterAsTargetable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Explorer.BP_Explorer_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Explorer_C::InpActEvt_Flashlight_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1");

	ABP_Explorer_C_InpActEvt_Flashlight_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explorer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.ReceiveTick");

	ABP_Explorer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explorer_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_Explorer_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.Server_SetFlashlightOn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FlashlightOn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explorer_C::Server_SetFlashlightOn(bool* FlashlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.Server_SetFlashlightOn");

	ABP_Explorer_C_Server_SetFlashlightOn_Params params;
	params.FlashlightOn = FlashlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABP_Explorer_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.GainedSignificance");

	ABP_Explorer_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABP_Explorer_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.LostSignificance");

	ABP_Explorer_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.Multicast_OpenTrunk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Explorer_C::Multicast_OpenTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.Multicast_OpenTrunk");

	ABP_Explorer_C_Multicast_OpenTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.Multicast_CloseTrunk
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Explorer_C::Multicast_CloseTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.Multicast_CloseTrunk");

	ABP_Explorer_C_Multicast_CloseTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explorer.BP_Explorer_C.ExecuteUbergraph_BP_Explorer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explorer_C::ExecuteUbergraph_BP_Explorer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explorer.BP_Explorer_C.ExecuteUbergraph_BP_Explorer");

	ABP_Explorer_C_ExecuteUbergraph_BP_Explorer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

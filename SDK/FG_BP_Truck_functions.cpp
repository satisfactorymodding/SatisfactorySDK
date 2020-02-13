// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Truck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Truck.BP_Truck_C.UpdateOutline
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                          aimingAtWorkbench              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Truck_C::UpdateOutline(bool* aimingAtWorkbench)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.UpdateOutline");

	ABP_Truck_C_UpdateOutline_Params params;
	params.aimingAtWorkbench = aimingAtWorkbench;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_Truck_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.GetActorRepresentationTexture");

	ABP_Truck_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Truck.BP_Truck_C.OnRep_mFlashlightOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Truck_C::OnRep_mFlashlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.OnRep_mFlashlightOn");

	ABP_Truck_C_OnRep_mFlashlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.GetAttackLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Truck_C::GetAttackLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.GetAttackLocation");

	ABP_Truck_C_GetAttackLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Truck.BP_Truck_C.GetEnemyTargetDesirability
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGEnemyController**     forController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Truck_C::GetEnemyTargetDesirability(class AFGEnemyController** forController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.GetEnemyTargetDesirability");

	ABP_Truck_C_GetEnemyTargetDesirability_Params params;
	params.forController = forController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Truck.BP_Truck_C.ShouldAutoregisterAsTargetable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Truck_C::ShouldAutoregisterAsTargetable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.ShouldAutoregisterAsTargetable");

	ABP_Truck_C_ShouldAutoregisterAsTargetable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Truck.BP_Truck_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Truck_C::InpActEvt_Flashlight_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1");

	ABP_Truck_C_InpActEvt_Flashlight_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.Server_SetFlashlightOn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FlashlightOn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Truck_C::Server_SetFlashlightOn(bool* FlashlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.Server_SetFlashlightOn");

	ABP_Truck_C_Server_SetFlashlightOn_Params params;
	params.FlashlightOn = FlashlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABP_Truck_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.GainedSignificance");

	ABP_Truck_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABP_Truck_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.LostSignificance");

	ABP_Truck_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.Multicast_OpenTrunk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Truck_C::Multicast_OpenTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.Multicast_OpenTrunk");

	ABP_Truck_C_Multicast_OpenTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.Multicast_CloseTrunk
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Truck_C::Multicast_CloseTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.Multicast_CloseTrunk");

	ABP_Truck_C_Multicast_CloseTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Truck.BP_Truck_C.ExecuteUbergraph_BP_Truck
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Truck_C::ExecuteUbergraph_BP_Truck(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Truck.BP_Truck_C.ExecuteUbergraph_BP_Truck");

	ABP_Truck_C_ExecuteUbergraph_BP_Truck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

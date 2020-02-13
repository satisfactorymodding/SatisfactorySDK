// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_VehicleTargetPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GetLookAtDecription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_VehicleTargetPoint_C::GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GetLookAtDecription");

	ABP_VehicleTargetPoint_C_GetLookAtDecription_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsUseable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_VehicleTargetPoint_C::IsUseable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsUseable");

	ABP_VehicleTargetPoint_C_IsUseable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                atLocation                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent**    componentHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUseState               out_useState                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_VehicleTargetPoint_C::UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateUseState");

	ABP_VehicleTargetPoint_C_UpdateUseState_Params params;
	params.byCharacter = byCharacter;
	params.atLocation = atLocation;
	params.componentHit = componentHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_useState != nullptr)
		*out_useState = params.out_useState;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ShouldSave
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_VehicleTargetPoint_C::ShouldSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ShouldSave");

	ABP_VehicleTargetPoint_C_ShouldSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.NeedTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_VehicleTargetPoint_C::NeedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.NeedTransform");

	ABP_VehicleTargetPoint_C_NeedTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GatherDependencies
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         out_dependentObjects           (Parm, OutParm, ZeroConstructor)

void ABP_VehicleTargetPoint_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GatherDependencies");

	ABP_VehicleTargetPoint_C_GatherDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_dependentObjects != nullptr)
		*out_dependentObjects = params.out_dependentObjects;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUseStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_VehicleTargetPoint_C::OnUseStop(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUseStop");

	ABP_VehicleTargetPoint_C_OnUseStop_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.RegisterInteractingPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleTargetPoint_C::RegisterInteractingPlayer(class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.RegisterInteractingPlayer");

	ABP_VehicleTargetPoint_C_RegisterInteractingPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UnregisterInteractingPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleTargetPoint_C::UnregisterInteractingPlayer(class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UnregisterInteractingPlayer");

	ABP_VehicleTargetPoint_C_UnregisterInteractingPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleTargetPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ReceiveBeginPlay");

	ABP_VehicleTargetPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUse
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_VehicleTargetPoint_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUse");

	ABP_VehicleTargetPoint_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StartIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_VehicleTargetPoint_C::StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StartIsLookedAt");

	ABP_VehicleTargetPoint_C_StartIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StopIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_VehicleTargetPoint_C::StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StopIsLookedAt");

	ABP_VehicleTargetPoint_C_StopIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.SetMeshRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleTargetPoint_C::SetMeshRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.SetMeshRotation");

	ABP_VehicleTargetPoint_C_SetMeshRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ExecuteUbergraph_BP_VehicleTargetPoint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleTargetPoint_C::ExecuteUbergraph_BP_VehicleTargetPoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ExecuteUbergraph_BP_VehicleTargetPoint");

	ABP_VehicleTargetPoint_C_ExecuteUbergraph_BP_VehicleTargetPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

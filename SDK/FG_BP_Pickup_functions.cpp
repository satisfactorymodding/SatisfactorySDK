// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Pickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Pickup.BP_Pickup_C.PlayPickupEffect
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_Pickup_C::PlayPickupEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.PlayPickupEffect");

	ABP_Pickup_C_PlayPickupEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.StartIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Pickup_C::StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.StartIsLookedAt");

	ABP_Pickup_C_StartIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.StopIsLookedAt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Pickup_C::StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.StopIsLookedAt");

	ABP_Pickup_C_StopIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Pickup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.ReceiveBeginPlay");

	ABP_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABP_Pickup_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.GainedSignificance");

	ABP_Pickup_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABP_Pickup_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.LostSignificance");

	ABP_Pickup_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pickup_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.ReceiveEndPlay");

	ABP_Pickup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.Event Check Subtitle Distance
// (BlueprintCallable, BlueprintEvent)

void ABP_Pickup_C::Event_Check_Subtitle_Distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.Event Check Subtitle Distance");

	ABP_Pickup_C_Event_Check_Subtitle_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pickup.BP_Pickup_C.ExecuteUbergraph_BP_Pickup
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pickup_C::ExecuteUbergraph_BP_Pickup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pickup.BP_Pickup_C.ExecuteUbergraph_BP_Pickup");

	ABP_Pickup_C_ExecuteUbergraph_BP_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

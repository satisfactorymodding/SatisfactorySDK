// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Hookshot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_Hookshot.Equip_Hookshot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Hookshot_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Hookshot.Equip_Hookshot_C.ReceiveTick");

	AEquip_Hookshot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Hookshot.Equip_Hookshot_C.OnFire
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          attachedToSomething            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AEquip_Hookshot_C::OnFire(bool* attachedToSomething, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Hookshot.Equip_Hookshot_C.OnFire");

	AEquip_Hookshot_C_OnFire_Params params;
	params.attachedToSomething = attachedToSomething;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Hookshot.Equip_Hookshot_C.OwnerLanded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AEquip_Hookshot_C::OwnerLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Hookshot.Equip_Hookshot_C.OwnerLanded");

	AEquip_Hookshot_C_OwnerLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Hookshot.Equip_Hookshot_C.OnWireDetach
// (Event, Public, BlueprintEvent)

void AEquip_Hookshot_C::OnWireDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Hookshot.Equip_Hookshot_C.OnWireDetach");

	AEquip_Hookshot_C_OnWireDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Hookshot.Equip_Hookshot_C.DidNotAffordUse
// (Event, Protected, BlueprintEvent)

void AEquip_Hookshot_C::DidNotAffordUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Hookshot.Equip_Hookshot_C.DidNotAffordUse");

	AEquip_Hookshot_C_DidNotAffordUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_Hookshot.Equip_Hookshot_C.ExecuteUbergraph_Equip_Hookshot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_Hookshot_C::ExecuteUbergraph_Equip_Hookshot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_Hookshot.Equip_Hookshot_C.ExecuteUbergraph_Equip_Hookshot");

	AEquip_Hookshot_C_ExecuteUbergraph_Equip_Hookshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

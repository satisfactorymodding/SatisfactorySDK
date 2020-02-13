// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_MinerMk2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_MinerMk2.Anim_MinerMk2_C.SetupReloadTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::SetupReloadTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.SetupReloadTimer");

	UAnim_MinerMk2_C_SetupReloadTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.ReloadTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::ReloadTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.ReloadTimer");

	UAnim_MinerMk2_C_ReloadTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_MinerEnteredReloadState
// (BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::AnimNotify_MinerEnteredReloadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_MinerEnteredReloadState");

	UAnim_MinerMk2_C_AnimNotify_MinerEnteredReloadState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_StartDrillVFX
// (BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::AnimNotify_StartDrillVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_StartDrillVFX");

	UAnim_MinerMk2_C_AnimNotify_StartDrillVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAnim_MinerMk2_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.BlueprintInitializeAnimation");

	UAnim_MinerMk2_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_OnResumeProducing
// (BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::AnimNotify_OnResumeProducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_OnResumeProducing");

	UAnim_MinerMk2_C_AnimNotify_OnResumeProducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_OnStopProducing
// (BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::AnimNotify_OnStopProducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_OnStopProducing");

	UAnim_MinerMk2_C_AnimNotify_OnStopProducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_StartEngineLoop
// (BlueprintCallable, BlueprintEvent)

void UAnim_MinerMk2_C::AnimNotify_StartEngineLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.AnimNotify_StartEngineLoop");

	UAnim_MinerMk2_C_AnimNotify_StartEngineLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_MinerMk2.Anim_MinerMk2_C.ExecuteUbergraph_Anim_MinerMk2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_MinerMk2_C::ExecuteUbergraph_Anim_MinerMk2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_MinerMk2.Anim_MinerMk2_C.ExecuteUbergraph_Anim_MinerMk2");

	UAnim_MinerMk2_C_ExecuteUbergraph_Anim_MinerMk2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

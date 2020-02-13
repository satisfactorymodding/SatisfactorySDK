// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_OilPump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_OilPump.Anim_OilPump_C.AnimNotify_BurnerFlareNotify
// (BlueprintCallable, BlueprintEvent)

void UAnim_OilPump_C::AnimNotify_BurnerFlareNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_OilPump.Anim_OilPump_C.AnimNotify_BurnerFlareNotify");

	UAnim_OilPump_C_AnimNotify_BurnerFlareNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpEnteredProducingState
// (BlueprintCallable, BlueprintEvent)

void UAnim_OilPump_C::AnimNotify_OilpumpEnteredProducingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpEnteredProducingState");

	UAnim_OilPump_C_AnimNotify_OilpumpEnteredProducingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpLeftProducingState
// (BlueprintCallable, BlueprintEvent)

void UAnim_OilPump_C::AnimNotify_OilpumpLeftProducingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpLeftProducingState");

	UAnim_OilPump_C_AnimNotify_OilpumpLeftProducingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpEnteredOfflineState
// (BlueprintCallable, BlueprintEvent)

void UAnim_OilPump_C::AnimNotify_OilpumpEnteredOfflineState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpEnteredOfflineState");

	UAnim_OilPump_C_AnimNotify_OilpumpEnteredOfflineState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpLeftOfflineState
// (BlueprintCallable, BlueprintEvent)

void UAnim_OilPump_C::AnimNotify_OilpumpLeftOfflineState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_OilPump.Anim_OilPump_C.AnimNotify_OilpumpLeftOfflineState");

	UAnim_OilPump_C_AnimNotify_OilpumpLeftOfflineState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_OilPump.Anim_OilPump_C.ExecuteUbergraph_Anim_OilPump
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_OilPump_C::ExecuteUbergraph_Anim_OilPump(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_OilPump.Anim_OilPump_C.ExecuteUbergraph_Anim_OilPump");

	UAnim_OilPump_C_ExecuteUbergraph_Anim_OilPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

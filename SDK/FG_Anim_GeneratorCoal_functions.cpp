// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_GeneratorCoal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_steamVfxNotify
// (BlueprintCallable, BlueprintEvent)

void UAnim_GeneratorCoal_C::AnimNotify_steamVfxNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_steamVfxNotify");

	UAnim_GeneratorCoal_C_AnimNotify_steamVfxNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenEnteredProducingState
// (BlueprintCallable, BlueprintEvent)

void UAnim_GeneratorCoal_C::AnimNotify_CoalGenEnteredProducingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenEnteredProducingState");

	UAnim_GeneratorCoal_C_AnimNotify_CoalGenEnteredProducingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenLeftProducingState
// (BlueprintCallable, BlueprintEvent)

void UAnim_GeneratorCoal_C::AnimNotify_CoalGenLeftProducingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenLeftProducingState");

	UAnim_GeneratorCoal_C_AnimNotify_CoalGenLeftProducingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenEnteredOfflineState
// (BlueprintCallable, BlueprintEvent)

void UAnim_GeneratorCoal_C::AnimNotify_CoalGenEnteredOfflineState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenEnteredOfflineState");

	UAnim_GeneratorCoal_C_AnimNotify_CoalGenEnteredOfflineState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenLeftOfflineState
// (BlueprintCallable, BlueprintEvent)

void UAnim_GeneratorCoal_C::AnimNotify_CoalGenLeftOfflineState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.AnimNotify_CoalGenLeftOfflineState");

	UAnim_GeneratorCoal_C_AnimNotify_CoalGenLeftOfflineState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.ExecuteUbergraph_Anim_GeneratorCoal
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_GeneratorCoal_C::ExecuteUbergraph_Anim_GeneratorCoal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_GeneratorCoal.Anim_GeneratorCoal_C.ExecuteUbergraph_Anim_GeneratorCoal");

	UAnim_GeneratorCoal_C_ExecuteUbergraph_Anim_GeneratorCoal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Golfcart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_Golfcart.BPA_Golfcart_C.SetBurnOutSoundParameters
// (Public, BlueprintCallable, BlueprintEvent)

void UBPA_Golfcart_C::SetBurnOutSoundParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.SetBurnOutSoundParameters");

	UBPA_Golfcart_C_SetBurnOutSoundParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.SetDriftingSoundParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         SteeringInput                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_Golfcart_C::SetDriftingSoundParameters(float* SteeringInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.SetDriftingSoundParameters");

	UBPA_Golfcart_C_SetDriftingSoundParameters_Params params;
	params.SteeringInput = SteeringInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_Golfcart_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.BlueprintUpdateAnimation");

	UBPA_Golfcart_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Deactive
// (BlueprintCallable, BlueprintEvent)

void UBPA_Golfcart_C::AnimNotify_Deactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Deactive");

	UBPA_Golfcart_C_AnimNotify_Deactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Activate
// (BlueprintCallable, BlueprintEvent)

void UBPA_Golfcart_C::AnimNotify_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Activate");

	UBPA_Golfcart_C_AnimNotify_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_PlaySirenSound
// (BlueprintCallable, BlueprintEvent)

void UBPA_Golfcart_C::AnimNotify_PlaySirenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_PlaySirenSound");

	UBPA_Golfcart_C_AnimNotify_PlaySirenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_StopGolfCartSirenSound
// (BlueprintCallable, BlueprintEvent)

void UBPA_Golfcart_C::AnimNotify_StopGolfCartSirenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_StopGolfCartSirenSound");

	UBPA_Golfcart_C_AnimNotify_StopGolfCartSirenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UBPA_Golfcart_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.BlueprintBeginPlay");

	UBPA_Golfcart_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_Golfcart.BPA_Golfcart_C.ExecuteUbergraph_BPA_Golfcart
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_Golfcart_C::ExecuteUbergraph_BPA_Golfcart(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_Golfcart.BPA_Golfcart_C.ExecuteUbergraph_BPA_Golfcart");

	UBPA_Golfcart_C_ExecuteUbergraph_BPA_Golfcart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

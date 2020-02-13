// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_1p_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_1p.Anim_1p_C.CalculateAnimGraphValues
// (Public, BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::CalculateAnimGraphValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.CalculateAnimGraphValues");

	UAnim_1p_C_CalculateAnimGraphValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFGPlayerController*     OutPlayerController            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnim_1p_C::GetPlayerController(class AFGPlayerController** OutPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.GetPlayerController");

	UAnim_1p_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerController != nullptr)
		*OutPlayerController = params.OutPlayerController;
}


// Function Anim_1p.Anim_1p_C.IsEquipmentEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 EquipmentClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquiped                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnim_1p_C::IsEquipmentEquipped(class UClass** EquipmentClass, bool* IsEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.IsEquipmentEquipped");

	UAnim_1p_C_IsEquipmentEquipped_Params params;
	params.EquipmentClass = EquipmentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEquiped != nullptr)
		*IsEquiped = params.IsEquiped;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_D6748B114588C5FF3C78BF82BE5CBF6A
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_D6748B114588C5FF3C78BF82BE5CBF6A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_D6748B114588C5FF3C78BF82BE5CBF6A");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_D6748B114588C5FF3C78BF82BE5CBF6A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E5B6CB40485259A214F224A8377EABCD
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E5B6CB40485259A214F224A8377EABCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E5B6CB40485259A214F224A8377EABCD");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E5B6CB40485259A214F224A8377EABCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_8F9EEE0B49AAF61FEC69B7B600820A93
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_8F9EEE0B49AAF61FEC69B7B600820A93()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_8F9EEE0B49AAF61FEC69B7B600820A93");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_8F9EEE0B49AAF61FEC69B7B600820A93_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_7B548854446BFD3D01D3F8B0C2639C83
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_7B548854446BFD3D01D3F8B0C2639C83()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_7B548854446BFD3D01D3F8B0C2639C83");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_7B548854446BFD3D01D3F8B0C2639C83_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_232C08E247A32BFE800C00BD0C95AAA5
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_232C08E247A32BFE800C00BD0C95AAA5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_232C08E247A32BFE800C00BD0C95AAA5");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_232C08E247A32BFE800C00BD0C95AAA5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_AACAA52D49A3AA8F307990A1AAAEE275
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_AACAA52D49A3AA8F307990A1AAAEE275()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_AACAA52D49A3AA8F307990A1AAAEE275");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_AACAA52D49A3AA8F307990A1AAAEE275_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3DF2B0B447906DD7E43B3284E678C80C
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3DF2B0B447906DD7E43B3284E678C80C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3DF2B0B447906DD7E43B3284E678C80C");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3DF2B0B447906DD7E43B3284E678C80C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3F16CD61487434C4A40869AB81296622
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3F16CD61487434C4A40869AB81296622()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3F16CD61487434C4A40869AB81296622");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_3F16CD61487434C4A40869AB81296622_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_EDB707D244C1F051CFAE2B8050F37AB1
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_EDB707D244C1F051CFAE2B8050F37AB1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_EDB707D244C1F051CFAE2B8050F37AB1");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_EDB707D244C1F051CFAE2B8050F37AB1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E06F5E1B412E03A618C8DA9390B5A2D4
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E06F5E1B412E03A618C8DA9390B5A2D4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E06F5E1B412E03A618C8DA9390B5A2D4");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_E06F5E1B412E03A618C8DA9390B5A2D4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_650862FA4B1F7229923D688CA2759DEF
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_650862FA4B1F7229923D688CA2759DEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_650862FA4B1F7229923D688CA2759DEF");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_650862FA4B1F7229923D688CA2759DEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_2B257D8F4D70905FB12FD48B45F636E2
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_2B257D8F4D70905FB12FD48B45F636E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_2B257D8F4D70905FB12FD48B45F636E2");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_2B257D8F4D70905FB12FD48B45F636E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_5039F38743640F2D676C48BFB75282A9
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_5039F38743640F2D676C48BFB75282A9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_5039F38743640F2D676C48BFB75282A9");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_5039F38743640F2D676C48BFB75282A9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_F42B0E7546421589DCE77787D9CF7193
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_F42B0E7546421589DCE77787D9CF7193()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_F42B0E7546421589DCE77787D9CF7193");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_F42B0E7546421589DCE77787D9CF7193_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_B5FC32BB4E4CCC4546313D8DA37AA8CA
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_B5FC32BB4E4CCC4546313D8DA37AA8CA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_B5FC32BB4E4CCC4546313D8DA37AA8CA");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_B5FC32BB4E4CCC4546313D8DA37AA8CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_C2567CF54BBB81C3CF94AE879F15FA63
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_C2567CF54BBB81C3CF94AE879F15FA63()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_C2567CF54BBB81C3CF94AE879F15FA63");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_C2567CF54BBB81C3CF94AE879F15FA63_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_176DE7604F47F97A838AC2B8BDE8AC97
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_176DE7604F47F97A838AC2B8BDE8AC97()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_176DE7604F47F97A838AC2B8BDE8AC97");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_176DE7604F47F97A838AC2B8BDE8AC97_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_37DAD723484CAF4506B71380789C3064
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_37DAD723484CAF4506B71380789C3064()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_37DAD723484CAF4506B71380789C3064");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_37DAD723484CAF4506B71380789C3064_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_62F55133423E9C2053CAA09A7CE81877
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_62F55133423E9C2053CAA09A7CE81877()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_62F55133423E9C2053CAA09A7CE81877");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_62F55133423E9C2053CAA09A7CE81877_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_1p_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.BlueprintUpdateAnimation");

	UAnim_1p_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_116069884AD09F30082899AC7D4DF193
// (BlueprintEvent)

void UAnim_1p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_116069884AD09F30082899AC7D4DF193()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_116069884AD09F30082899AC7D4DF193");

	UAnim_1p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_1p_AnimGraphNode_TransitionResult_116069884AD09F30082899AC7D4DF193_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.AnimNotify_EnteredIdleState
// (BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::AnimNotify_EnteredIdleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.AnimNotify_EnteredIdleState");

	UAnim_1p_C_AnimNotify_EnteredIdleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.AnimNotify_LeaveChangeDirection
// (BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::AnimNotify_LeaveChangeDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.AnimNotify_LeaveChangeDirection");

	UAnim_1p_C_AnimNotify_LeaveChangeDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.AnimNotify_EnterChangeDirection
// (BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::AnimNotify_EnterChangeDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.AnimNotify_EnterChangeDirection");

	UAnim_1p_C_AnimNotify_EnterChangeDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.AnimNotify_LandImpact
// (BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::AnimNotify_LandImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.AnimNotify_LandImpact");

	UAnim_1p_C_AnimNotify_LandImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.AnimNotify_StartSprint
// (BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::AnimNotify_StartSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.AnimNotify_StartSprint");

	UAnim_1p_C_AnimNotify_StartSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.AnimNotify_StopSprint
// (BlueprintCallable, BlueprintEvent)

void UAnim_1p_C::AnimNotify_StopSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.AnimNotify_StopSprint");

	UAnim_1p_C_AnimNotify_StopSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_1p.Anim_1p_C.ExecuteUbergraph_Anim_1p
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_1p_C::ExecuteUbergraph_Anim_1p(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_1p.Anim_1p_C.ExecuteUbergraph_Anim_1p");

	UAnim_1p_C_ExecuteUbergraph_Anim_1p_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

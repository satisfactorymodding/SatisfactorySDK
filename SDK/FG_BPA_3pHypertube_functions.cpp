// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_3pHypertube_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_3pHypertube.BPA_3pHypertube_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_3pHypertube_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_3pHypertube.BPA_3pHypertube_C.BlueprintUpdateAnimation");

	UBPA_3pHypertube_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_3pHypertube.BPA_3pHypertube_C.ExecuteUbergraph_BPA_3pHypertube
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPA_3pHypertube_C::ExecuteUbergraph_BPA_3pHypertube(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_3pHypertube.BPA_3pHypertube_C.ExecuteUbergraph_BPA_3pHypertube");

	UBPA_3pHypertube_C_ExecuteUbergraph_BPA_3pHypertube_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

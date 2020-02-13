// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ExplorerAnim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExplorerAnim.BP_ExplorerAnim_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExplorerAnim_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplorerAnim.BP_ExplorerAnim_C.BlueprintUpdateAnimation");

	UBP_ExplorerAnim_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplorerAnim.BP_ExplorerAnim_C.ExecuteUbergraph_BP_ExplorerAnim
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ExplorerAnim_C::ExecuteUbergraph_BP_ExplorerAnim(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplorerAnim.BP_ExplorerAnim_C.ExecuteUbergraph_BP_ExplorerAnim");

	UBP_ExplorerAnim_C_ExecuteUbergraph_BP_ExplorerAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

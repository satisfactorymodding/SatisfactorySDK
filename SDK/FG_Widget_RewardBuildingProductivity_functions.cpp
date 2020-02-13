// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardBuildingProductivity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RewardBuildingProductivity.Widget_RewardBuildingProductivity_C.IsValidRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardBuildingProductivity_C::IsValidRewardItem(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingProductivity.Widget_RewardBuildingProductivity_C.IsValidRewardItem");

	UWidget_RewardBuildingProductivity_C_IsValidRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_RewardBuildingProductivity.Widget_RewardBuildingProductivity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RewardBuildingProductivity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingProductivity.Widget_RewardBuildingProductivity_C.Construct");

	UWidget_RewardBuildingProductivity_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardBuildingProductivity.Widget_RewardBuildingProductivity_C.ExecuteUbergraph_Widget_RewardBuildingProductivity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardBuildingProductivity_C::ExecuteUbergraph_Widget_RewardBuildingProductivity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingProductivity.Widget_RewardBuildingProductivity_C.ExecuteUbergraph_Widget_RewardBuildingProductivity");

	UWidget_RewardBuildingProductivity_C_ExecuteUbergraph_Widget_RewardBuildingProductivity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardBuildingOverclock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.IsValidRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardBuildingOverclock_C::IsValidRewardItem(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.IsValidRewardItem");

	UWidget_RewardBuildingOverclock_C_IsValidRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_RewardBuildingOverclock_C::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetName");

	UWidget_RewardBuildingOverclock_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_RewardBuildingOverclock_C::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetIcon");

	UWidget_RewardBuildingOverclock_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RewardBuildingOverclock_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.Construct");

	UWidget_RewardBuildingOverclock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.ExecuteUbergraph_Widget_RewardBuildingOverclock
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardBuildingOverclock_C::ExecuteUbergraph_Widget_RewardBuildingOverclock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.ExecuteUbergraph_Widget_RewardBuildingOverclock");

	UWidget_RewardBuildingOverclock_C_ExecuteUbergraph_Widget_RewardBuildingOverclock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

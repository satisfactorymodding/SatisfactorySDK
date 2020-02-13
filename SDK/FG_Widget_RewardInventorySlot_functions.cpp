// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardInventorySlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.IsValidRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardInventorySlot_C::IsValidRewardItem(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.IsValidRewardItem");

	UWidget_RewardInventorySlot_C_IsValidRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RewardInventorySlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.Construct");

	UWidget_RewardInventorySlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.ExecuteUbergraph_Widget_RewardInventorySlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardInventorySlot_C::ExecuteUbergraph_Widget_RewardInventorySlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.ExecuteUbergraph_Widget_RewardInventorySlot");

	UWidget_RewardInventorySlot_C_ExecuteUbergraph_Widget_RewardInventorySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

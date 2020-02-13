// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DropPod_Repair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasAllRepairParts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Has_All_Parts                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_Repair_C::GetHasAllRepairParts(bool* Has_All_Parts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasAllRepairParts");

	UWidget_DropPod_Repair_C_GetHasAllRepairParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_All_Parts != nullptr)
		*Has_All_Parts = params.Has_All_Parts;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetHasDoorBeenOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_Repair_C::SetHasDoorBeenOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetHasDoorBeenOpened");

	UWidget_DropPod_Repair_C_SetHasDoorBeenOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupScreenText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_Repair_C::SetupScreenText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupScreenText");

	UWidget_DropPod_Repair_C_SetupScreenText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupCostSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_Repair_C::SetupCostSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupCostSlot");

	UWidget_DropPod_Repair_C_SetupCostSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasPartsAndPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_DropPod_Repair_C::GetHasPartsAndPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasPartsAndPower");

	UWidget_DropPod_Repair_C_GetHasPartsAndPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_DropPod_Repair_C::GetRepairButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairButtonVisibility");

	UWidget_DropPod_Repair_C_GetRepairButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairConditionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_DropPod_Repair_C::GetRepairConditionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairConditionText");

	UWidget_DropPod_Repair_C_GetRepairConditionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_DropPod_Repair_C::BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_DropPod_Repair_C_BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_DropPod_Repair_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.Init");

	UWidget_DropPod_Repair_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.OnDoorOpen
// (BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_Repair_C::OnDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.OnDoorOpen");

	UWidget_DropPod_Repair_C_OnDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.PodUnlocked
// (BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_Repair_C::PodUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.PodUnlocked");

	UWidget_DropPod_Repair_C_PodUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SpawnSmoke
// (BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_Repair_C::SpawnSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SpawnSmoke");

	UWidget_DropPod_Repair_C_SpawnSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.ExecuteUbergraph_Widget_DropPod_Repair
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_Repair_C::ExecuteUbergraph_Widget_DropPod_Repair(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.ExecuteUbergraph_Widget_DropPod_Repair");

	UWidget_DropPod_Repair_C_ExecuteUbergraph_Widget_DropPod_Repair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

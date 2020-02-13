// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Output_Slot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Output_Slot.Widget_Output_Slot_C.SetShowSecondPartsPerMin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowSecondPartsPerMin          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SecondaryItemDesc              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Output_Slot_C::SetShowSecondPartsPerMin(bool* ShowSecondPartsPerMin, class UClass** SecondaryItemDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.SetShowSecondPartsPerMin");

	UWidget_Output_Slot_C_SetShowSecondPartsPerMin_Params params;
	params.ShowSecondPartsPerMin = ShowSecondPartsPerMin;
	params.SecondaryItemDesc = SecondaryItemDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateProductionStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumPerCycle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         cycletime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PowerConsumption               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         efficiency                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SecondNumPerCycle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Output_Slot_C::UpdateProductionStats(int* NumPerCycle, float* cycletime, float* PowerConsumption, float* efficiency, int* SecondNumPerCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateProductionStats");

	UWidget_Output_Slot_C_UpdateProductionStats_Params params;
	params.NumPerCycle = NumPerCycle;
	params.cycletime = cycletime;
	params.PowerConsumption = PowerConsumption;
	params.efficiency = efficiency;
	params.SecondNumPerCycle = SecondNumPerCycle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateCycleProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CycleProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Output_Slot_C::UpdateCycleProgress(float* CycleProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateCycleProgress");

	UWidget_Output_Slot_C_UpdateCycleProgress_Params params;
	params.CycleProgress = CycleProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateStaticInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  recipeName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Output_Slot_C::UpdateStaticInfo(struct FText* recipeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateStaticInfo");

	UWidget_Output_Slot_C_UpdateStaticInfo_Params params;
	params.recipeName = recipeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateCostSlots
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOutputCostSlotData_Struct> OutputCostSlotData             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_Output_Slot_C::GenerateCostSlots(TArray<struct FOutputCostSlotData_Struct>* OutputCostSlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateCostSlots");

	UWidget_Output_Slot_C_GenerateCostSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputCostSlotData != nullptr)
		*OutputCostSlotData = params.OutputCostSlotData;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.GetSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_InventorySlot_C* InventorySlot                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Output_Slot_C::GetSlot(int* Index, class UWidget_InventorySlot_C** InventorySlot, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.GetSlot");

	UWidget_Output_Slot_C_GetSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventorySlot != nullptr)
		*InventorySlot = params.InventorySlot;
	if (success != nullptr)
		*success = params.success;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateOutputSlots
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOutputSlotData_Struct> OutputSlotData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_Output_Slot_C::GenerateOutputSlots(TArray<struct FOutputSlotData_Struct>* OutputSlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateOutputSlots");

	UWidget_Output_Slot_C_GenerateOutputSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputSlotData != nullptr)
		*OutputSlotData = params.OutputSlotData;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateWasteSlotVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Output_Slot_C::UpdateWasteSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateWasteSlotVisibility");

	UWidget_Output_Slot_C_UpdateWasteSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.CreateEfficiencyToolTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_Output_Slot_C::CreateEfficiencyToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.CreateEfficiencyToolTip");

	UWidget_Output_Slot_C_CreateEfficiencyToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.CreatePowerConsumptionToolTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_Output_Slot_C::CreatePowerConsumptionToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.CreatePowerConsumptionToolTip");

	UWidget_Output_Slot_C_CreatePowerConsumptionToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.CreateCycleTimeTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_Output_Slot_C::CreateCycleTimeTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.CreateCycleTimeTooltip");

	UWidget_Output_Slot_C_CreateCycleTimeTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Output_Slot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.Construct");

	UWidget_Output_Slot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Output_Slot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.PreConstruct");

	UWidget_Output_Slot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.OnInventorySlotStackMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Output_Slot_C::OnInventorySlotStackMove(class UWidget_InventorySlot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.OnInventorySlotStackMove");

	UWidget_Output_Slot_C_OnInventorySlotStackMove_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.ExecuteUbergraph_Widget_Output_Slot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Output_Slot_C::ExecuteUbergraph_Widget_Output_Slot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.ExecuteUbergraph_Widget_Output_Slot");

	UWidget_Output_Slot_C_ExecuteUbergraph_Widget_Output_Slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Output_Slot.Widget_Output_Slot_C.OnDropInventorySlotStack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Output_Slot_C::OnDropInventorySlotStack__DelegateSignature(class UWidget_InventorySlot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Output_Slot.Widget_Output_Slot_C.OnDropInventorySlotStack__DelegateSignature");

	UWidget_Output_Slot_C_OnDropInventorySlotStack__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

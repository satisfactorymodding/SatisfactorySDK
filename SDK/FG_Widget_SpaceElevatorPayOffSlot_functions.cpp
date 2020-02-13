// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SpaceElevatorPayOffSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.DropOntoInventorySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_SpaceElevatorPayOffSlot_C::DropOntoInventorySlot(class UWidget_InventorySlot_C** InventorySlot, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.DropOntoInventorySlot");

	UWidget_SpaceElevatorPayOffSlot_C_DropOntoInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetCustomTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_SpaceElevatorPayOffSlot_C::GetCustomTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetCustomTooltip");

	UWidget_SpaceElevatorPayOffSlot_C_GetCustomTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffSlotVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_SpaceElevatorPayOffSlot_C::GetPaidOffSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffSlotVisibility");

	UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_SpaceElevatorPayOffSlot_C::GetProgressbarVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarVisibility");

	UWidget_SpaceElevatorPayOffSlot_C_GetProgressbarVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffColorFeedback
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_SpaceElevatorPayOffSlot_C::GetPaidOffColorFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffColorFeedback");

	UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffColorFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffFeedbackImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_SpaceElevatorPayOffSlot_C::GetPaidOffFeedbackImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffFeedbackImage");

	UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffFeedbackImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_SpaceElevatorPayOffSlot_C::GetProgressbarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarPercent");

	UWidget_SpaceElevatorPayOffSlot_C_GetProgressbarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_SpaceElevatorPayOffSlot_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.OnDrop");

	UWidget_SpaceElevatorPayOffSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemQuotaText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_SpaceElevatorPayOffSlot_C::GetItemQuotaText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemQuotaText");

	UWidget_SpaceElevatorPayOffSlot_C_GetItemQuotaText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_SpaceElevatorPayOffSlot_C::GetItemText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemText");

	UWidget_SpaceElevatorPayOffSlot_C_GetItemText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_SpaceElevatorPayOffSlot_C::GetItemImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemImage");

	UWidget_SpaceElevatorPayOffSlot_C_GetItemImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SpaceElevatorPayOffSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Construct");

	UWidget_SpaceElevatorPayOffSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SpaceElevatorPayOffSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Tick");

	UWidget_SpaceElevatorPayOffSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GlowTimer
// (BlueprintCallable, BlueprintEvent)

void UWidget_SpaceElevatorPayOffSlot_C::GlowTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GlowTimer");

	UWidget_SpaceElevatorPayOffSlot_C_GlowTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SpaceElevatorPayOffSlot_C::ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot");

	UWidget_SpaceElevatorPayOffSlot_C_ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

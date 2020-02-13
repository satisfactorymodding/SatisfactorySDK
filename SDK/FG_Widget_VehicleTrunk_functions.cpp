// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_VehicleTrunk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.UpdateRelevantClasses
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::UpdateRelevantClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.UpdateRelevantClasses");

	UWidget_VehicleTrunk_C_UpdateRelevantClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_VehicleTrunk_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.OnPreviewKeyDown");

	UWidget_VehicleTrunk_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::SetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetTitle");

	UWidget_VehicleTrunk_C_SetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.InitCallbacks
// (Private, BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::InitCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.InitCallbacks");

	UWidget_VehicleTrunk_C_InitCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_VehicleTrunk_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.DropInventorySlotStack");

	UWidget_VehicleTrunk_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetWindowAlignment
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::SetWindowAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetWindowAlignment");

	UWidget_VehicleTrunk_C_SetWindowAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.CloseVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::CloseVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.CloseVehicle");

	UWidget_VehicleTrunk_C_CloseVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Cleanup");

	UWidget_VehicleTrunk_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_VehicleTrunk_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Destruct");

	UWidget_VehicleTrunk_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_VehicleTrunk_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Init");

	UWidget_VehicleTrunk_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_VehicleTrunk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Construct");

	UWidget_VehicleTrunk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.GrabAllFromVehicleStorage
// (BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::GrabAllFromVehicleStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.GrabAllFromVehicleStorage");

	UWidget_VehicleTrunk_C_GrabAllFromVehicleStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.StoreAllInVehicleStorage
// (BlueprintCallable, BlueprintEvent)

void UWidget_VehicleTrunk_C::StoreAllInVehicleStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.StoreAllInVehicleStorage");

	UWidget_VehicleTrunk_C_StoreAllInVehicleStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_VehicleTrunk_C::BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_VehicleTrunk_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_VehicleTrunk_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature");

	UWidget_VehicleTrunk_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mManualManufacturerWidget_K2Node_ComponentBoundEvent_2_OnRelevantClassesUpdated__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          relevantClasses                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_VehicleTrunk_C::BndEvt__mManualManufacturerWidget_K2Node_ComponentBoundEvent_2_OnRelevantClassesUpdated__DelegateSignature(TArray<class UClass*>* relevantClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mManualManufacturerWidget_K2Node_ComponentBoundEvent_2_OnRelevantClassesUpdated__DelegateSignature");

	UWidget_VehicleTrunk_C_BndEvt__mManualManufacturerWidget_K2Node_ComponentBoundEvent_2_OnRelevantClassesUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (relevantClasses != nullptr)
		*relevantClasses = params.relevantClasses;
}


// Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.ExecuteUbergraph_Widget_VehicleTrunk
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_VehicleTrunk_C::ExecuteUbergraph_Widget_VehicleTrunk(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.ExecuteUbergraph_Widget_VehicleTrunk");

	UWidget_VehicleTrunk_C_ExecuteUbergraph_Widget_VehicleTrunk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

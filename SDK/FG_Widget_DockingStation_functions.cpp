// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DockingStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DockingStation.Widget_DockingStation_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_DockingStation_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.DropInventorySlotStack");

	UWidget_DockingStation_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function Widget_DockingStation.Widget_DockingStation_C.SetHeaderText
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DockingStation_C::SetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.SetHeaderText");

	UWidget_DockingStation_C_SetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.GetLoadingModeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DockingStation_C::GetLoadingModeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.GetLoadingModeButton");

	UWidget_DockingStation_C_GetLoadingModeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.DumpAllToInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_DockingStation_C::DumpAllToInventory(class UFGInventoryComponent** SourceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.DumpAllToInventory");

	UWidget_DockingStation_C_DumpAllToInventory_Params params;
	params.SourceComponent = SourceComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.GrabAllFromInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_DockingStation_C::GrabAllFromInventory(class UFGInventoryComponent** SourceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.GrabAllFromInventory");

	UWidget_DockingStation_C_GrabAllFromInventory_Params params;
	params.SourceComponent = SourceComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_DockingStation_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.Init");

	UWidget_DockingStation_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DockingStation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.Construct");

	UWidget_DockingStation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.GrabAllFromStorage
// (BlueprintCallable, BlueprintEvent)

void UWidget_DockingStation_C::GrabAllFromStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.GrabAllFromStorage");

	UWidget_DockingStation_C_GrabAllFromStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.DumpAllInStorage
// (BlueprintCallable, BlueprintEvent)

void UWidget_DockingStation_C::DumpAllInStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.DumpAllInStorage");

	UWidget_DockingStation_C_DumpAllInStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__Widget_SwitchButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_DockingStation_C::BndEvt__Widget_SwitchButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__Widget_SwitchButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_DockingStation_C_BndEvt__Widget_SwitchButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DockingStation_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.Tick");

	UWidget_DockingStation_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
// (BlueprintEvent)

void UWidget_DockingStation_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature");

	UWidget_DockingStation_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_DockingStation_C::BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_DockingStation_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.OnReplicationDetailActorReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ReplicationDetailOwner         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DockingStation_C::OnReplicationDetailActorReplicated(class AActor** ReplicationDetailOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.OnReplicationDetailActorReplicated");

	UWidget_DockingStation_C_OnReplicationDetailActorReplicated_Params params;
	params.ReplicationDetailOwner = ReplicationDetailOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DockingStation.Widget_DockingStation_C.ExecuteUbergraph_Widget_DockingStation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DockingStation_C::ExecuteUbergraph_Widget_DockingStation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DockingStation.Widget_DockingStation_C.ExecuteUbergraph_Widget_DockingStation");

	UWidget_DockingStation_C_ExecuteUbergraph_Widget_DockingStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

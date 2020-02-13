// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PlayerInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_PlayerInventory_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnKeyUp");

	UWidget_PlayerInventory_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.SetupArmInventoryResize
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_PlayerInventory_C::SetupArmInventoryResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.SetupArmInventoryResize");

	UWidget_PlayerInventory_C_SetupArmInventoryResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.IsArmEquipmentInventoryOutdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isOutdated                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventory_C::IsArmEquipmentInventoryOutdated(bool* isOutdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.IsArmEquipmentInventoryOutdated");

	UWidget_PlayerInventory_C_IsArmEquipmentInventoryOutdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isOutdated != nullptr)
		*isOutdated = params.isOutdated;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_PlayerInventory_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnPreviewKeyDown");

	UWidget_PlayerInventory_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_PlayerInventory_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnDrop");

	UWidget_PlayerInventory_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.TryGetCentralStorages
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_PlayerInventory_C::TryGetCentralStorages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.TryGetCentralStorages");

	UWidget_PlayerInventory_C_TryGetCentralStorages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_PlayerInventory_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnKeyDown");

	UWidget_PlayerInventory_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_PlayerInventory_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.Cleanup");

	UWidget_PlayerInventory_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.SetInventoryComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  arms                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  Back                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  trash                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventory_C::SetInventoryComponents(class UFGInventoryComponent** InventoryComponent, class UFGInventoryComponent** arms, class UFGInventoryComponent** Back, class UFGInventoryComponent** head, class UFGInventoryComponent** trash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.SetInventoryComponents");

	UWidget_PlayerInventory_C_SetInventoryComponents_Params params;
	params.InventoryComponent = InventoryComponent;
	params.arms = arms;
	params.Back = Back;
	params.head = head;
	params.trash = trash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_PlayerInventory_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.Init");

	UWidget_PlayerInventory_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.CloseInventory
// (BlueprintCallable, BlueprintEvent)

void UWidget_PlayerInventory_C::CloseInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.CloseInventory");

	UWidget_PlayerInventory_C_CloseInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PlayerInventory_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.Destruct");

	UWidget_PlayerInventory_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PlayerInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.Construct");

	UWidget_PlayerInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.CentralStorageButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Button_C**       ClickedButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventory_C::CentralStorageButtonClicked(class UWidget_Button_C** ClickedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.CentralStorageButtonClicked");

	UWidget_PlayerInventory_C_CentralStorageButtonClicked_Params params;
	params.ClickedButton = ClickedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnCentralStorageAddedOrRemoved
// (BlueprintCallable, BlueprintEvent)

void UWidget_PlayerInventory_C::OnCentralStorageAddedOrRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnCentralStorageAddedOrRemoved");

	UWidget_PlayerInventory_C_OnCentralStorageAddedOrRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_PlayerInventory_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_PlayerInventory_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventory_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.PreConstruct");

	UWidget_PlayerInventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.BndEvt__mInventory_K2Node_ComponentBoundEvent_0_OnRelevantShortcutPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventory_C::BndEvt__mInventory_K2Node_ComponentBoundEvent_0_OnRelevantShortcutPressed__DelegateSignature(class UWidget_InventorySlot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.BndEvt__mInventory_K2Node_ComponentBoundEvent_0_OnRelevantShortcutPressed__DelegateSignature");

	UWidget_PlayerInventory_C_BndEvt__mInventory_K2Node_ComponentBoundEvent_0_OnRelevantShortcutPressed__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventory.Widget_PlayerInventory_C.ExecuteUbergraph_Widget_PlayerInventory
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventory_C::ExecuteUbergraph_Widget_PlayerInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventory.Widget_PlayerInventory_C.ExecuteUbergraph_Widget_PlayerInventory");

	UWidget_PlayerInventory_C_ExecuteUbergraph_Widget_PlayerInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_UseableBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_UseableBase.Widget_UseableBase_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_UseableBase_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.OnKeyDown");

	UWidget_UseableBase_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_UseableBase.Widget_UseableBase_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_UseableBase_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.OnKeyUp");

	UWidget_UseableBase_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::DropInventoryStackOnInventoryComponent(class UWidget_InventorySlot_C** InventorySlot, class UFGInventoryComponent** InventoryComponent, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryComponent");

	UWidget_UseableBase_C_DropInventoryStackOnInventoryComponent_Params params;
	params.InventorySlot = InventorySlot;
	params.InventoryComponent = InventoryComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget_Inventory_C**    WidgetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::DropInventoryStackOnInventoryWidget(class UWidget_InventorySlot_C** InventorySlot, class UWidget_Inventory_C** WidgetInventory, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryWidget");

	UWidget_UseableBase_C_DropInventoryStackOnInventoryWidget_Params params;
	params.InventorySlot = InventorySlot;
	params.WidgetInventory = WidgetInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_UseableBase.Widget_UseableBase_C.InitInventoryWidgetCallbacks
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Inventory_C**    InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_UseableBase_C::InitInventoryWidgetCallbacks(class UWidget_Inventory_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.InitInventoryWidgetCallbacks");

	UWidget_UseableBase_C_InitInventoryWidgetCallbacks_Params params;
	params.InventoryComponent = InventoryComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.OnInventorySlotStackMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_UseableBase_C::OnInventorySlotStackMove(class UWidget_InventorySlot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.OnInventorySlotStackMove");

	UWidget_UseableBase_C_OnInventorySlotStackMove_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.DropInventorySlotStack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.DropInventorySlotStack");

	UWidget_UseableBase_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function Widget_UseableBase.Widget_UseableBase_C.SetInventoryVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::SetInventoryVisibility(bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.SetInventoryVisibility");

	UWidget_UseableBase_C_SetInventoryVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.GetDefaultRCO
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_RemoteCallObject_C*  RCO                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::GetDefaultRCO(class UBP_RemoteCallObject_C** RCO)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.GetDefaultRCO");

	UWidget_UseableBase_C_GetDefaultRCO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RCO != nullptr)
		*RCO = params.RCO;
}


// Function Widget_UseableBase.Widget_UseableBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.PreConstruct");

	UWidget_UseableBase_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_UseableBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.Construct");

	UWidget_UseableBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_UseableBase_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.Destruct");

	UWidget_UseableBase_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.ExecuteUbergraph_Widget_UseableBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::ExecuteUbergraph_Widget_UseableBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.ExecuteUbergraph_Widget_UseableBase");

	UWidget_UseableBase_C_ExecuteUbergraph_Widget_UseableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.ModifierReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_UseableBase_C::ModifierReleased__DelegateSignature(class UFGInteractWidget** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.ModifierReleased__DelegateSignature");

	UWidget_UseableBase_C_ModifierReleased__DelegateSignature_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.ModifierPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_UseableBase_C::ModifierPressed__DelegateSignature(class UFGInteractWidget** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.ModifierPressed__DelegateSignature");

	UWidget_UseableBase_C_ModifierPressed__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_UseableBase.Widget_UseableBase_C.InventorySlotStackMoveEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EInteractionDirection>* InteractionDirection           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_UseableBase_C::InventorySlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C** InventorySlot, TEnumAsByte<EInteractionDirection>* InteractionDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UseableBase.Widget_UseableBase_C.InventorySlotStackMoveEvent__DelegateSignature");

	UWidget_UseableBase_C_InventorySlotStackMoveEvent__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;
	params.InteractionDirection = InteractionDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

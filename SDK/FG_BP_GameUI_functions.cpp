// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_GameUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameUI.BP_GameUI_C.PopWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      WidgetToRemove                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GameUI_C::PopWidget(class UFGInteractWidget** WidgetToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.PopWidget");

	UBP_GameUI_C_PopWidget_Params params;
	params.WidgetToRemove = WidgetToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_GameUI_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnPreviewKeyDown");

	UBP_GameUI_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.SetVersionLabelPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::SetVersionLabelPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.SetVersionLabelPosition");

	UBP_GameUI_C_SetVersionLabelPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.GetExperimentalVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::GetExperimentalVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetExperimentalVisibility");

	UBP_GameUI_C_GetExperimentalVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.GetChildUIVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::GetChildUIVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetChildUIVisibility");

	UBP_GameUI_C_GetChildUIVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.PrePopWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      WidgetBeingRemoved             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::PrePopWidget(class UFGInteractWidget** WidgetBeingRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.PrePopWidget");

	UBP_GameUI_C_PrePopWidget_Params params;
	params.WidgetBeingRemoved = WidgetBeingRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ShowTutorialHint
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::ShowTutorialHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ShowTutorialHint");

	UBP_GameUI_C_ShowTutorialHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.GetFGHud
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFGHUD*                  HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::GetFGHud(class AFGHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetFGHud");

	UBP_GameUI_C_GetFGHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function BP_GameUI.BP_GameUI_C.SetPrototypeCameraVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::SetPrototypeCameraVisibility(bool* New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.SetPrototypeCameraVisibility");

	UBP_GameUI_C_SetPrototypeCameraVisibility_Params params;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.SetPrototypeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::SetPrototypeVisibility(bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.SetPrototypeVisibility");

	UBP_GameUI_C_SetPrototypeVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnInventorySlotStackMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EInteractionDirection>* InteractionDirection           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::OnInventorySlotStackMove(class UWidget_InventorySlot_C** InventorySlot, TEnumAsByte<EInteractionDirection>* InteractionDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnInventorySlotStackMove");

	UBP_GameUI_C_OnInventorySlotStackMove_Params params;
	params.InventorySlot = InventorySlot;
	params.InteractionDirection = InteractionDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.CreateAddOnPlayerInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget_PlayerInventoryAddon_C* CachedPlayerInventoryAddon     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::CreateAddOnPlayerInventory(class UPanelWidget** Container, class UWidget_PlayerInventoryAddon_C** CachedPlayerInventoryAddon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.CreateAddOnPlayerInventory");

	UBP_GameUI_C_CreateAddOnPlayerInventory_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CachedPlayerInventoryAddon != nullptr)
		*CachedPlayerInventoryAddon = params.CachedPlayerInventoryAddon;
}


// Function BP_GameUI.BP_GameUI_C.IsChatWindowVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::IsChatWindowVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.IsChatWindowVisible");

	UBP_GameUI_C_IsChatWindowVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.GetUIVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::GetUIVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetUIVisibility");

	UBP_GameUI_C_GetUIVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.GetEquipmentHUDParent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEquipmentSlot*                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOverlay*                overlayParent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::GetEquipmentHUDParent(EEquipmentSlot* SlotType, class UOverlay** overlayParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetEquipmentHUDParent");

	UBP_GameUI_C_GetEquipmentHUDParent_Params params;
	params.SlotType = SlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overlayParent != nullptr)
		*overlayParent = params.overlayParent;
}


// Function BP_GameUI.BP_GameUI_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_GameUI_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnKeyDown");

	UBP_GameUI_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.HUDPanelVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::HUDPanelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.HUDPanelVisibility");

	UBP_GameUI_C_HUDPanelVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.GetMessageNotifierVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::GetMessageNotifierVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetMessageNotifierVisibility");

	UBP_GameUI_C_GetMessageNotifierVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.UpdateHUDVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::UpdateHUDVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.UpdateHUDVisibility");

	UBP_GameUI_C_UpdateHUDVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.GetSchematicPopupVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::GetSchematicPopupVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetSchematicPopupVisibility");

	UBP_GameUI_C_GetSchematicPopupVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.AddMessageNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 newMessage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::AddMessageNotification(class UClass** newMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.AddMessageNotification");

	UBP_GameUI_C_AddMessageNotification_Params params;
	params.newMessage = newMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.GetItemDropLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 dropLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::GetItemDropLocation(struct FVector* dropLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetItemDropLocation");

	UBP_GameUI_C_GetItemDropLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dropLocation != nullptr)
		*dropLocation = params.dropLocation;
}


// Function BP_GameUI.BP_GameUI_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GameUI_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnDrop");

	UBP_GameUI_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.RefreshInputMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::RefreshInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.RefreshInputMode");

	UBP_GameUI_C_RefreshInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.CreatePopupWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopupData*             PopupData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFGPopupWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFGPopupWidget* UBP_GameUI_C::CreatePopupWidget(struct FPopupData* PopupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.CreatePopupWidget");

	UBP_GameUI_C_CreatePopupWidget_Params params;
	params.PopupData = PopupData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.GetReloadRespawnText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_GameUI_C::GetReloadRespawnText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetReloadRespawnText");

	UBP_GameUI_C_GetReloadRespawnText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.GetReloadRespawnTextVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::GetReloadRespawnTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetReloadRespawnTextVisibility");

	UBP_GameUI_C_GetReloadRespawnTextVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.PopAllWidgets_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::PopAllWidgets_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.PopAllWidgets_Internal");

	UBP_GameUI_C_PopAllWidgets_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.DoesWidgetExist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           doesExist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::DoesWidgetExist(class UClass** WidgetClass, bool* doesExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.DoesWidgetExist");

	UBP_GameUI_C_DoesWidgetExist_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (doesExist != nullptr)
		*doesExist = params.doesExist;
}


// Function BP_GameUI.BP_GameUI_C.FindWidgetToPop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget*       widgetToPop                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::FindWidgetToPop(class UFGInteractWidget** widgetToPop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.FindWidgetToPop");

	UBP_GameUI_C_FindWidgetToPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (widgetToPop != nullptr)
		*widgetToPop = params.widgetToPop;
}


// Function BP_GameUI.BP_GameUI_C.GetPlayerInteractionVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_GameUI_C::GetPlayerInteractionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.GetPlayerInteractionVisibility");

	UBP_GameUI_C_GetPlayerInteractionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameUI.BP_GameUI_C.ClosePopup
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::ClosePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ClosePopup");

	UBP_GameUI_C_ClosePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_GameUI_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.Destruct");

	UBP_GameUI_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.Play Landed Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::Play_Landed_Effect(float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.Play Landed Effect");

	UBP_GameUI_C_Play_Landed_Effect_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.PopAllWidgets
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::PopAllWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.PopAllWidgets");

	UBP_GameUI_C_PopAllWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ReceivedMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 inMessage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::ReceivedMessage(class UClass** inMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ReceivedMessage");

	UBP_GameUI_C_ReceivedMessage_Params params;
	params.inMessage = inMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.RemoveAudioMessage
// (Event, Public, BlueprintEvent)

void UBP_GameUI_C::RemoveAudioMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.RemoveAudioMessage");

	UBP_GameUI_C_RemoveAudioMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.AddIntroTutorialInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FTutorialHintData*      TutorialHintData               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GameUI_C::AddIntroTutorialInfo(struct FTutorialHintData* TutorialHintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.AddIntroTutorialInfo");

	UBP_GameUI_C_AddIntroTutorialInfo_Params params;
	params.TutorialHintData = TutorialHintData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.UpdateTutorialInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialHintData*      hintData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GameUI_C::UpdateTutorialInfo(struct FTutorialHintData* hintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.UpdateTutorialInfo");

	UBP_GameUI_C_UpdateTutorialInfo_Params params;
	params.hintData = hintData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.HandleFocusLost
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::HandleFocusLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.HandleFocusLost");

	UBP_GameUI_C_HandleFocusLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.AddPawnHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            newContent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::AddPawnHUD(class UUserWidget** newContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.AddPawnHUD");

	UBP_GameUI_C_AddPawnHUD_Params params;
	params.newContent = newContent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.RemovePawnHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::RemovePawnHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.RemovePawnHUD");

	UBP_GameUI_C_RemovePawnHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.AddInteractWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      widgetToAdd                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::AddInteractWidget(class UFGInteractWidget** widgetToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.AddInteractWidget");

	UBP_GameUI_C_AddInteractWidget_Params params;
	params.widgetToAdd = widgetToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnPlayerBeginTypeMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::OnPlayerBeginTypeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnPlayerBeginTypeMessage");

	UBP_GameUI_C_OnPlayerBeginTypeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_GameUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.Construct");

	UBP_GameUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnChatMessageReceived
// (BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::OnChatMessageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnChatMessageReceived");

	UBP_GameUI_C_OnChatMessageReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ClearHintOnTutorialStepCompleted
// (Event, Public, BlueprintEvent)

void UBP_GameUI_C::ClearHintOnTutorialStepCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ClearHintOnTutorialStepCompleted");

	UBP_GameUI_C_ClearHintOnTutorialStepCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ShowRespawnMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::ShowRespawnMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ShowRespawnMessage");

	UBP_GameUI_C_ShowRespawnMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ResetInput
// (BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ResetInput");

	UBP_GameUI_C_ResetInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnReceiveRadiationStart
// (Event, Public, BlueprintEvent)

void UBP_GameUI_C::OnReceiveRadiationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnReceiveRadiationStart");

	UBP_GameUI_C_OnReceiveRadiationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnReceiveRadiationStop
// (Event, Public, BlueprintEvent)

void UBP_GameUI_C::OnReceiveRadiationStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnReceiveRadiationStop");

	UBP_GameUI_C_OnReceiveRadiationStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnRadiationIntensityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         radiationIntensity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         radiationImmunity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::OnRadiationIntensityUpdated(float* radiationIntensity, float* radiationImmunity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnRadiationIntensityUpdated");

	UBP_GameUI_C_OnRadiationIntensityUpdated_Params params;
	params.radiationIntensity = radiationIntensity;
	params.radiationImmunity = radiationImmunity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ForceStopRadiationUI
// (BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::ForceStopRadiationUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ForceStopRadiationUI");

	UBP_GameUI_C_ForceStopRadiationUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.StopSubtitle_dep
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_GameUI_C::StopSubtitle_dep(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.StopSubtitle_dep");

	UBP_GameUI_C_StopSubtitle_dep_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.PushWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GameUI_C::PushWidget(class UFGInteractWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.PushWidget");

	UBP_GameUI_C_PushWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ShowDirectionalSubtitle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Subtitle                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::ShowDirectionalSubtitle(struct FText* Subtitle, class AActor** Instigator, float* Duration, bool* bUseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ShowDirectionalSubtitle");

	UBP_GameUI_C_ShowDirectionalSubtitle_Params params;
	params.Subtitle = Subtitle;
	params.Instigator = Instigator;
	params.Duration = Duration;
	params.bUseDuration = bUseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.StopSubtitle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::StopSubtitle(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.StopSubtitle");

	UBP_GameUI_C_StopSubtitle_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.EventUpdateHUDScaling
// (BlueprintCallable, BlueprintEvent)

void UBP_GameUI_C::EventUpdateHUDScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.EventUpdateHUDScaling");

	UBP_GameUI_C_EventUpdateHUDScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.PlayAudioMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 MessageClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::PlayAudioMessage(class UClass** MessageClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.PlayAudioMessage");

	UBP_GameUI_C_PlayAudioMessage_Params params;
	params.MessageClass = MessageClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.OnResumeGame
// (Event, Public, BlueprintEvent)

void UBP_GameUI_C::OnResumeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.OnResumeGame");

	UBP_GameUI_C_OnResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameUI.BP_GameUI_C.ExecuteUbergraph_BP_GameUI
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameUI_C::ExecuteUbergraph_BP_GameUI(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameUI.BP_GameUI_C.ExecuteUbergraph_BP_GameUI");

	UBP_GameUI_C_ExecuteUbergraph_BP_GameUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

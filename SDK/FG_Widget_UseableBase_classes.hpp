#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_UseableBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_UseableBase.Widget_UseableBase_C
// 0x0048 (0x02D8 - 0x0290)
class UWidget_UseableBase_C : public UFGInteractWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               mShouldOpenInventory;                                     // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    InventorySlotStackMoveEvent;                              // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               mDidPressModifier;                                        // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ModifierPressed;                                          // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ModifierReleased;                                         // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_UseableBase.Widget_UseableBase_C");
		return ptr;
	}


	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void DropInventoryStackOnInventoryComponent(class UWidget_InventorySlot_C** InventorySlot, class UFGInventoryComponent** inventoryComponent, bool* Result);
	void DropInventoryStackOnInventoryWidget(class UWidget_InventorySlot_C** InventorySlot, class UWidget_Inventory_C** WidgetInventory, bool* Result);
	void InitInventoryWidgetCallbacks(class UWidget_Inventory_C** inventoryComponent);
	void OnInventorySlotStackMove(class UWidget_InventorySlot_C** InventorySlot);
	void DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved);
	void SetInventoryVisibility(bool* visible);
	void GetDefaultRCO(class UBP_RemoteCallObject_C** RCO);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Widget_UseableBase(int* EntryPoint);
	void ModifierReleased__DelegateSignature(class UFGInteractWidget** Owner);
	void ModifierPressed__DelegateSignature(class UFGInteractWidget** NewParam);
	void InventorySlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C** InventorySlot, TEnumAsByte<EInteractionDirection>* InteractionDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

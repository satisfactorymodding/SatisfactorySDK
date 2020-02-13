#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Inventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Inventory.Widget_Inventory_C
// 0x0042 (0x0272 - 0x0230)
class UWidget_Inventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                           mSlots;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFGInventoryComponent*                       mInventoryComponent;                                      // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                mMaxInventoryColumns;                                     // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mIsLockedInventory;                                       // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	int                                                mUncalculatedWidth;                                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mOverrideWidth;                                           // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mUseLinearSize;                                           // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mUseSmallSlots;                                           // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	TArray<class UWidget_InventorySlot_C*>             mInventorySlots;                                          // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               mAlwaysBigSlot;                                           // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mKeepWidthRegardlessOfSlotSize;                           // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inventory.Widget_Inventory_C");
		return ptr;
	}


	void GetAllInventorySlots(TArray<class UWidget_InventorySlot_C*>* InventorySlots);
	int GetSqrtOfLinearSize();
	int GetWidth();
	void CreateAllSlots();
	void ClearAllSlots();
	void CalcIndex(int* X, int* Y, int* Width, int* idx);
	void CreateSlot(int* Index, int* Row, int* Column, class UWidget_InventorySlot_C** Result);
	void Init(class UFGInventoryComponent** component);
	void OnInventoryResized(int* oldSize, int* newSize);
	void Destruct();
	void Construct();
	void ExecuteUbergraph_Widget_Inventory(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

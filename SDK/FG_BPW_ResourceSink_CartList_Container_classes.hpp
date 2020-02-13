#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_CartList_Container_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C
// 0x0080 (0x02B0 - 0x0230)
class UBPW_ResourceSink_CartList_Container_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_StandardButton_C*                    mBuyAllButton;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_ResourceSinkShop_CartList_C*            mCartList;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                mShoppingCartButtonBox;                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  mTotalCostText;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FResourceSinkShop_CartItem_Struct>   mCartItemStruct;                                          // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnItemRemovedFromCart;                                    // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuyAllButtonClicked;                                    // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       mText;                                                    // 0x0288(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnItemAmountChangedInCart;                                // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C");
		return ptr;
	}


	void ChangeItemAmount(class UClass** schematic, int* NewAmount);
	void SetTotalCostText(struct FText* mTotalCostText);
	void SetBuyButtonVisibility(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct);
	void UpdateCartList(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct);
	void Construct();
	void BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature(class UClass** mSchematic);
	void BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature(class UClass** schematic, int* NewAmount);
	void ExecuteUbergraph_BPW_ResourceSink_CartList_Container(int* EntryPoint);
	void OnItemAmountChangedInCart__DelegateSignature(class UClass** schematic, int* amount);
	void OnBuyAllButtonClicked__DelegateSignature();
	void OnItemRemovedFromCart__DelegateSignature(class UClass** mSchematic);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_FilterButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_FilterButton.Widget_FilterButton_C
// 0x0080 (0x02B0 - 0x0230)
class UWidget_FilterButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_OptionsCheckbox_C*                   mShowOnCompassCheckbox;                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget_OptionsCheckbox_C*                   mShowOnMapCheckbox;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget_FilterButton_Row_C*                  Widget_FilterButton_Row;                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       mName;                                                    // 0x0250(0x0028) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               mShowOnCompass;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mShowOnMap;                                               // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x028A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    mShowOnMapChanged;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    mShowOnCompassChanged;                                    // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FilterButton.Widget_FilterButton_C");
		return ptr;
	}


	void SetTitle(struct FText* mName);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__mShowOnCompassCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool* IsChecked);
	void BndEvt__mShowOnMapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckChanged__DelegateSignature(bool* IsChecked);
	void BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Widget_FilterButton(int* EntryPoint);
	void mShowOnCompassChanged__DelegateSignature(class UWidget_FilterButton_C** Instigator, bool* ShowOnCompass);
	void mShowOnMapChanged__DelegateSignature(class UWidget_FilterButton_C** Instigator, bool* ShowOnMap);
	void OnUnhovered__DelegateSignature(class UWidget_FilterButton_C** Instigator);
	void OnHovered__DelegateSignature(class UWidget_FilterButton_C** Instigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

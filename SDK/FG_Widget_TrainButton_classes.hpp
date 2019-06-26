#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TrainButton_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_TrainButton.Widget_TrainButton_C
// 0x0050 (0x0258 - 0x0208)
class UWidget_TrainButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     mButton;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  mTitleObject;                                             // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AFGTrain*                                    mTrainObject;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FText                                       mTitle;                                                   // 0x0240(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TrainButton.Widget_TrainButton_C");
		return ptr;
	}


	void SetTitle(const struct FText& mTitle);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_TrainButton(int EntryPoint);
	void OnClicked__DelegateSignature(class UWidget_TrainButton_C* Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

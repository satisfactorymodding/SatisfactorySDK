#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_StandardButton_Togglable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C
// 0x0168 (0x0370 - 0x0208)
class UWidget_StandardButton_Togglable_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_StandardButton_C*                    Widget_StandardButton;                                    // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       mTrueText;                                                // 0x0218(0x0028) (Edit, BlueprintVisible)
	struct FText                                       mFalseText;                                               // 0x0230(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 mTrueIconBrush;                                           // 0x0248(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 mFalseIconBrush;                                          // 0x02D0(0x0088) (Edit, BlueprintVisible)
	bool                                               mIsTrue;                                                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C");
		return ptr;
	}


	void SetButtonState(bool mIsTrue);
	void PreConstruct(bool* IsDesignTime);
	void Init(bool mIsTrue);
	void BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Widget_StandardButton_Togglable(int EntryPoint);
	void OnStateChanged__DelegateSignature(bool IsTrue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

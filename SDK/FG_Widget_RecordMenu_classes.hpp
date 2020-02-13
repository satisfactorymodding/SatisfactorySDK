#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RecordMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_RecordMenu.Widget_RecordMenu_C
// 0x0149 (0x03D9 - 0x0290)
class UWidget_RecordMenu_C : public UFGInteractWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SceneEnter;                                               // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget_RadialMenu_C*                        Widget_RadialMenu;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       mRecordText;                                              // 0x02A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mStopRecordText;                                          // 0x02C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_WheeledVehicle_C*                        mVehicle;                                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FText                                       mTitle;                                                   // 0x02E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mPauseRecordingText;                                      // 0x02F8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mResumeRecordingText;                                     // 0x0310(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mEnableAutoPilotText;                                     // 0x0328(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mDisableAutoPilotText;                                    // 0x0340(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mShowPathText;                                            // 0x0358(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mHidePathText;                                            // 0x0370(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             mAllButtons;                                              // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              mCircleRadius;                                            // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSensitivity;                                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   mClampedMousePos;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       mCancelText;                                              // 0x03A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       mClearPathText;                                           // 0x03C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               mActive;                                                  // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RecordMenu.Widget_RecordMenu_C");
		return ptr;
	}


	void SetNameAtIndex(struct FText* Name, int* Int);
	void UpdateLabels();
	void GetPositionInCircle(int* Index, struct FVector2D* Translation);
	bool GetPauseEnabled();
	void Construct();
	void ToggleRecording();
	void Destruct();
	void ClearPathRecording();
	void PauseClicked();
	void AutoPilotClicked();
	void PathVisibilityClicked();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_Widget_RecordMenu(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

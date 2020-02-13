#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_LerpingProgressBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BPW_LerpingProgressBar.BPW_LerpingProgressBar_C
// 0x0259 (0x0489 - 0x0230)
class UBPW_LerpingProgressBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                mProgressBar;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FProgressBarStyle                           mStyle;                                                   // 0x0240(0x01A0) (Edit, BlueprintVisible)
	float                                              mLerpDuration;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mLerpUpdateTime;                                          // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mStartPercentage;                                         // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mLerpT;                                                   // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          mCurve;                                                   // 0x03F0(0x0088) (Edit, BlueprintVisible)
	float                                              mLastPercent;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mNewPercent;                                              // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mLerpTimerHandle;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               mForceProgressBarWrap;                                    // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_LerpingProgressBar.BPW_LerpingProgressBar_C");
		return ptr;
	}


	void mSetPercent(float* Percent, bool* ForceProgressBarWrap);
	void PreConstruct(bool* IsDesignTime);
	void LerpBar();
	void Destruct();
	void ExecuteUbergraph_BPW_LerpingProgressBar(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

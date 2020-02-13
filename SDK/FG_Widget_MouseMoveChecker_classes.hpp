#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MouseMoveChecker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MouseMoveChecker.Widget_MouseMoveChecker_C
// 0x0030 (0x0260 - 0x0230)
class UWidget_MouseMoveChecker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                                   mLastMousePos;                                            // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              mUpdateTime;                                              // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseMoved;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MouseMoveChecker.Widget_MouseMoveChecker_C");
		return ptr;
	}


	void CheckIfMouseMove();
	void StopCheckMouse();
	void StartCheckMouse();
	void ExecuteUbergraph_Widget_MouseMoveChecker(int* EntryPoint);
	void OnMouseMoved__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

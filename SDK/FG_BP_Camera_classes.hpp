#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Camera_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Camera.BP_Camera_C
// 0x0041 (0x0421 - 0x03E0)
class ABP_Camera_C : public AFGEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerController*                           mPlayerController;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       mOwningPawn;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_HUD_C*                                   mPlayerHUD;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                mFOV;                                                     // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mHiresMode;                                               // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UBP_GameUI_C*                                mGameUI;                                                  // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFGInteractWidget*                           mCameraWidget;                                            // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera.BP_Camera_C");
		return ptr;
	}


	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_BuildGunScrollDown_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_BuildGunScrollUp_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key);
	void WasEquipped();
	void WasUnEquipped();
	void SetFOV();
	void ExecuteUbergraph_BP_Camera(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

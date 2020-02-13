#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x00B0 (0x0888 - 0x07D8)
class ABP_PlayerController_C : public AFGPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             mDialogueComponent;                                       // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mRespawnFadeOutTime;                                      // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	struct FPopupData                                  mPopupDataTest;                                           // 0x07F0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget_MapContainer_C*                      mMinimapWidget;                                           // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginTypeChat;                                          // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWidget_PhotoMode_C*                         PhotoModeInstructionsWidget;                              // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRespawnEnd;                                             // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}


	void DismantleGolfCart(class AFGWheeledVehicle** GolfCart);
	class UAkComponent* OnSetupMovementWind();
	void OnDisabledInputChanged();
	void ToggleMiniMap();
	void DismantlePortableMiner(class AFGPortableMiner** PortableMiner);
	void InpActEvt_Chat_K2Node_InputActionEvent_17(struct FKey* Key);
	void InpActEvt_Shortcut1_K2Node_InputActionEvent_16(struct FKey* Key);
	void InpActEvt_Shortcut2_K2Node_InputActionEvent_15(struct FKey* Key);
	void InpActEvt_Shortcut3_K2Node_InputActionEvent_14(struct FKey* Key);
	void InpActEvt_Shortcut4_K2Node_InputActionEvent_13(struct FKey* Key);
	void InpActEvt_Shortcut5_K2Node_InputActionEvent_12(struct FKey* Key);
	void InpActEvt_Shortcut6_K2Node_InputActionEvent_11(struct FKey* Key);
	void InpActEvt_Shortcut7_K2Node_InputActionEvent_10(struct FKey* Key);
	void InpActEvt_Shortcut8_K2Node_InputActionEvent_9(struct FKey* Key);
	void InpActEvt_Shortcut9_K2Node_InputActionEvent_8(struct FKey* Key);
	void InpActEvt_Shortcut10_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_PhotoMode_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_ToggleMap_BuildGunNoSnapMode_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_Prototype_RagdollPlayer_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_SecondaryFire_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_TogglePhotoModeUIVisibility_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_PauseGame_K2Node_InputActionEvent_1(struct FKey* Key);
	void ReceiveTick(float* DeltaSeconds);
	void OnStartRespawn(bool* isJoining);
	void OnFinishRespawn();
	void ReceiveBeginPlay();
	void CheckAndUpdateGamepad();
	void Server_ForceRagdoll();
	void OnDisabledInputGateChanged();
	void CreateSequenceList();
	void TogglePhotoModeInstructionsWidget();
	void PlayPhotoSound();
	void TakePhoto();
	void DoPause();
	void OnDismantlePortableMiner(class AFGPortableMiner** PortableMiner);
	void OnDismantleGolfCart(class AFGWheeledVehicle** inGolfCart);
	void ExecuteUbergraph_BP_PlayerController(int* EntryPoint);
	void OnRespawnEnd__DelegateSignature();
	void OnBeginTypeChat__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

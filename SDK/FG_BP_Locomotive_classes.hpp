#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Locomotive_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C
// 0x0088 (0x0628 - 0x05A0)
class ABP_Locomotive_C : public AFGLocomotive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    EngineRunning_02;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EngineRunning_01;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mIsThrottleZero;                                          // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	struct FText                                       mMapText;                                                 // 0x05D0(0x0028) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              mDeltaSeconds;                                            // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mBrakeTime;                                               // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    mBrakeSteamVfx_01;                                        // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBrakeSteamVfx_02;                                        // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBrakeSteamVfx_03;                                        // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBrakeSteamVfx_04;                                        // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      mHUDClass;                                                // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPossessed;                                               // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	class UCurveFloat*                                 mEngineCurve;                                             // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C");
		return ptr;
	}


	struct FText SetActorRepresentationText(const struct FText& newText);
	bool UpdateRepresentation();
	float GetActorFogOfWarRevealRadius();
	EFogOfWarRevealType GetActorFogOfWarRevealType();
	struct FLinearColor GetActorRepresentationColor();
	struct FText GetActorRepresentationText();
	class UTexture2D* GetActorRepresentationTexture();
	ERepresentationType GetActorRepresentationType();
	bool GetActorShouldShowInCompass();
	bool AddAsRepresentation();
	bool GetActorShouldShowOnMap();
	struct FVector GetRealActorLocation();
	struct FRotator GetRealActorRotation();
	bool IsActorStatic();
	bool RemoveAsRepresentation();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void UpdateCamera();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Server_Leave();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceiveUnpossessed(class AController** OldController);
	void ReceivePossessed(class AController** NewController);
	void ExecuteUbergraph_BP_Locomotive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

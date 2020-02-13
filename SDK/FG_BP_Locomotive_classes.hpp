#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Locomotive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C
// 0x0088 (0x0608 - 0x0580)
class ABP_Locomotive_C : public AFGLocomotive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    EngineRunning_02;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EngineRunning_01;                                         // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mIsThrottleZero;                                          // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	struct FText                                       mMapText;                                                 // 0x05B0(0x0028) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              mDeltaSeconds;                                            // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mBrakeTime;                                               // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      mHUDClass;                                                // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPossessed;                                               // 0x05D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 mEngineCurve;                                             // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAllowEndHonk;                                            // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPlayHonkAlternative;                                     // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05EA(0x0006) MISSED OFFSET
	struct FText                                       mCachedName;                                              // 0x05F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C");
		return ptr;
	}


	ECompassViewDistance GetActorCompassViewDistance();
	ECompassViewDistance SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance);
	struct FText SetActorRepresentationText(struct FText* newText);
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
	void InpActEvt_Use_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key);
	void SetActorRepresentationColor(struct FLinearColor* NewColor);
	void ReceiveTick(float* DeltaSeconds);
	void UpdateCamera();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Server_Leave();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float* AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float* AxisValue);
	void ReceiveUnpossessed(class AController** OldController);
	void ReceivePossessed(class AController** NewController);
	void MultiCast_TrainHorn_01();
	void MultiCast_TrainHorn_01_Stop();
	void MultiCast_TrainHorn_02();
	void MultiCast_TrainHorn_02_Stop();
	void Server_Horn_01();
	void Server_Horn_01_Stop();
	void Server_Horn_02();
	void Server_Horn_02_Stop();
	void OnNameChanged();
	void UpdateTrainName();
	void GainedSignificance();
	void LostSignificance();
	void ExecuteUbergraph_BP_Locomotive(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

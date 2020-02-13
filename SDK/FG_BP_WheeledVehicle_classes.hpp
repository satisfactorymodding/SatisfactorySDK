#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_WheeledVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WheeledVehicle.BP_WheeledVehicle_C
// 0x025C (0x0924 - 0x06C8)
class ABP_WheeledVehicle_C : public AFGWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         DriftForceLocation;                                       // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGVehicleCollisionBoxComponent*             VehicleCollisionBox;                                      // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mIsRecording;                                             // 0x06F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F1(0x0003) MISSED OFFSET
	float                                              mRecordCounter;                                           // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRecordInterval;                                          // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mCurrentDestination;                                      // 0x06FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               mObjectInFront;                                           // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	float                                              mReverseMaxDistance;                                      // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mCloseEnoughToReverse;                                    // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              mDesiredSteering;                                         // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FScriptMulticastDelegate                    LocationReached;                                          // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                mSpeedInKMH;                                              // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsFollowingPath;                                         // 0x072C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x072D(0x0003) MISSED OFFSET
	int                                                mSpeedLimit;                                              // 0x0730(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     mJumpForce;                                               // 0x0734(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsFreeCamera;                                            // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	struct FRotator                                    mDefaultCameraRotation;                                   // 0x0744(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFGCharacterPlayer*                          mTrunkUser;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsInventoryOpen;                                         // 0x0758(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	float                                              mTimeSpentOnTarget;                                       // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mUpdateDelta;                                             // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mEngineLoadTimer;                                         // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mAudioSign;                                               // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mPreviousThrottleValue;                                   // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mEngineSocketName;                                        // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mEngineLoopStart;                                         // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mEngineLoopStop;                                          // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mEngineRevUp;                                             // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mEngineRevDown;                                           // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mExhaustSocketName;                                       // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mExhaustLoopStart;                                        // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mExhaustLoopStop;                                         // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mExhaustRevUp;                                            // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mExhaustRevDown;                                          // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mTireLoopStart;                                           // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mTireLoopStop;                                            // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mCrashSound;                                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mCachedGear;                                              // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               mStopRevEngine;                                           // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mStopRevExhaust;                                          // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mEngineLoadRTPCName;                                      // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mEngineLoadTimerMax;                                      // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mDidSwitchThrottleState;                                  // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mDidStartSoundLoops;                                      // 0x07FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x07FE(0x0002) MISSED OFFSET
	class USpringArmComponent*                         mSpringArmComponent;                                      // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mIsAtStation;                                             // 0x0808(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	float                                              mReverseSteering;                                         // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mMaxReverseTime;                                          // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsMenuOpen;                                              // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsRecordSessionActive;                                   // 0x0815(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               mIsTransferingInventory;                                  // 0x0816(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsAutoPilotEnabled;                                      // 0x0817(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UClass*                                      mHUDClass;                                                // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStopRecording;                                          // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartRecording;                                         // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWidget_RecordMenu_C*                        mRecordMenu;                                              // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       mVehicleSpeedRTPC;                                        // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mVehicleAccelerationStateRTPC;                            // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mHonkSound;                                               // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPossessed;                                               // 0x0860(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	struct FText                                       mMapText;                                                 // 0x0868(0x0028) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               mMapClampSpeed;                                           // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0881(0x0003) MISSED OFFSET
	float                                              mSetMaxClampSpeed;                                        // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSetMaxClampRangeSpeed;                                   // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSetMaxClampRangeAirSpeed;                                // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mCheckValueForBurnOut;                                    // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsBurningOut;                                            // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               mPlayBurnOutSound;                                        // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               mStopBurnOutSound;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mBurnOutRTPC;                                             // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mBurnOutSpeedThres;                                       // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnOutRTPCRange;                                         // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mCarShouldNotHonk;                                        // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x08B9(0x0003) MISSED OFFSET
	float                                              AudioRPMLoadTimer;                                        // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RTPCVehicleCrashSpeed;                                    // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mUseVehicleImpactForce;                                   // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x08C9(0x0007) MISSED OFFSET
	struct FTimerHandle                                mTireSoundTimer;                                          // 0x08D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkComponent*                                mTireSoundLoop;                                           // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class FString                                      mTireSoundSwitchGroup;                                    // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      mInteractWidget;                                          // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkComponent*                                mPlayIsBurningOut;                                        // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkComponent*                                StopIsBurningOut;                                         // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FText                                       mLookAtText;                                              // 0x0908(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              mAudioPeakFlutter;                                        // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WheeledVehicle.BP_WheeledVehicle_C");
		return ptr;
	}


	ECompassViewDistance GetActorCompassViewDistance();
	ECompassViewDistance SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance);
	struct FText SetActorRepresentationText(struct FText* newText);
	bool UpdateRepresentation();
	struct FLinearColor GetActorRepresentationColor();
	struct FText GetActorRepresentationText();
	class UTexture2D* GetActorRepresentationTexture();
	ERepresentationType GetActorRepresentationType();
	bool GetActorShouldShowInCompass();
	float GetActorFogOfWarRevealRadius();
	EFogOfWarRevealType GetActorFogOfWarRevealType();
	bool RemoveAsRepresentation();
	bool AddAsRepresentation();
	bool GetActorShouldShowOnMap();
	struct FVector GetRealActorLocation();
	struct FRotator GetRealActorRotation();
	bool IsActorStatic();
	void UpdateOutline(bool* aimingAtWorkbench);
	void UpdateTireSound();
	void BurnOutSound(float* ForwardInputInput);
	struct FVector GetDriftForceOffset();
	void ShouldStopVehicle(bool* ShouldStop);
	void TurnOverVehicle();
	void AdjustThrottle(float* Throttle, float* adjustedThrottle);
	void TogglePathVisibility();
	void ToggleAutoPilot();
	void TogglePauseRecording();
	void TickSimulationMovement();
	void CalculateReverseSteering();
	void StopVehicle();
	void CanMove(bool* CanMove);
	void UpdateEngineLoadSound(float* dt);
	void UpdateAccelerationSound();
	void UpdateThrottleState();
	void DidGearDown();
	void DidGearUp();
	void CheckCurrentGear();
	void StopSoundLoops();
	void StartSoundLoops();
	void ToggleFreeCamera();
	struct FText GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void OpenVehicleUI(class AFGCharacterPlayer** inCharacter);
	void PonderOpeningTrunk(class AFGCharacterPlayer** inCharacter);
	void UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState);
	void OnRep_mIsFollowingPath();
	void UpdateSpeedLimit(class ABP_VehicleTargetPoint_C** TargetPoint);
	void DoReverseToFreedom();
	void ReverseToFreedom();
	void CacheSpeedInKMH();
	void OnRep_mIsRecording();
	void MoveToLocation();
	void TickRecording(float* dt);
	void UpdateVehicleMovement();
	void StartRecording();
	void StopRecording();
	void GatherData();
	void RemoveOldTargets();
	void PlaceTargetPoint();
	void TargetReached();
	void SetNewPath(class ABP_VehicleTargetPoint_C** newTarget);
	void GetTargetDistance(float* Distance);
	void UpdateThrottle();
	void UpdateSteering();
	void InpActEvt_Use_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void TickVehicleSound(float* dt);
	void ServerToggleRecording();
	void ReceiveUnpossessed(class AController** OldController);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveDestroyed();
	void ResetImpactSound();
	void OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void Multicast_OpenTrunk();
	void Multicast_CloseTrunk();
	void ReceivePossessed(class AController** NewController);
	void ClientClearAIMovment();
	void StartAccelerating();
	void StopAccelerating();
	void UpdateCamera();
	void WasDocked(class AFGBuildableDockingStation** atStation);
	void ServerSetMenuOpen(bool* menuOpen);
	void ServerClearPathRecording();
	void WasUndocked();
	void ServerTogglePauseRecording();
	void ServerToggleAutoPilot();
	void ServerTogglePathVisibility();
	void Server_Leave();
	void ReceiveOnVehicleStartup();
	void ReceiveOnVehicleShutDown();
	void ReceiveOnDriverEnter();
	void ReceiveOnDriverLeave();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float* AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float* AxisValue);
	void Server_Honk();
	void Multicast_Honk();
	void Client_PlayFoliageDestroyedEffect(class UParticleSystem** destroyEffect, class UAkAudioEvent** destroyAudioEvent, struct FVector* Location);
	void OpenVehicleTrunk(class AFGCharacterPlayer** Player);
	void CloseVehicleTrunk(class AFGCharacterPlayer** Player);
	void SetActorRepresentationColor(struct FLinearColor* NewColor);
	void ExecuteUbergraph_BP_WheeledVehicle(int* EntryPoint);
	void OnStartRecording__DelegateSignature();
	void OnStopRecording__DelegateSignature();
	void LocationReached__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

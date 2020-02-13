#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Char_Player.Char_Player_C
// 0x0280 (0x0E00 - 0x0B80)
class AChar_Player_C : public AFGCharacterPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PPRadiationDamage;                                        // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      EmoteBuildGun;                                            // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HelmetMesh;                                               // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         FlashLight3P;                                             // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Flashlight_01;                                            // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FlashlightCone;                                           // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         FlashLight1P;                                             // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       TestPostProcess;                                          // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PPTakeDamage;                                             // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PPSpawnScanner;                                           // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        PlayerText;                                               // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventScrollDown;                                          // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventScroll;                                              // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventScrollUp;                                            // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventFire;                                                // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              mDeltaTime;                                               // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mDesiredDamageIndicator;                                  // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mDamageIndicatorSpeed;                                    // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mLowHealthIndicatorPower;                                 // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mCurrentDamageIndicator;                                  // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mMaxDamageIndicator;                                      // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mLastDamageTime;                                          // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mTargetCameraDistance;                                    // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mSavedCameraDistance;                                     // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mCameraDistanceMin;                                       // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mCameraDistanceMax;                                       // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mTransitionDelay;                                         // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     mTargetCameraOffset;                                      // 0x0C58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     mCameraOffset3P;                                          // 0x0C64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mDistanceInterpolationSpeed;                              // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mTargetCameraFOV;                                         // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mSavedCameraFOV;                                          // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mIsFocusing;                                              // 0x0C7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mMuteOnOff;                                               // 0x0C7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0C7E(0x0002) MISSED OFFSET
	float                                              mCameraDistanceDefault3P;                                 // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mCameraDistanceFocus3P;                                   // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mFocusInterpolationSpeed;                                 // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mDefaultCameraInterpolationSpeed;                         // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mDefaultFOV;                                              // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mFocusFOV;                                                // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mCameraDistanceMin3P;                                     // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mCameraDistanceMax3P;                                     // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mSprintNoiseInterval;                                     // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mTimeSprinting;                                           // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mPickupMontageSectionName;                                // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mPickupMontageSectionName3p;                              // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     mReviveWidget;                                            // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      mPlayerHUDClass;                                          // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mFlashlightOn;                                            // 0x0CC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               mWaitingForPlayerState;                                   // 0x0CC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0CCA(0x0006) MISSED OFFSET
	TArray<class ULevelSequence*>                      mSequences;                                               // 0x0CD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_InteractablesMarker_C*                   mInteractableMarker;                                      // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mMineSection;                                             // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFGCameraModifierLimitLook*                  mLookModifier;                                            // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDisabledInputGate                          mLandingInputGate;                                        // 0x0CF8(0x0002) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0CFA(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      mEmoteBuildgun;                                           // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                mEmoteTimer;                                              // 0x0D08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget_EmoteMenu_C*                         mEmoteMenu;                                               // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mPossessed;                                               // 0x0D18(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D19(0x0007) MISSED OFFSET
	struct FText                                       mMapText;                                                 // 0x0D20(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    mRadiationNoise;                                          // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mWarningPopupTimer;                                       // 0x0D40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               mPlaytimeWarningMessages;                                 // 0x0D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                mPlaytimeWarningMessageIndex;                             // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0D5C(0x0004) MISSED OFFSET
	class UCM_Slide_C*                                 mSlideCameraModifier;                                     // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mClearSlideVelocityTimer;                                 // 0x0D68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UStaticMeshComponent*                        mHypertube_VfxCap;                                        // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Hypertube_Vfx_Particle_02;                                // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Hypertube_Vfx_Particle_01;                                // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                mClearSlideSpeedWindTimer;                                // 0x0D88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              mCurrentSpeedWindTimer;                                   // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mLastSlideSurfaceType;                                    // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       mCurrentSlidingSurfaceType;                               // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mClearTubeTravelUpdateTimer;                              // 0x0DA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     mLastFrameForwardDirection;                               // 0x0DA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mLastFrameDirectionDegrees;                               // 0x0DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mClearSlideVFXTimer;                                      // 0x0DB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    Sliding_Particle;                                         // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mCurrentWindSpeed;                                        // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mVFX_Capsule_Opacity;                                     // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFGCharacterMovementComponent*               mFGCharacterMovementCompRef;                              // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mSwitchingPipes;                                          // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mLastFrameEndPosTube;                                     // 0x0DDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mLastFrameEndRotTube;                                     // 0x0DE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0DF4(0x0004) MISSED OFFSET
	class UAkComponent*                                mSFXFastJUnction;                                         // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Char_Player.Char_Player_C");
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
	struct FRotator GetRealActorRotation();
	bool AddAsRepresentation();
	bool GetActorShouldShowOnMap();
	struct FVector GetRealActorLocation();
	bool IsActorStatic();
	void TubeTravelHardCorners(float* CurveFloatValue);
	void AudioWindDirectionSpeedUpdate();
	void SlideVFX();
	void TubeTravelSpeedUpdate();
	void SlideSpeedWindUpdate();
	void SlideVelocityUpdate();
	void ToggleCodex();
	void ToggleInventory();
	void ToggleFlashlight();
	void RemovePlayerHUD(class AFGPlayerController** OldController);
	void SetupPlayerHUD(class AFGPlayerController** PlayerController);
	void HandleFlashlight();
	void UpdatePlayerTextVisibility();
	void GetHealthPct(float* healthPct);
	void UpdateDamageIndicator();
	void PlayDamageVO(class UDamageType** Damage_Type);
	void PlayDamageCameraShake();
	void ApplyDamagePP();
	void PlayImpactEffectSound(class UDamageType** DamageType);
	void CalculateOnscreenEffectBlendWeight(float* BlendWeight);
	void UpdateWindParticle();
	void TickSprintNoise();
	void GetPlayerCameraManager(class APlayerCameraManager** cameraManager);
	void FadeDamageIndicator();
	void TickPlayerNameText();
	void InpActEvt_OpenCodex_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_Flashlight_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_EmoteWheel_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_EmoteWheel_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_Inventory_K2Node_InputActionEvent_1(struct FKey* Key);
	void SetFirstPersonMode();
	void SetThirdPersonMode();
	void StartFocusAim();
	void StopFocusAim();
	void StartFreeRotate3P();
	void StopFreeRotate3P();
	void CameraZoomOut();
	void CameraZoomIn();
	void ReceiveDied();
	void PlayPickupEffects();
	void SnapSpringArmToDesiredLocation();
	void OnReviveComplete();
	void ClientSetupPlayerHUD(class AController** InController);
	void ReceiveUnpossessed(class AController** OldController);
	void OnReceiveRadiationStart();
	void OnReceiveRadiationStop();
	void Server_PlayClap();
	void Multicast_PlayClap();
	void Server_SetFlashlightOn(bool* FlashlightOn);
	void OnDisabledInputGateChanged(struct FDisabledInputGate* NewValue);
	void LimitLook(bool* doLimit);
	void StartCinematic();
	void EndCinematic();
	void DisableGravity();
	void CameraTick();
	void Server_PlaySpinEmote();
	void Multicast_PlatSpinEmote();
	void ClearEmoteMesh();
	void OnSpawnDeathMarker();
	void ShowEmote(int* EmoteIndex);
	void SkipIntro();
	void Server_playSignsEmote();
	void Multicast_PlaySignsEmote();
	void OnLanded(struct FHitResult* Hit);
	void ReceivePossessed(class AController** NewController);
	void StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void OnRadiationIntensityUpdated(float* radiationIntensity, float* radiationImmunity);
	void TickVisuals(float* dt);
	void ReceiveDestroyed();
	void OnSlideStartLocal();
	void OnSlideEndLocal();
	void TakeDamageEvent(class AActor** DamagedActor, float* damageAmount, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnSlideEndSimulated();
	void OnSlideStartSimulated();
	void PlayJumpEffects(bool* boostJump);
	void ReceiveBeginPlay();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void AudioTickEvent(float* AudioTick);
	void SetActorRepresentationColor(struct FLinearColor* NewColor);
	void ExecuteUbergraph_Char_Player(int* EntryPoint);
	void EventFire__DelegateSignature();
	void EventScroll__DelegateSignature(int* Index);
	void EventScrollDown__DelegateSignature();
	void EventScrollUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

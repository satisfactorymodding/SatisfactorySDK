#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipeHyperStart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PipeHyperStart.Build_PipeHyperStart_C
// 0x0090 (0x0730 - 0x06A0)
class ABuild_PipeHyperStart_C : public AFGPipeHyperStart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TurbineEnd;                                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TurbineFront;                                             // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            OverlapSphere;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerInput;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponentHyper_C*           PipeHyperStartConnection;                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InterpolateEngineSound_InterpolateEngineAlpha_064FA8194B7224F6F187999413D1C8A6;// 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InterpolateEngineSound__Direction_064FA8194B7224F6F187999413D1C8A6;// 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InterpolateEngineSound;                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                mWindDirectionFromTurbine;                                // 0x06F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               mIsWindSoundPlaying_;                                     // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              mAudioTimerCounter;                                       // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                AudioCounterTimer;                                        // 0x0708(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    P_Entrance_VFX;                                           // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsEnginePlaying;                                          // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0719(0x0007) MISSED OFFSET
	class UAkComponent*                                mStartUpHyperTubeRef;                                     // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkComponent*                                SFXEngine;                                                // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipeHyperStart.Build_PipeHyperStart_C");
		return ptr;
	}


	bool CanProduce();
	void UserConstructionScript();
	void InterpolateEngineSound__FinishedFunc();
	void InterpolateEngineSound__UpdateFunc();
	void OnHasPowerChanged(bool* newHasPower);
	void GainedSignificance();
	void LostSignificance();
	void StartUpHypertube();
	void StopHyperTube();
	void StartEngineSoundTimelineEvent();
	void EndEngineSoundTimelineEvent();
	void ReceiveBeginPlay();
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void PlayConstructSound_2();
	void OnIsProducingChanged(bool* newIsProducing);
	void StartProductionLoopEffects(bool* didStartProducing);
	void StopProductionLoopEffects(bool* didStopProducing);
	void PlayOnSi();
	void ExecuteUbergraph_Build_PipeHyperStart(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

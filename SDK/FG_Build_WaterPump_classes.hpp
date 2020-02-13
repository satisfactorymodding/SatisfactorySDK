#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_WaterPump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_WaterPump.Build_WaterPump_C
// 0x00C8 (0x07C0 - 0x06F8)
class ABuild_WaterPump_C : public AFGBuildableResourceExtractor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             PumpSound;                                                // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionFactory*                    FGPipeConnectionFactory;                                  // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection;                                          // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent1;                                      // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent;                                       // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Snap;                                                     // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh;                                                 // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mWaterpumpTimeline_RTPC_B8FA6F944E717E3B7A286E84901F620E; // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    mWaterpumpTimeline__Direction_B8FA6F944E717E3B7A286E84901F620E;// 0x075C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          mWaterpumpTimeline;                                       // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PlayPitchAndVolumeRTPCTimeline_RTPC_2B435F41466C37D2AD809A88AA21BA89;// 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PlayPitchAndVolumeRTPCTimeline__Direction_2B435F41466C37D2AD809A88AA21BA89;// 0x076C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x076D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PlayPitchAndVolumeRTPCTimeline;                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mAudioTimerCounter;                                       // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mAudioTimerMS;                                            // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mAudioTimerReference;                                     // 0x0780(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    P_WaterEngineTurbulence;                                  // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WaterPump_Production;                                   // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WaterPump_Chimney;                                      // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WaterPump_Waves;                                        // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mAudioTimelineCounter;                                    // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLostSignificance;                                      // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	class UAkComponent*                                SFXWaterPumpUnderwaterTurbine;                            // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkComponent*                                mSFXWaterPumpEngine;                                      // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_WaterPump.Build_WaterPump_C");
		return ptr;
	}


	void GetPlayRate(float* PlayRate);
	void mAudioTimer();
	void SetText(class FString* intText);
	void PlayPitchAndVolumeRTPCTimeline__FinishedFunc();
	void PlayPitchAndVolumeRTPCTimeline__UpdateFunc();
	void mWaterpumpTimeline__FinishedFunc();
	void mWaterpumpTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void StopProductionLoopEffects(bool* didStopProducing);
	void PlayProducingSounds();
	void StartProductionLoopEffects(bool* didStartProducing);
	void StartVFXIteration();
	void OnIsProducingChanged(bool* newIsProducing);
	void GainedSignificance();
	void LostSignificance();
	void Start_VFX_Loop();
	void Stop_VFX_Loop();
	void ExecuteUbergraph_Build_WaterPump(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

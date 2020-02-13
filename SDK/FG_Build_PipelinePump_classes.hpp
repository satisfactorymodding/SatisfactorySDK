#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipelinePump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PipelinePump.Build_PipelinePump_C
// 0x0090 (0x0788 - 0x06F8)
class ABuild_PipelinePump_C : public AFGBuildablePipelinePump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Snap;                                                     // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_PowerPoleWall_MK1;                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerInput;                                               // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponent*                  Connection1;                                              // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponent*                  Connection0;                                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMesh;                                    // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mat;                                                      // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mLastFlowUpdate;                                          // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mUpdateFlowTime;                                          // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mAnimSpeed;                                               // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mLastFlowValue;                                           // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mTimeScaleOffset;                                         // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	class UAkComponent*                                mPlayPumpPistons01;                                       // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkComponent*                                mPlayPumpEngine;                                          // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                mPistonAudioTimer;                                        // 0x0770(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               mIsPlayingPistons;                                        // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	class UAkComponent*                                mPlayPumpPistons02;                                       // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipelinePump.Build_PipelinePump_C");
		return ptr;
	}


	void PlayPistonSound();
	void OnPumpStopped();
	void Factory_ReceiveStopProducing();
	void OnHasPowerChanged(bool* newHasPower);
	void StopIsLookedAtForDismantle(class AFGCharacterPlayer** byCharacter);
	void LostSignificance();
	void GainedSignificance();
	void BuildEffectFinishedEvent();
	void PlayProductionAudioChain();
	void StopProductionAudioChain();
	void FluidDescriptorSetNotify(class UClass** fluidDesc);
	void ReceiveBeginPlay();
	void PlayEngineAudioChain();
	void StopEngineAudioChain();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Build_PipelinePump(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

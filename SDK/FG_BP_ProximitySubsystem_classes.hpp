#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ProximitySubsystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProximitySubsystem.BP_ProximitySubsystem_C
// 0x0094 (0x03FC - 0x0368)
class ABP_ProximitySubsystem_C : public AFGProximitySubsystem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OcclusionInterpAlpha_OcclusionAlpha_393DB8FF4199240D3BAF62908831E857;// 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OcclusionInterpAlpha__Direction_393DB8FF4199240D3BAF62908831E857;// 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OcclusionInterpAlpha;                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mCurrentAreaParticle;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mCurrentWindSpeed;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsOccluded;                                              // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	TArray<class UClass*>                              mWindAreas;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                mWindOcclusionTimer;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsInDesertDune;                                           // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class APostProcessVolume*                          mGlobalPostProcess;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           mHeatHaze_Mat;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           mPPI_OutlineColored;                                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mNumberOfWindOcclusionTraces;                             // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mWindOcclusionTraceDistance;                              // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mWindOcclusionTraceSpread;                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WindSideDir;                                              // 0x03DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WindDir;                                                  // 0x03E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mOcclusionValuePerTrace;                                  // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetOcclusionValue;                                        // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProximitySubsystem.BP_ProximitySubsystem_C");
		return ptr;
	}


	void SetupMapAreaEffect(class UClass** newArea);
	void OcclusionInterpAlpha__FinishedFunc();
	void OcclusionInterpAlpha__UpdateFunc();
	void SetWindSpeedEvent();
	void VirtualWindSystemEvent();
	void UpdateWindTimer();
	void WindOcclusionEvent();
	void WindOcclusionTimer();
	void Ambient();
	void ReceiveBeginPlay();
	void OnEnteredMapArea(class UClass** newArea);
	void OnPawnChanged(class APawn** newPawn);
	void CalculateWindOcclusionEvent();
	void ExecuteUbergraph_BP_ProximitySubsystem(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

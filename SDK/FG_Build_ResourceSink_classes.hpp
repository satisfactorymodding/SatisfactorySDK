#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ResourceSink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_ResourceSink.Build_ResourceSink_C
// 0x00A8 (0x0738 - 0x0690)
class ABuild_ResourceSink_C : public AFGBuildableResourceSink
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Clearance;                                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GrinderSFXRef;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_ResourceSink;                                          // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Snap;                                                     // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 FGPowerConnection;                                        // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent1;                                      // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent;                                       // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh;                                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Input0;                                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SFXEngineTimeline_EngineAlpha_073E1D2A4BAD246B3958E183E210FAAE;// 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SFXEngineTimeline__Direction_073E1D2A4BAD246B3958E183E210FAAE;// 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SFXEngineTimeline;                                        // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VFX_SFX_Timeline_EngineAlpha_A2CB706E440839665A39888572D206AA;// 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VFX_SFX_Timeline__Direction_A2CB706E440839665A39888572D206AA;// 0x06FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SFX_Timeline;                                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mP_Production_VFX;                                        // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    VFX_Material;                                             // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkComponent*                                SFX_ResourceSinkEngine;                                   // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkComponent*                                SFX_ResourceSinkGrinder;                                  // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               HastLostSignificance;                                     // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	class UAkComponent*                                SFX_ResourceSinkDebris;                                   // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_ResourceSink.Build_ResourceSink_C");
		return ptr;
	}


	void SFX_Timeline__FinishedFunc();
	void SFX_Timeline__UpdateFunc();
	void SFXEngineTimeline__FinishedFunc();
	void SFXEngineTimeline__UpdateFunc();
	void GainedSignificance();
	void LostSignificance();
	void OnHasPowerChanged(bool* newHasPower);
	void ReceiveBeginPlay();
	void StartProductionLoopEffects(bool* didStartProducing);
	void StopProductionLoopEffects(bool* didStopProducing);
	void ReceiveDestroyed();
	void StartSFXEngineOnPower(bool* didGainPower);
	void StopSFXEngineOnPower(bool* didLosePower);
	void StartIdlingLoopEffects(bool* didGainPower);
	void StopIdlingLoopEffects(bool* didLosePower);
	void ExecuteUbergraph_Build_ResourceSink(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

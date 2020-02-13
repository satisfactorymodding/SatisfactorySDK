#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_GeneratorIntegratedBiomass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C
// 0x004C (0x074C - 0x0700)
class ABuild_GeneratorIntegratedBiomass_C : public AFGBuildableGeneratorFuel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh_skl;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection;                                          // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mFunnelVfx;                                               // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBioGenVfx01;                                             // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBioGenVfx02;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mCachedLoadPercentage;                                    // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C");
		return ptr;
	}


	bool CanDismantle();
	void GainedSignificance();
	void StartProductionLoopEffects(bool* didStartProducing);
	void StopProductionLoopEffects(bool* didStopProducing);
	void LostSignificance();
	void ReceiveUpdateEffects(float* DeltaSeconds);
	void ExecuteUbergraph_Build_GeneratorIntegratedBiomass(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

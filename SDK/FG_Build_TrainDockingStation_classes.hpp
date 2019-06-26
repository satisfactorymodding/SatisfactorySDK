#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainDockingStation_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_TrainDockingStation.Build_TrainDockingStation_C
// 0x0060 (0x0770 - 0x0710)
class ABuild_TrainDockingStation_C : public AFGBuildableTrainPlatformCargo
{
public:
	class UFGFactoryConnectionComponent*               Input1;                                                   // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Output1;                                                  // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Freight_Cargo;                                         // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 FGPowerConnection;                                        // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh_skl;                                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh;                                                 // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Output0;                                                  // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Input0;                                                   // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DockingVolume;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              mPotentialDockers;                                        // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_TrainDockingStation.Build_TrainDockingStation_C");
		return ptr;
	}


	void IsMoving(class AActor* Actor, bool* IsMoving);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

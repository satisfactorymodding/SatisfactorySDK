#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainStation_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_TrainStation.Build_TrainStation_C
// 0x0030 (0x0738 - 0x0708)
class ABuild_TrainStation_C : public AFGBuildableRailroadStation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Clearance;                                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection;                                          // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Name;                                                     // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TrainStation;                                             // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        S;                                                        // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_TrainStation.Build_TrainStation_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnNameChanged();
	void ExecuteUbergraph_Build_TrainStation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

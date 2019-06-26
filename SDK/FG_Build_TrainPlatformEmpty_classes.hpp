#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainPlatformEmpty_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_TrainPlatformEmpty.Build_TrainPlatformEmpty_C
// 0x0010 (0x06A8 - 0x0698)
class ABuild_TrainPlatformEmpty_C : public AFGBuildableTrainPlatformEmpty
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_TrainPlatformEmpty.Build_TrainPlatformEmpty_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

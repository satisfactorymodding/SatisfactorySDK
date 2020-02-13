#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_WheeledVehicle4W_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WheeledVehicle4W.BP_WheeledVehicle4W_C
// 0x000C (0x0930 - 0x0924)
class ABP_WheeledVehicle4W_C : public ABP_WheeledVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UFGWheeledVehicleMovementComponent4W*        FGWheeledVehicleMovementComponent4W;                      // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WheeledVehicle4W.BP_WheeledVehicle4W_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

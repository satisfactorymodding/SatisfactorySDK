#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_RailroadSubsystem_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailroadSubsystem.BP_RailroadSubsystem_C
// 0x0000 (0x03D8 - 0x03D8)
class ABP_RailroadSubsystem_C : public AFGRailroadSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailroadSubsystem.BP_RailroadSubsystem_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

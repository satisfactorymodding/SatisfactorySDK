#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_WaterPostProcess_Pond_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterPostProcess_Pond.BP_WaterPostProcess_Pond_C
// 0x0000 (0x0570 - 0x0570)
class UBP_WaterPostProcess_Pond_C : public UFGSharedPostProcessSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterPostProcess_Pond.BP_WaterPostProcess_Pond_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

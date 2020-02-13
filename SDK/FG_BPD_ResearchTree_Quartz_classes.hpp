#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPD_ResearchTree_Quartz_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPD_ResearchTree_Quartz.BPD_ResearchTree_Quartz_C
// 0x0000 (0x0150 - 0x0150)
class UBPD_ResearchTree_Quartz_C : public UFGResearchTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_ResearchTree_Quartz.BPD_ResearchTree_Quartz_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

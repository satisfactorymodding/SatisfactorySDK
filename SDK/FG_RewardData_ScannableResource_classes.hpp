#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_RewardData_ScannableResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RewardData_ScannableResource.RewardData_ScannableResource_C
// 0x0000 (0x0048 - 0x0048)
class URewardData_ScannableResource_C : public UFGStingerWidgetRewardData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RewardData_ScannableResource.RewardData_ScannableResource_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

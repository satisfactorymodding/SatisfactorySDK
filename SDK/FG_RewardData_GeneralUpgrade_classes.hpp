#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_RewardData_GeneralUpgrade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RewardData_GeneralUpgrade.RewardData_GeneralUpgrade_C
// 0x0000 (0x0048 - 0x0048)
class URewardData_GeneralUpgrade_C : public UFGStingerWidgetRewardData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RewardData_GeneralUpgrade.RewardData_GeneralUpgrade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_ResourceSink_WallPowerPolesMK2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ResourceSink_WallPowerPolesMK2.ResourceSink_WallPowerPolesMK2_C
// 0x0000 (0x0148 - 0x0148)
class UResourceSink_WallPowerPolesMK2_C : public UFGSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceSink_WallPowerPolesMK2.ResourceSink_WallPowerPolesMK2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
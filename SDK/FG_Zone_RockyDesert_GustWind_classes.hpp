#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Zone_RockyDesert_GustWind_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zone_RockyDesert_GustWind.Zone_RockyDesert_GustWind_C
// 0x0000 (0x0050 - 0x0050)
class UZone_RockyDesert_GustWind_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zone_RockyDesert_GustWind.Zone_RockyDesert_GustWind_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

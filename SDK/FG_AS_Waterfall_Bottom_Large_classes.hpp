#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_AS_Waterfall_Bottom_Large_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AS_Waterfall_Bottom_Large.AS_Waterfall_Bottom_Large_C
// 0x0000 (0x0050 - 0x0050)
class UAS_Waterfall_Bottom_Large_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AS_Waterfall_Bottom_Large.AS_Waterfall_Bottom_Large_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

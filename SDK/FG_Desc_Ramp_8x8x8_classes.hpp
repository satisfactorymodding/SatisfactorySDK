#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_Ramp_8x8x8_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_Ramp_8x8x8.Desc_Ramp_8x8x8_C
// 0x0000 (0x0170 - 0x0170)
class UDesc_Ramp_8x8x8_C : public UFGBuildingDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Ramp_8x8x8.Desc_Ramp_8x8x8_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

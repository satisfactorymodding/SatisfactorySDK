#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_Wall_Door_8x4_02_Steel_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_Wall_Door_8x4_02_Steel.Desc_Wall_Door_8x4_02_Steel_C
// 0x0000 (0x0150 - 0x0150)
class UDesc_Wall_Door_8x4_02_Steel_C : public UFGBuildingDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Wall_Door_8x4_02_Steel.Desc_Wall_Door_8x4_02_Steel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PowerPoleWall_Mk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PowerPoleWall_Mk2.Build_PowerPoleWall_Mk2_C
// 0x0000 (0x0578 - 0x0578)
class ABuild_PowerPoleWall_Mk2_C : public ABuild_PowerPoleWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PowerPoleWall_Mk2.Build_PowerPoleWall_Mk2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_SpaceElevatorBlocker_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_SpaceElevatorBlocker.Desc_SpaceElevatorBlocker_C
// 0x0000 (0x0128 - 0x0128)
class UDesc_SpaceElevatorBlocker_C : public UFGItemDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_SpaceElevatorBlocker.Desc_SpaceElevatorBlocker_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Schematic_Alternate_HighSpeedWiring_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Schematic_Alternate_HighSpeedWiring.Schematic_Alternate_HighSpeedWiring_C
// 0x0000 (0x0148 - 0x0148)
class USchematic_Alternate_HighSpeedWiring_C : public UFGSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_Alternate_HighSpeedWiring.Schematic_Alternate_HighSpeedWiring_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

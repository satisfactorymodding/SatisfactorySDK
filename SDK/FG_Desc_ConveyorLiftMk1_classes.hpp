#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_ConveyorLiftMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_ConveyorLiftMk1.Desc_ConveyorLiftMk1_C
// 0x0000 (0x0170 - 0x0170)
class UDesc_ConveyorLiftMk1_C : public UFGBuildingDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_ConveyorLiftMk1.Desc_ConveyorLiftMk1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

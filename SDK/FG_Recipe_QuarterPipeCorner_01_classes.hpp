#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Recipe_QuarterPipeCorner_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Recipe_QuarterPipeCorner_01.Recipe_QuarterPipeCorner_01_C
// 0x0000 (0x0088 - 0x0088)
class URecipe_QuarterPipeCorner_01_C : public UFGRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_QuarterPipeCorner_01.Recipe_QuarterPipeCorner_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Recipe_Alternate_PureQuartzCrystal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Recipe_Alternate_PureQuartzCrystal.Recipe_Alternate_PureQuartzCrystal_C
// 0x0000 (0x0088 - 0x0088)
class URecipe_Alternate_PureQuartzCrystal_C : public UFGRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_Alternate_PureQuartzCrystal.Recipe_Alternate_PureQuartzCrystal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
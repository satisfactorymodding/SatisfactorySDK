#pragma once

// Satisfactory SDK (V0.1.13 - Build 99427)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_ResearchRecipe_Fabric_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ResearchRecipe_Fabric.ResearchRecipe_Fabric_C
// 0x0000 (0x00E8 - 0x00E8)
class UResearchRecipe_Fabric_C : public UFGResearchRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResearchRecipe_Fabric.ResearchRecipe_Fabric_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_SC_RSS_Pioneering_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_RSS_Pioneering.SC_RSS_Pioneering_C
// 0x0000 (0x00C8 - 0x00C8)
class USC_RSS_Pioneering_C : public UFGSchematicCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_RSS_Pioneering.SC_RSS_Pioneering_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

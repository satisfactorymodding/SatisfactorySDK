#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_GoldenNut_Statue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_GoldenNut_Statue.Desc_GoldenNut_Statue_C
// 0x0000 (0x0180 - 0x0180)
class UDesc_GoldenNut_Statue_C : public UFGDecorationDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_GoldenNut_Statue.Desc_GoldenNut_Statue_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

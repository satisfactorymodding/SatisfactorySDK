#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_HeavyOilResidue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_HeavyOilResidue.Desc_HeavyOilResidue_C
// 0x0000 (0x0148 - 0x0148)
class UDesc_HeavyOilResidue_C : public UFGItemDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_HeavyOilResidue.Desc_HeavyOilResidue_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
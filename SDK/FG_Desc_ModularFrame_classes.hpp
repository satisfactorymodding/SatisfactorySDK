#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Desc_ModularFrame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_ModularFrame.Desc_ModularFrame_C
// 0x0000 (0x0130 - 0x0130)
class UDesc_ModularFrame_C : public UFGItemDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_ModularFrame.Desc_ModularFrame_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

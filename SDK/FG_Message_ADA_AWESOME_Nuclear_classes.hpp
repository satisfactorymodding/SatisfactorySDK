#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Message_ADA_AWESOME_Nuclear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Message_ADA_AWESOME_Nuclear.Message_ADA_AWESOME_Nuclear_C
// 0x0000 (0x0328 - 0x0328)
class UMessage_ADA_AWESOME_Nuclear_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_ADA_AWESOME_Nuclear.Message_ADA_AWESOME_Nuclear_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
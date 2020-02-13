#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPFL_HudHelperBadRef_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFL_HudHelperBadRef.BPFL_HudHelperBadRef_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_HudHelperBadRef_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_HudHelperBadRef.BPFL_HudHelperBadRef_C");
		return ptr;
	}


	void STATIC_GetBPHUD(class AController** Controller, class UObject** __WorldContext, class ABP_HUD_C** outHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

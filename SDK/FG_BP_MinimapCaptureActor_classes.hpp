#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_MinimapCaptureActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MinimapCaptureActor.BP_MinimapCaptureActor_C
// 0x0000 (0x0350 - 0x0350)
class ABP_MinimapCaptureActor_C : public AFGMinimapCaptureActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MinimapCaptureActor.BP_MinimapCaptureActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

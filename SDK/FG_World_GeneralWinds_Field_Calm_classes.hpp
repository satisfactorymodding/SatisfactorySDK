#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_World_GeneralWinds_Field_Calm_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass World_GeneralWinds_Field_Calm.World_GeneralWinds_Field_Calm_C
// 0x0000 (0x0050 - 0x0050)
class UWorld_GeneralWinds_Field_Calm_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass World_GeneralWinds_Field_Calm.World_GeneralWinds_Field_Calm_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

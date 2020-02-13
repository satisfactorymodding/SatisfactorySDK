#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Holo_Pipeline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Holo_Pipeline.Holo_Pipeline_C
// 0x0010 (0x04F0 - 0x04E0)
class AHolo_Pipeline_C : public AFGPipelineHologram
{
public:
	TArray<EHologramSplinePathMode>                    mSupportedSplineModes;                                    // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Holo_Pipeline.Holo_Pipeline_C");
		return ptr;
	}


	void GetSupportedSplineModes(TArray<EHologramSplinePathMode>* out_splineModes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

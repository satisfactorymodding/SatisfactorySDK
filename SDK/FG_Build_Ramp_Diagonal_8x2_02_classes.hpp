#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_Ramp_Diagonal_8x2_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_Ramp_Diagonal_8x2_02.Build_Ramp_Diagonal_8x2_02_C
// 0x0008 (0x0588 - 0x0580)
class ABuild_Ramp_Diagonal_8x2_02_C : public AFGBuildableFoundation
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_Ramp_Diagonal_8x2_02.Build_Ramp_Diagonal_8x2_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

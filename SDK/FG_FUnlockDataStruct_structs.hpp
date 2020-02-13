#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FUnlockDataStruct.FUnlockDataStruct
// 0x0030
struct FFUnlockDataStruct
{
	struct FText                                       UnlockName_2_490383D6421D4A92D86E1F835769488A;            // 0x0000(0x0028) (Edit, BlueprintVisible)
	class UTexture2D*                                  UnlockIcon_9_3E3B124C41C68907A6EB9FAD36C04BC4;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnlockAmount_13_F32234CC46ECA4C99973A28AA05BE30E;         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnlockStructIndex_34_716E881C402D058998F7CDA17E1E4BF2;    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFGUnlock*                                   Unlock_29_06E6D017481991B0E94072A4F21FCC03;               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

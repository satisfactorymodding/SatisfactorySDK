#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ItemPickedUpDependency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ItemPickedUpDependency.BP_ItemPickedUpDependency_C
// 0x0000 (0x0040 - 0x0040)
class UBP_ItemPickedUpDependency_C : public UFGItemPickedUpDependency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemPickedUpDependency.BP_ItemPickedUpDependency_C");
		return ptr;
	}


	void GetDependecyData(TArray<struct FFAvailabilityDependencyData>* DependecyData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

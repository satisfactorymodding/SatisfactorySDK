#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPI_AvailabilityDependencyInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_AvailabilityDependencyInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C");
		return ptr;
	}


	void GetDependecyData(TArray<struct FFAvailabilityDependencyData>* DependecyData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

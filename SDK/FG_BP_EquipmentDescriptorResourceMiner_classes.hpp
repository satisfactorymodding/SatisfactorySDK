#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_EquipmentDescriptorResourceMiner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EquipmentDescriptorResourceMiner.BP_EquipmentDescriptorResourceMiner_C
// 0x0000 (0x0150 - 0x0150)
class UBP_EquipmentDescriptorResourceMiner_C : public UFGEquipmentDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquipmentDescriptorResourceMiner.BP_EquipmentDescriptorResourceMiner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
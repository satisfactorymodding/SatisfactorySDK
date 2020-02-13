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

// UserDefinedStruct OutputCostSlotData_Struct.OutputCostSlotData_Struct
// 0x0028
struct FOutputCostSlotData_Struct
{
	struct FText                                       Title_3_16865392480E04744923368E818FDF9E;                 // 0x0000(0x0028) (Edit, BlueprintVisible)
	class UFGInventoryComponent*                       InventoryComponent_6_670B318B4DE9249E98B040BFD46013A9;    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InventorySlotIndex_10_ECF91A0C4E759F6F2FC3768CE0512AB9;   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RequiredAmount_14_830FF83949DA2C4550D4DFADE26300D5;       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

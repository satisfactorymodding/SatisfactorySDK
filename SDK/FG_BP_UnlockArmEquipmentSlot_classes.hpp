#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockArmEquipmentSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C
// 0x0000 (0x0030 - 0x0030)
class UBP_UnlockArmEquipmentSlot_C : public UFGUnlockArmEquipmentSlot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C");
		return ptr;
	}


	void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
	void GetStingerWidgetRewardData();
	void GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

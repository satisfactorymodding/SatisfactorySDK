#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockInventorySlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockInventorySlot.BP_UnlockInventorySlot_C
// 0x0000 (0x0030 - 0x0030)
class UBP_UnlockInventorySlot_C : public UFGUnlockInventorySlot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockInventorySlot.BP_UnlockInventorySlot_C");
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

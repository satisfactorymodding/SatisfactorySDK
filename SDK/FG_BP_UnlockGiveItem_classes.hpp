#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockGiveItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockGiveItem.BP_UnlockGiveItem_C
// 0x0000 (0x0038 - 0x0038)
class UBP_UnlockGiveItem_C : public UFGUnlockGiveItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockGiveItem.BP_UnlockGiveItem_C");
		return ptr;
	}


	void GetStingerWidgetRewardData();
	void GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets);
	void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
	bool IsRepeatPurchasesAllowed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

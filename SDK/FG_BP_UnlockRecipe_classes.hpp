#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockRecipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockRecipe.BP_UnlockRecipe_C
// 0x0000 (0x0038 - 0x0038)
class UBP_UnlockRecipe_C : public UFGUnlockRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockRecipe.BP_UnlockRecipe_C");
		return ptr;
	}


	void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
	void GetStingerWidgetRewardData();
	void GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets);
	void GetRewardTypeFromItemDescriptor(class UClass** ItemDescriptorClass, class UClass** RewardData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

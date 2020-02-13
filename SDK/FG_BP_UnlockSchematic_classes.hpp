#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockSchematic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockSchematic.BP_UnlockSchematic_C
// 0x0000 (0x0038 - 0x0038)
class UBP_UnlockSchematic_C : public UFGUnlockSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockSchematic.BP_UnlockSchematic_C");
		return ptr;
	}


	void GetStingerWidgetRewardData();
	void GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets);
	void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

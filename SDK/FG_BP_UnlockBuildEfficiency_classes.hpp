#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockBuildEfficiency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockBuildEfficiency.BP_UnlockBuildEfficiency_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UnlockBuildEfficiency_C : public UFGUnlockBuildEfficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockBuildEfficiency.BP_UnlockBuildEfficiency_C");
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

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockScannableResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnlockScannableResource.BP_UnlockScannableResource_C
// 0x0000 (0x0038 - 0x0038)
class UBP_UnlockScannableResource_C : public UFGUnlockScannableResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockScannableResource.BP_UnlockScannableResource_C");
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

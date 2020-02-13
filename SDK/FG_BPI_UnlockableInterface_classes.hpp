#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPI_UnlockableInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_UnlockableInterface.BPI_UnlockableInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_UnlockableInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_UnlockableInterface.BPI_UnlockableInterface_C");
		return ptr;
	}


	void GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
	void GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets);
	void GetStingerWidgetRewardData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

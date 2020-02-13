#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_RewardMap.Widget_RewardMap_C
// 0x0090 (0x03E8 - 0x0358)
class UWidget_RewardMap_C : public UWidget_SchematicRewardItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSlateBrush                                 mMapBrush;                                                // 0x0360(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RewardMap.Widget_RewardMap_C");
		return ptr;
	}


	struct FText GetName();
	struct FSlateBrush GetIcon();
	void IsValidRewardItem(bool* IsValid);
	void Construct();
	void ExecuteUbergraph_Widget_RewardMap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

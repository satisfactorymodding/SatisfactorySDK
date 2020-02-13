#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardBuildingOverclock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C
// 0x0090 (0x03E8 - 0x0358)
class UWidget_RewardBuildingOverclock_C : public UWidget_SchematicRewardItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSlateBrush                                 mOverclockBrush;                                          // 0x0360(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C");
		return ptr;
	}


	void IsValidRewardItem(bool* IsValid);
	struct FText GetName();
	struct FSlateBrush GetIcon();
	void Construct();
	void ExecuteUbergraph_Widget_RewardBuildingOverclock(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

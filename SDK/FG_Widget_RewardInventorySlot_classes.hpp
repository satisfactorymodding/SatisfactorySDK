#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardInventorySlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_RewardInventorySlot.Widget_RewardInventorySlot_C
// 0x0090 (0x03E8 - 0x0358)
class UWidget_RewardInventorySlot_C : public UWidget_SchematicRewardItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSlateBrush                                 mInventorySlotBrush;                                      // 0x0360(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RewardInventorySlot.Widget_RewardInventorySlot_C");
		return ptr;
	}


	void IsValidRewardItem(bool* IsValid);
	void Construct();
	void ExecuteUbergraph_Widget_RewardInventorySlot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

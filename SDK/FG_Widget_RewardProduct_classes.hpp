#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardProduct_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_RewardProduct.Widget_RewardProduct_C
// 0x0020 (0x0378 - 0x0358)
class UWidget_RewardProduct_C : public UWidget_SchematicRewardItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTexture*                                    mForcedCategoryIcon;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAmount>                         mProducts;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RewardProduct.Widget_RewardProduct_C");
		return ptr;
	}


	void GetFirstProductItemClass(class UClass** ItemClass);
	void IsValidRewardItem(bool* IsValid);
	struct FText GetName();
	struct FSlateBrush GetIcon();
	void Construct();
	void ExecuteUbergraph_Widget_RewardProduct(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

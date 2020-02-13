#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_Road_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MAMTree_Road.Widget_MAMTree_Road_C
// 0x0058 (0x0288 - 0x0230)
class UWidget_MAMTree_Road_C : public UUserWidget
{
public:
	struct FLinearColor                                mHighlightTint;                                           // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                mDefaultTint;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mThickness;                                               // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           mTempRoad;                                                // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMAMTree_Vector2D_Array>             mConvertedRoadData;                                       // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMAMTree_Vector2D_Array>             mHighlightedRoadData;                                     // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MAMTree_Road.Widget_MAMTree_Road_C");
		return ptr;
	}


	void OnPaint(struct FPaintContext* Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

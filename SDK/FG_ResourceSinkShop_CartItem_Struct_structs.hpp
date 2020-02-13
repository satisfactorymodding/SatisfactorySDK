#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ResourceSinkShop_CartItem_Struct.ResourceSinkShop_CartItem_Struct
// 0x000D
struct FResourceSinkShop_CartItem_Struct
{
	class UClass*                                      mSchematic_2_F254EA0E48CE5A1D4DAD3296BA94D668;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mCartItemAmount_6_93629BD24F75478DFED5F086C5732798;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mIsAddedToWishlist_9_29588D2B45D70D08A8074F8ACB4F5B3A;    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

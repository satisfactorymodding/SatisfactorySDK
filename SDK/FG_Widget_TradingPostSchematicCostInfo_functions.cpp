// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TradingPostSchematicCostInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TradingPostSchematicCostInfo.Widget_TradingPostSchematicCostInfo_C.UpdateSchematicCosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TradingPostSchematicCostInfo_C::UpdateSchematicCosts(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TradingPostSchematicCostInfo.Widget_TradingPostSchematicCostInfo_C.UpdateSchematicCosts");

	UWidget_TradingPostSchematicCostInfo_C_UpdateSchematicCosts_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_InventoryDragNDropRep_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InventoryDragNDropRep_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Construct");

	UWidget_InventoryDragNDropRep_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InventoryDragNDropRep_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Destruct");

	UWidget_InventoryDragNDropRep_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.ExecuteUbergraph_Widget_InventoryDragNDropRep
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_InventoryDragNDropRep_C::ExecuteUbergraph_Widget_InventoryDragNDropRep(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.ExecuteUbergraph_Widget_InventoryDragNDropRep");

	UWidget_InventoryDragNDropRep_C_ExecuteUbergraph_Widget_InventoryDragNDropRep_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SchematicList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SchematicList.Widget_SchematicList_C.GetTradingPostWidget
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWidget_SchematicList_C::GetTradingPostWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicList.Widget_SchematicList_C.GetTradingPostWidget");

	UWidget_SchematicList_C_GetTradingPostWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicList.Widget_SchematicList_C.PopulateSchematicForTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           inTier                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          schematicsInRing               (Parm, OutParm, ZeroConstructor)

void UWidget_SchematicList_C::PopulateSchematicForTier(int* inTier, TArray<class UClass*>* schematicsInRing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicList.Widget_SchematicList_C.PopulateSchematicForTier");

	UWidget_SchematicList_C_PopulateSchematicForTier_Params params;
	params.inTier = inTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (schematicsInRing != nullptr)
		*schematicsInRing = params.schematicsInRing;
}


// Function Widget_SchematicList.Widget_SchematicList_C.CreateSchematicButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_SchematicList_C::CreateSchematicButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicList.Widget_SchematicList_C.CreateSchematicButtons");

	UWidget_SchematicList_C_CreateSchematicButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicList.Widget_SchematicList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SchematicList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicList.Widget_SchematicList_C.Construct");

	UWidget_SchematicList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicList.Widget_SchematicList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SchematicList_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicList.Widget_SchematicList_C.Destruct");

	UWidget_SchematicList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicList.Widget_SchematicList_C.ExecuteUbergraph_Widget_SchematicList
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SchematicList_C::ExecuteUbergraph_Widget_SchematicList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicList.Widget_SchematicList_C.ExecuteUbergraph_Widget_SchematicList");

	UWidget_SchematicList_C_ExecuteUbergraph_Widget_SchematicList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

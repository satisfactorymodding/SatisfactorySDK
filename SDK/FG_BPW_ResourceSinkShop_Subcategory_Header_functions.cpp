// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_Subcategory_Header_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.GetResourceShopSubcategoryName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematicSubcategory          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_Subcategory_Header_C::GetResourceShopSubcategoryName(class UClass** mSchematicSubcategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.GetResourceShopSubcategoryName");

	UBPW_ResourceSinkShop_Subcategory_Header_C_GetResourceShopSubcategoryName_Params params;
	params.mSchematicSubcategory = mSchematicSubcategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkShop_Subcategory_Header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.Construct");

	UBPW_ResourceSinkShop_Subcategory_Header_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_Subcategory_Header_C::ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header");

	UBPW_ResourceSinkShop_Subcategory_Header_C_ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

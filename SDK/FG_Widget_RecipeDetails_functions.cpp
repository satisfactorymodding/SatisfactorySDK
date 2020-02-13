// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RecipeDetails_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RecipeDetails.Widget_RecipeDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RecipeDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeDetails.Widget_RecipeDetails_C.Construct");

	UWidget_RecipeDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RecipeDetails.Widget_RecipeDetails_C.ExecuteUbergraph_Widget_RecipeDetails
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RecipeDetails_C::ExecuteUbergraph_Widget_RecipeDetails(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeDetails.Widget_RecipeDetails_C.ExecuteUbergraph_Widget_RecipeDetails");

	UWidget_RecipeDetails_C_ExecuteUbergraph_Widget_RecipeDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

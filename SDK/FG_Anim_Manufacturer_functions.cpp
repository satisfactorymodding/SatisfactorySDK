// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_Manufacturer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_Manufacturer.Anim_Manufacturer_C.AnimNotify_ManuEnteredProducing
// (BlueprintCallable, BlueprintEvent)

void UAnim_Manufacturer_C::AnimNotify_ManuEnteredProducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_Manufacturer.Anim_Manufacturer_C.AnimNotify_ManuEnteredProducing");

	UAnim_Manufacturer_C_AnimNotify_ManuEnteredProducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_Manufacturer.Anim_Manufacturer_C.AnimNotify_ManuLeftProducing
// (BlueprintCallable, BlueprintEvent)

void UAnim_Manufacturer_C::AnimNotify_ManuLeftProducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_Manufacturer.Anim_Manufacturer_C.AnimNotify_ManuLeftProducing");

	UAnim_Manufacturer_C_AnimNotify_ManuLeftProducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_Manufacturer.Anim_Manufacturer_C.ExecuteUbergraph_Anim_Manufacturer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_Manufacturer_C::ExecuteUbergraph_Anim_Manufacturer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_Manufacturer.Anim_Manufacturer_C.ExecuteUbergraph_Anim_Manufacturer");

	UAnim_Manufacturer_C_ExecuteUbergraph_Anim_Manufacturer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

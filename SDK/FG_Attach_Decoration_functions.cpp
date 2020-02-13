// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_Decoration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attach_Decoration.Attach_Decoration_C.CacheDescriptor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAttach_Decoration_C::CacheDescriptor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_Decoration.Attach_Decoration_C.CacheDescriptor");

	AAttach_Decoration_C_CacheDescriptor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_Decoration.Attach_Decoration_C.OnAttach
// (Event, Public, BlueprintEvent)

void AAttach_Decoration_C::OnAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_Decoration.Attach_Decoration_C.OnAttach");

	AAttach_Decoration_C_OnAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attach_Decoration.Attach_Decoration_C.ExecuteUbergraph_Attach_Decoration
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttach_Decoration_C::ExecuteUbergraph_Attach_Decoration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attach_Decoration.Attach_Decoration_C.ExecuteUbergraph_Attach_Decoration");

	AAttach_Decoration_C_ExecuteUbergraph_Attach_Decoration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

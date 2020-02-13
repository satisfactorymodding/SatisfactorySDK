// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_EliteCaveStinger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.OnRep_bSpawnGass
// (BlueprintCallable, BlueprintEvent)

void AChar_EliteCaveStinger_C::OnRep_bSpawnGass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.OnRep_bSpawnGass");

	AChar_EliteCaveStinger_C_OnRep_bSpawnGass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.SpawnGas
// (BlueprintCallable, BlueprintEvent)

void AChar_EliteCaveStinger_C::SpawnGas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.SpawnGas");

	AChar_EliteCaveStinger_C_SpawnGas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.GasEffect
// (BlueprintCallable, BlueprintEvent)

void AChar_EliteCaveStinger_C::GasEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.GasEffect");

	AChar_EliteCaveStinger_C_GasEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.ExecuteUbergraph_Char_EliteCaveStinger
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_EliteCaveStinger_C::ExecuteUbergraph_Char_EliteCaveStinger(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_EliteCaveStinger.Char_EliteCaveStinger_C.ExecuteUbergraph_Char_EliteCaveStinger");

	AChar_EliteCaveStinger_C_ExecuteUbergraph_Char_EliteCaveStinger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FluidModule_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_FluidModule.BPW_FluidModule_C.SetFluidType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 fluidDescriptor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidModule_C::SetFluidType(class UClass** fluidDescriptor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidModule.BPW_FluidModule_C.SetFluidType");

	UBPW_FluidModule_C_SetFluidType_Params params;
	params.fluidDescriptor = fluidDescriptor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidModule.BPW_FluidModule_C.UpdateValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ConsumptionValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidModule_C::UpdateValues(float* MaxAmount, float* CurrentAmount, float* ConsumptionValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidModule.BPW_FluidModule_C.UpdateValues");

	UBPW_FluidModule_C_UpdateValues_Params params;
	params.MaxAmount = MaxAmount;
	params.CurrentAmount = CurrentAmount;
	params.ConsumptionValue = ConsumptionValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidModule.BPW_FluidModule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_FluidModule_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidModule.BPW_FluidModule_C.Construct");

	UBPW_FluidModule_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidModule.BPW_FluidModule_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidModule_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidModule.BPW_FluidModule_C.PreConstruct");

	UBPW_FluidModule_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidModule.BPW_FluidModule_C.ExecuteUbergraph_BPW_FluidModule
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidModule_C::ExecuteUbergraph_BPW_FluidModule(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidModule.BPW_FluidModule_C.ExecuteUbergraph_BPW_FluidModule");

	UBPW_FluidModule_C_ExecuteUbergraph_BPW_FluidModule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

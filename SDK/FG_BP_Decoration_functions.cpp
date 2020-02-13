// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Decoration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Decoration.BP_Decoration_C.GatherDependencies
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         out_dependentObjects           (Parm, OutParm, ZeroConstructor)

void ABP_Decoration_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.GatherDependencies");

	ABP_Decoration_C_GatherDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_dependentObjects != nullptr)
		*out_dependentObjects = params.out_dependentObjects;
}


// Function BP_Decoration.BP_Decoration_C.NeedTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Decoration_C::NeedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.NeedTransform");

	ABP_Decoration_C_NeedTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Decoration.BP_Decoration_C.ShouldSave
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Decoration_C::ShouldSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.ShouldSave");

	ABP_Decoration_C_ShouldSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Decoration.BP_Decoration_C.GetLookAtDecription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Decoration_C::GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.GetLookAtDecription");

	ABP_Decoration_C_GetLookAtDecription_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Decoration.BP_Decoration_C.IsUseable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Decoration_C::IsUseable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.IsUseable");

	ABP_Decoration_C_IsUseable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Decoration.BP_Decoration_C.UpdateUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                atLocation                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent**    componentHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUseState               out_useState                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Decoration_C::UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.UpdateUseState");

	ABP_Decoration_C_UpdateUseState_Params params;
	params.byCharacter = byCharacter;
	params.atLocation = atLocation;
	params.componentHit = componentHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_useState != nullptr)
		*out_useState = params.out_useState;
}


// Function BP_Decoration.BP_Decoration_C.PickUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     inUser                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Decoration_C::PickUp(class AFGCharacterPlayer** inUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.PickUp");

	ABP_Decoration_C_PickUp_Params params;
	params.inUser = inUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decoration.BP_Decoration_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Decoration_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.ReceiveBeginPlay");

	ABP_Decoration_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decoration.BP_Decoration_C.OnUse
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Decoration_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.OnUse");

	ABP_Decoration_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decoration.BP_Decoration_C.ExecuteUbergraph_BP_Decoration
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Decoration_C::ExecuteUbergraph_BP_Decoration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decoration.BP_Decoration_C.ExecuteUbergraph_BP_Decoration");

	ABP_Decoration_C_ExecuteUbergraph_BP_Decoration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

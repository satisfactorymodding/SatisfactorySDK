// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainDockingStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_TrainDockingStation.Build_TrainDockingStation_C.Factory_PeekOutput
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFGFactoryConnectionComponent** Connection                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FInventoryItem>  out_items                      (Parm, OutParm, ZeroConstructor)
// class UClass**                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainDockingStation_C::Factory_PeekOutput(class UFGFactoryConnectionComponent** Connection, class UClass** Type, TArray<struct FInventoryItem>* out_items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainDockingStation.Build_TrainDockingStation_C.Factory_PeekOutput");

	ABuild_TrainDockingStation_C_Factory_PeekOutput_Params params;
	params.Connection = Connection;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_items != nullptr)
		*out_items = params.out_items;

	return params.ReturnValue;
}


// Function Build_TrainDockingStation.Build_TrainDockingStation_C.Factory_GrabOutput
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGFactoryConnectionComponent** Connection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FInventoryItem          out_item                       (Parm, OutParm)
// float                          out_OffsetBeyond               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainDockingStation_C::Factory_GrabOutput(class UFGFactoryConnectionComponent** Connection, class UClass** Type, struct FInventoryItem* out_item, float* out_OffsetBeyond)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainDockingStation.Build_TrainDockingStation_C.Factory_GrabOutput");

	ABuild_TrainDockingStation_C_Factory_GrabOutput_Params params;
	params.Connection = Connection;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_item != nullptr)
		*out_item = params.out_item;
	if (out_OffsetBeyond != nullptr)
		*out_OffsetBeyond = params.out_OffsetBeyond;

	return params.ReturnValue;
}


// Function Build_TrainDockingStation.Build_TrainDockingStation_C.IsMoving
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMoving                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuild_TrainDockingStation_C::IsMoving(class AActor** Actor, bool* IsMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainDockingStation.Build_TrainDockingStation_C.IsMoving");

	ABuild_TrainDockingStation_C_IsMoving_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMoving != nullptr)
		*IsMoving = params.IsMoving;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

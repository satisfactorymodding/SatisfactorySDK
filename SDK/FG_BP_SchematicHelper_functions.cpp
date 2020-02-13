// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SchematicHelper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumArmEquipmentSlotsUnlocked
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            numSlots                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_GetNumArmEquipmentSlotsUnlocked(class UClass** schematic, class UObject** __WorldContext, int* numSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumArmEquipmentSlotsUnlocked");

	UBP_SchematicHelper_C_GetNumArmEquipmentSlotsUnlocked_Params params;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numSlots != nullptr)
		*numSlots = params.numSlots;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumInventorySlotsUnlocked
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            numSlots                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_GetNumInventorySlotsUnlocked(class UClass** schematic, class UObject** __WorldContext, int* numSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumInventorySlotsUnlocked");

	UBP_SchematicHelper_C_GetNumInventorySlotsUnlocked_Params params;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numSlots != nullptr)
		*numSlots = params.numSlots;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksHandSlots
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_GetUnlocksHandSlots(class UClass** schematic, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksHandSlots");

	UBP_SchematicHelper_C_GetUnlocksHandSlots_Params params;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksInventorySlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_GetUnlocksInventorySlot(class UClass** schematic, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksInventorySlot");

	UBP_SchematicHelper_C_GetUnlocksInventorySlot_Params params;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.GetRecipesFromSchematic
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          recipes                        (Parm, OutParm, ZeroConstructor)

void UBP_SchematicHelper_C::STATIC_GetRecipesFromSchematic(class UClass** schematic, class UObject** __WorldContext, TArray<class UClass*>* recipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetRecipesFromSchematic");

	UBP_SchematicHelper_C_GetRecipesFromSchematic_Params params;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (recipes != nullptr)
		*recipes = params.recipes;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlockDataStructFromSchematic
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFUnlockDataStruct> UnlockDataStruct               (Parm, OutParm, ZeroConstructor)

void UBP_SchematicHelper_C::STATIC_GetUnlockDataStructFromSchematic(class UClass** schematic, class UObject** __WorldContext, TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlockDataStructFromSchematic");

	UBP_SchematicHelper_C_GetUnlockDataStructFromSchematic_Params params;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockDataStruct != nullptr)
		*UnlockDataStruct = params.UnlockDataStruct;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedInAnyWay
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WolrdContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_IsSchematicLockedInAnyWay(class UObject** WolrdContext, class UClass** schematic, class UObject** __WorldContext, bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedInAnyWay");

	UBP_SchematicHelper_C_IsSchematicLockedInAnyWay_Params params;
	params.WolrdContext = WolrdContext;
	params.schematic = schematic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedByTutorial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSchematicLockedByTutorial    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_IsSchematicLockedByTutorial(class UObject** WorldContext, class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicLockedByTutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedByTutorial");

	UBP_SchematicHelper_C_IsSchematicLockedByTutorial_Params params;
	params.WorldContext = WorldContext;
	params.SchematicClass = SchematicClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSchematicLockedByTutorial != nullptr)
		*IsSchematicLockedByTutorial = params.IsSchematicLockedByTutorial;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicDependentLocked
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSchematicDependentLocked     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_IsSchematicDependentLocked(class UObject** WorldContext, class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicDependentLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicDependentLocked");

	UBP_SchematicHelper_C_IsSchematicDependentLocked_Params params;
	params.WorldContext = WorldContext;
	params.SchematicClass = SchematicClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSchematicDependentLocked != nullptr)
		*IsSchematicDependentLocked = params.IsSchematicDependentLocked;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPartOfTutorial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSchematicPartOfTutortial     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_IsSchematicPartOfTutorial(class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicPartOfTutortial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPartOfTutorial");

	UBP_SchematicHelper_C_IsSchematicPartOfTutorial_Params params;
	params.SchematicClass = SchematicClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSchematicPartOfTutortial != nullptr)
		*IsSchematicPartOfTutortial = params.IsSchematicPartOfTutortial;
}


// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPhaseLocked
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSchematicPhaseLocked         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SchematicHelper_C::STATIC_IsSchematicPhaseLocked(class UObject** WorldContext, class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicPhaseLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPhaseLocked");

	UBP_SchematicHelper_C_IsSchematicPhaseLocked_Params params;
	params.WorldContext = WorldContext;
	params.SchematicClass = SchematicClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSchematicPhaseLocked != nullptr)
		*IsSchematicPhaseLocked = params.IsSchematicPhaseLocked;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

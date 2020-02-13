#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SchematicHelper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumArmEquipmentSlotsUnlocked
struct UBP_SchematicHelper_C_GetNumArmEquipmentSlotsUnlocked_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numSlots;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumInventorySlotsUnlocked
struct UBP_SchematicHelper_C_GetNumInventorySlotsUnlocked_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numSlots;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksHandSlots
struct UBP_SchematicHelper_C_GetUnlocksHandSlots_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksInventorySlot
struct UBP_SchematicHelper_C_GetUnlocksInventorySlot_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetRecipesFromSchematic
struct UBP_SchematicHelper_C_GetRecipesFromSchematic_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              recipes;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlockDataStructFromSchematic
struct UBP_SchematicHelper_C_GetUnlockDataStructFromSchematic_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFUnlockDataStruct>                  UnlockDataStruct;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedInAnyWay
struct UBP_SchematicHelper_C_IsSchematicLockedInAnyWay_Params
{
	class UObject**                                    WolrdContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedByTutorial
struct UBP_SchematicHelper_C_IsSchematicLockedByTutorial_Params
{
	class UObject**                                    WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSchematicLockedByTutorial;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicDependentLocked
struct UBP_SchematicHelper_C_IsSchematicDependentLocked_Params
{
	class UObject**                                    WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSchematicDependentLocked;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPartOfTutorial
struct UBP_SchematicHelper_C_IsSchematicPartOfTutorial_Params
{
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSchematicPartOfTutortial;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPhaseLocked
struct UBP_SchematicHelper_C_IsSchematicPhaseLocked_Params
{
	class UObject**                                    WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSchematicPhaseLocked;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

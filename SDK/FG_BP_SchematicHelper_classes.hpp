#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SchematicHelper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SchematicHelper.BP_SchematicHelper_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SchematicHelper_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SchematicHelper.BP_SchematicHelper_C");
		return ptr;
	}


	void STATIC_GetNumArmEquipmentSlotsUnlocked(class UClass** schematic, class UObject** __WorldContext, int* numSlots);
	void STATIC_GetNumInventorySlotsUnlocked(class UClass** schematic, class UObject** __WorldContext, int* numSlots);
	void STATIC_GetUnlocksHandSlots(class UClass** schematic, class UObject** __WorldContext, bool* Result);
	void STATIC_GetUnlocksInventorySlot(class UClass** schematic, class UObject** __WorldContext, bool* Result);
	void STATIC_GetRecipesFromSchematic(class UClass** schematic, class UObject** __WorldContext, TArray<class UClass*>* recipes);
	void STATIC_GetUnlockDataStructFromSchematic(class UClass** schematic, class UObject** __WorldContext, TArray<struct FFUnlockDataStruct>* UnlockDataStruct);
	void STATIC_IsSchematicLockedInAnyWay(class UObject** WolrdContext, class UClass** schematic, class UObject** __WorldContext, bool* IsLocked);
	void STATIC_IsSchematicLockedByTutorial(class UObject** WorldContext, class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicLockedByTutorial);
	void STATIC_IsSchematicDependentLocked(class UObject** WorldContext, class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicDependentLocked);
	void STATIC_IsSchematicPartOfTutorial(class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicPartOfTutortial);
	void STATIC_IsSchematicPhaseLocked(class UObject** WorldContext, class UClass** SchematicClass, class UObject** __WorldContext, bool* IsSchematicPhaseLocked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

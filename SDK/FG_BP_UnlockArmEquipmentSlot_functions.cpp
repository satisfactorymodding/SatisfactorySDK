// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockArmEquipmentSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C.GetUnlockDataStruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFUnlockDataStruct> UnlockDataStruct               (Parm, OutParm, ZeroConstructor)

void UBP_UnlockArmEquipmentSlot_C::GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C.GetUnlockDataStruct");

	UBP_UnlockArmEquipmentSlot_C_GetUnlockDataStruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockDataStruct != nullptr)
		*UnlockDataStruct = params.UnlockDataStruct;
}


// Function BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C.GetStingerWidgetRewardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void UBP_UnlockArmEquipmentSlot_C::GetStingerWidgetRewardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C.GetStingerWidgetRewardData");

	UBP_UnlockArmEquipmentSlot_C_GetStingerWidgetRewardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C.GetUnlockRewardWidgets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            TradingPostWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UUserWidget*>     Widgets                        (Parm, OutParm, ZeroConstructor)

void UBP_UnlockArmEquipmentSlot_C::GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockArmEquipmentSlot.BP_UnlockArmEquipmentSlot_C.GetUnlockRewardWidgets");

	UBP_UnlockArmEquipmentSlot_C_GetUnlockRewardWidgets_Params params;
	params.OwningPlayer = OwningPlayer;
	params.SchematicClass = SchematicClass;
	params.TradingPostWidget = TradingPostWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

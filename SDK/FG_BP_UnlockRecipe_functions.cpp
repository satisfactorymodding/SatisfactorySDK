// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockRecipe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetUnlockDataStruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFUnlockDataStruct> UnlockDataStruct               (Parm, OutParm, ZeroConstructor)

void UBP_UnlockRecipe_C::GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetUnlockDataStruct");

	UBP_UnlockRecipe_C_GetUnlockDataStruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockDataStruct != nullptr)
		*UnlockDataStruct = params.UnlockDataStruct;
}


// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetStingerWidgetRewardData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_UnlockRecipe_C::GetStingerWidgetRewardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetStingerWidgetRewardData");

	UBP_UnlockRecipe_C_GetStingerWidgetRewardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetUnlockRewardWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            TradingPostWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UUserWidget*>     Widgets                        (Parm, OutParm, ZeroConstructor)

void UBP_UnlockRecipe_C::GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetUnlockRewardWidgets");

	UBP_UnlockRecipe_C_GetUnlockRewardWidgets_Params params;
	params.OwningPlayer = OwningPlayer;
	params.SchematicClass = SchematicClass;
	params.TradingPostWidget = TradingPostWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetRewardTypeFromItemDescriptor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemDescriptorClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  RewardData                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_UnlockRecipe_C::GetRewardTypeFromItemDescriptor(class UClass** ItemDescriptorClass, class UClass** RewardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetRewardTypeFromItemDescriptor");

	UBP_UnlockRecipe_C_GetRewardTypeFromItemDescriptor_Params params;
	params.ItemDescriptorClass = ItemDescriptorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardData != nullptr)
		*RewardData = params.RewardData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockGiveItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.GetStingerWidgetRewardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void UBP_UnlockGiveItem_C::GetStingerWidgetRewardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.GetStingerWidgetRewardData");

	UBP_UnlockGiveItem_C_GetStingerWidgetRewardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.GetUnlockRewardWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            TradingPostWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UUserWidget*>     Widgets                        (Parm, OutParm, ZeroConstructor)

void UBP_UnlockGiveItem_C::GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.GetUnlockRewardWidgets");

	UBP_UnlockGiveItem_C_GetUnlockRewardWidgets_Params params;
	params.OwningPlayer = OwningPlayer;
	params.SchematicClass = SchematicClass;
	params.TradingPostWidget = TradingPostWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.GetUnlockDataStruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFUnlockDataStruct> UnlockDataStruct               (Parm, OutParm, ZeroConstructor)

void UBP_UnlockGiveItem_C::GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.GetUnlockDataStruct");

	UBP_UnlockGiveItem_C_GetUnlockDataStruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockDataStruct != nullptr)
		*UnlockDataStruct = params.UnlockDataStruct;
}


// Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.IsRepeatPurchasesAllowed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_UnlockGiveItem_C::IsRepeatPurchasesAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UnlockGiveItem.BP_UnlockGiveItem_C.IsRepeatPurchasesAllowed");

	UBP_UnlockGiveItem_C_IsRepeatPurchasesAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

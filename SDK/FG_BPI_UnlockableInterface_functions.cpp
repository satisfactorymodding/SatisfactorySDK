// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPI_UnlockableInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockDataStruct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFUnlockDataStruct> UnlockDataStruct               (Parm, OutParm, ZeroConstructor)

void UBPI_UnlockableInterface_C::GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockDataStruct");

	UBPI_UnlockableInterface_C_GetUnlockDataStruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockDataStruct != nullptr)
		*UnlockDataStruct = params.UnlockDataStruct;
}


// Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockRewardWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            TradingPostWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UUserWidget*>     Widgets                        (Parm, OutParm, ZeroConstructor)

void UBPI_UnlockableInterface_C::GetUnlockRewardWidgets(class APlayerController** OwningPlayer, class UClass** SchematicClass, class UUserWidget** TradingPostWidget, TArray<class UUserWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockRewardWidgets");

	UBPI_UnlockableInterface_C_GetUnlockRewardWidgets_Params params;
	params.OwningPlayer = OwningPlayer;
	params.SchematicClass = SchematicClass;
	params.TradingPostWidget = TradingPostWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetStingerWidgetRewardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void UBPI_UnlockableInterface_C::GetStingerWidgetRewardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetStingerWidgetRewardData");

	UBPI_UnlockableInterface_C_GetStingerWidgetRewardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

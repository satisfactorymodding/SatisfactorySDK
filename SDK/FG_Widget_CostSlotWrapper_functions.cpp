// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_CostSlotWrapper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.FormatNumbers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           NumItems                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Out_Text                       (Parm, OutParm)

void UWidget_CostSlotWrapper_C::FormatNumbers(int* NumItems, struct FText* Out_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.FormatNumbers");

	UWidget_CostSlotWrapper_C_FormatNumbers_Params params;
	params.NumItems = NumItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Text != nullptr)
		*Out_Text = params.Out_Text;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetIconBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               IconTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CostSlotWrapper_C::SetIconBrush(class UTexture** IconTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetIconBrush");

	UWidget_CostSlotWrapper_C_SetIconBrush_Params params;
	params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetProgressbarPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_CostSlotWrapper_C::GetProgressbarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetProgressbarPercent");

	UWidget_CostSlotWrapper_C_GetProgressbarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetOrange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_CostSlotWrapper_C::GetOrange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetOrange");

	UWidget_CostSlotWrapper_C_GetOrange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetTextboxFormating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasItems                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CostSlotWrapper_C::SetTextboxFormating(bool* HasItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetTextboxFormating");

	UWidget_CostSlotWrapper_C_SetTextboxFormating_Params params;
	params.HasItems = HasItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetDarkGray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_CostSlotWrapper_C::GetDarkGray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.GetDarkGray");

	UWidget_CostSlotWrapper_C_GetDarkGray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetPartsNumbers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_CostSlotWrapper_C::SetPartsNumbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.SetPartsNumbers");

	UWidget_CostSlotWrapper_C_SetPartsNumbers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Setup CostIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               IconTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAmount*            ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFGInventoryComponent**  CachedInventoryComponent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           SlotIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentNumInSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SmallSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BigSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceOrangeTextbox             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CostSlotWrapper_C::Setup_CostIcon(class UTexture** IconTexture, struct FItemAmount* ItemAmount, class UFGInventoryComponent** CachedInventoryComponent, int* SlotIdx, int* CurrentNumInSlot, bool* SmallSlot, bool* BigSlot, bool* ForceOrangeTextbox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Setup CostIcon");

	UWidget_CostSlotWrapper_C_Setup_CostIcon_Params params;
	params.IconTexture = IconTexture;
	params.ItemAmount = ItemAmount;
	params.CachedInventoryComponent = CachedInventoryComponent;
	params.SlotIdx = SlotIdx;
	params.CurrentNumInSlot = CurrentNumInSlot;
	params.SmallSlot = SmallSlot;
	params.BigSlot = BigSlot;
	params.ForceOrangeTextbox = ForceOrangeTextbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CostSlotWrapper_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.Tick");

	UWidget_CostSlotWrapper_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CostSlotWrapper_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.PreConstruct");

	UWidget_CostSlotWrapper_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.ExecuteUbergraph_Widget_CostSlotWrapper
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_CostSlotWrapper_C::ExecuteUbergraph_Widget_CostSlotWrapper(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CostSlotWrapper.Widget_CostSlotWrapper_C.ExecuteUbergraph_Widget_CostSlotWrapper");

	UWidget_CostSlotWrapper_C_ExecuteUbergraph_Widget_CostSlotWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

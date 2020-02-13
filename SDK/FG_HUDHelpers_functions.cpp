// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_HUDHelpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDHelpers.HUDHelpers_C.GetKeyNameForActionSimple
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  buttonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Button                         (Parm, OutParm)

void UHUDHelpers_C::STATIC_GetKeyNameForActionSimple(class AController** Controller, struct FName* buttonName, class UObject** __WorldContext, struct FText* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetKeyNameForActionSimple");

	UHUDHelpers_C_GetKeyNameForActionSimple_Params params;
	params.Controller = Controller;
	params.buttonName = buttonName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function HUDHelpers.HUDHelpers_C.GetAdminInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGAdminInterface*       adminInterface                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetAdminInterface(class APlayerController** PlayerController, class UObject** __WorldContext, class AFGAdminInterface** adminInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetAdminInterface");

	UHUDHelpers_C_GetAdminInterface_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (adminInterface != nullptr)
		*adminInterface = params.adminInterface;
}


// Function HUDHelpers.HUDHelpers_C.HasValidAdminInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_HasValidAdminInterface(class APlayerController** Controller, class UObject** __WorldContext, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.HasValidAdminInterface");

	UHUDHelpers_C_HasValidAdminInterface_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function HUDHelpers.HUDHelpers_C.IsInMainMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInMainMenu                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_IsInMainMenu(class UObject** WorldContext, class UObject** __WorldContext, bool* IsInMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.IsInMainMenu");

	UHUDHelpers_C_IsInMainMenu_Params params;
	params.WorldContext = WorldContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInMainMenu != nullptr)
		*IsInMainMenu = params.IsInMainMenu;
}


// Function HUDHelpers.HUDHelpers_C.GetFGGameUI
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGGameUI*               gameUI                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetFGGameUI(class AController** Controller, class UObject** __WorldContext, class UFGGameUI** gameUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetFGGameUI");

	UHUDHelpers_C_GetFGGameUI_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (gameUI != nullptr)
		*gameUI = params.gameUI;
}


// Function HUDHelpers.HUDHelpers_C.GetNumItemsFromCentralStorage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn**                  OwningPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 mItemClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumItems                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetNumItemsFromCentralStorage(class APawn** OwningPawn, class UClass** mItemClass, class UObject** __WorldContext, int* NumItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetNumItemsFromCentralStorage");

	UHUDHelpers_C_GetNumItemsFromCentralStorage_Params params;
	params.OwningPawn = OwningPawn;
	params.mItemClass = mItemClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumItems != nullptr)
		*NumItems = params.NumItems;
}


// Function HUDHelpers.HUDHelpers_C.GetNumItemsOwned
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetNumItemsOwned(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetNumItemsOwned");

	UHUDHelpers_C_GetNumItemsOwned_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDHelpers.HUDHelpers_C.GetFactoryGameLightBlue
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Graphics                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Text                           (Parm, OutParm)

void UHUDHelpers_C::STATIC_GetFactoryGameLightBlue(class UObject** __WorldContext, struct FLinearColor* Graphics, struct FSlateColor* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetFactoryGameLightBlue");

	UHUDHelpers_C_GetFactoryGameLightBlue_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Graphics != nullptr)
		*Graphics = params.Graphics;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function HUDHelpers.HUDHelpers_C.GetFactoryGameLightGray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Text                           (Parm, OutParm)
// struct FLinearColor            Graphics                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetFactoryGameLightGray(class UObject** __WorldContext, struct FSlateColor* Text, struct FLinearColor* Graphics)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetFactoryGameLightGray");

	UHUDHelpers_C_GetFactoryGameLightGray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Graphics != nullptr)
		*Graphics = params.Graphics;
}


// Function HUDHelpers.HUDHelpers_C.GetFactoryGameDarkGray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Text                           (Parm, OutParm)
// struct FLinearColor            Graphics                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetFactoryGameDarkGray(class UObject** __WorldContext, struct FSlateColor* Text, struct FLinearColor* Graphics)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetFactoryGameDarkGray");

	UHUDHelpers_C_GetFactoryGameDarkGray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Graphics != nullptr)
		*Graphics = params.Graphics;
}


// Function HUDHelpers.HUDHelpers_C.SetSliderSteps
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider**                mSlider                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           mSteps                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_SetSliderSteps(class USlider** mSlider, int* mSteps, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.SetSliderSteps");

	UHUDHelpers_C_SetSliderSteps_Params params;
	params.mSlider = mSlider;
	params.mSteps = mSteps;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDHelpers.HUDHelpers_C.GetScanningObjectName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  OwningPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Object_Name                    (Parm, OutParm)

void UHUDHelpers_C::STATIC_GetScanningObjectName(class APawn** OwningPawn, class UObject** __WorldContext, struct FText* Object_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetScanningObjectName");

	UHUDHelpers_C_GetScanningObjectName_Params params;
	params.OwningPawn = OwningPawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object_Name != nullptr)
		*Object_Name = params.Object_Name;
}


// Function HUDHelpers.HUDHelpers_C.ShowHideHUD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isMenuOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  OwningPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_ShowHideHUD(bool* isMenuOpen, class APawn** OwningPawn, class AController** Controller, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.ShowHideHUD");

	UHUDHelpers_C_ShowHideHUD_Params params;
	params.isMenuOpen = isMenuOpen;
	params.OwningPawn = OwningPawn;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDHelpers.HUDHelpers_C.GetNumItemsFromInventory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 mItemClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumItems                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetNumItemsFromInventory(class UFGInventoryComponent** InventoryComponent, class UClass** mItemClass, class UObject** __WorldContext, int* NumItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetNumItemsFromInventory");

	UHUDHelpers_C_GetNumItemsFromInventory_Params params;
	params.InventoryComponent = InventoryComponent;
	params.mItemClass = mItemClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumItems != nullptr)
		*NumItems = params.NumItems;
}


// Function HUDHelpers.HUDHelpers_C.GetFactoryGameOrange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Orange                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             OrangeText                     (Parm, OutParm)

void UHUDHelpers_C::STATIC_GetFactoryGameOrange(class UObject** __WorldContext, struct FLinearColor* Orange, struct FSlateColor* OrangeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetFactoryGameOrange");

	UHUDHelpers_C_GetFactoryGameOrange_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Orange != nullptr)
		*Orange = params.Orange;
	if (OrangeText != nullptr)
		*OrangeText = params.OrangeText;
}


// Function HUDHelpers.HUDHelpers_C.GetFactoryGameWhite
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             TextWhite                      (Parm, OutParm)
// struct FLinearColor            GraphicsWhite                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetFactoryGameWhite(class UObject** __WorldContext, struct FSlateColor* TextWhite, struct FLinearColor* GraphicsWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetFactoryGameWhite");

	UHUDHelpers_C_GetFactoryGameWhite_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextWhite != nullptr)
		*TextWhite = params.TextWhite;
	if (GraphicsWhite != nullptr)
		*GraphicsWhite = params.GraphicsWhite;
}


// Function HUDHelpers.HUDHelpers_C.GetNumItemsFromPlayerInventory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn**                  OwningPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 mItemClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumItems                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUDHelpers_C::STATIC_GetNumItemsFromPlayerInventory(class APawn** OwningPawn, class UClass** mItemClass, class UObject** __WorldContext, int* NumItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDHelpers.HUDHelpers_C.GetNumItemsFromPlayerInventory");

	UHUDHelpers_C_GetNumItemsFromPlayerInventory_Params params;
	params.OwningPawn = OwningPawn;
	params.mItemClass = mItemClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumItems != nullptr)
		*NumItems = params.NumItems;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_HUDHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HUDHelpers.HUDHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UHUDHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HUDHelpers.HUDHelpers_C");
		return ptr;
	}


	void STATIC_GetKeyNameForActionSimple(class AController** Controller, struct FName* buttonName, class UObject** __WorldContext, struct FText* Button);
	void STATIC_GetAdminInterface(class APlayerController** PlayerController, class UObject** __WorldContext, class AFGAdminInterface** adminInterface);
	void STATIC_HasValidAdminInterface(class APlayerController** Controller, class UObject** __WorldContext, bool* Valid);
	void STATIC_IsInMainMenu(class UObject** WorldContext, class UObject** __WorldContext, bool* IsInMainMenu);
	void STATIC_GetFGGameUI(class AController** Controller, class UObject** __WorldContext, class UFGGameUI** gameUI);
	void STATIC_GetNumItemsFromCentralStorage(class APawn** OwningPawn, class UClass** mItemClass, class UObject** __WorldContext, int* NumItems);
	void STATIC_GetNumItemsOwned(class UObject** __WorldContext);
	void STATIC_GetFactoryGameLightBlue(class UObject** __WorldContext, struct FLinearColor* Graphics, struct FSlateColor* Text);
	void STATIC_GetFactoryGameLightGray(class UObject** __WorldContext, struct FSlateColor* Text, struct FLinearColor* Graphics);
	void STATIC_GetFactoryGameDarkGray(class UObject** __WorldContext, struct FSlateColor* Text, struct FLinearColor* Graphics);
	void STATIC_SetSliderSteps(class USlider** mSlider, int* mSteps, class UObject** __WorldContext);
	void STATIC_GetScanningObjectName(class APawn** OwningPawn, class UObject** __WorldContext, struct FText* Object_Name);
	void STATIC_ShowHideHUD(bool* isMenuOpen, class APawn** OwningPawn, class AController** Controller, class UObject** __WorldContext);
	void STATIC_GetNumItemsFromInventory(class UFGInventoryComponent** InventoryComponent, class UClass** mItemClass, class UObject** __WorldContext, int* NumItems);
	void STATIC_GetFactoryGameOrange(class UObject** __WorldContext, struct FLinearColor* Orange, struct FSlateColor* OrangeText);
	void STATIC_GetFactoryGameWhite(class UObject** __WorldContext, struct FSlateColor* TextWhite, struct FLinearColor* GraphicsWhite);
	void STATIC_GetNumItemsFromPlayerInventory(class APawn** OwningPawn, class UClass** mItemClass, class UObject** __WorldContext, int* NumItems);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

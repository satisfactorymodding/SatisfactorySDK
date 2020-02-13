#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPHUDHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPHUDHelpers.BPHUDHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBPHUDHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPHUDHelpers.BPHUDHelpers_C");
		return ptr;
	}


	void STATIC_GetDefaultRCO(class APlayerController** Controller, class UObject** __WorldContext, class UBP_RemoteCallObject_C** RCO);
	void STATIC_FindWidgetOfClass(class UClass** Windget, class UFGGameUI** Target, class UObject** __WorldContext, class UFGInteractWidget** Widget);
	void STATIC_GetFGHud(class AController** Controller, class UObject** __WorldContext, class AFGHUD** AsFGHUD);
	void STATIC_ShowHideHUD(bool* isMenuOpen, class APawn** OwningPawn, class AController** Controller, class UObject** __WorldContext);
	void STATIC_PopStackWidget(class AController** instigatingController, class UFGInteractWidget** Stack_Widget, class UObject** __WorldContext);
	void STATIC_PushStackWidget(class AController** instigatingController, class UFGInteractWidget** stackWidget, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

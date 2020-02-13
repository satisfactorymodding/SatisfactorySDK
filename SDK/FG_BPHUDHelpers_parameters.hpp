#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPHUDHelpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPHUDHelpers.BPHUDHelpers_C.GetDefaultRCO
struct UBPHUDHelpers_C_GetDefaultRCO_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_RemoteCallObject_C*                      RCO;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPHUDHelpers.BPHUDHelpers_C.FindWidgetOfClass
struct UBPHUDHelpers_C_FindWidgetOfClass_Params
{
	class UClass**                                     Windget;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFGGameUI**                                  Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFGInteractWidget*                           Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPHUDHelpers.BPHUDHelpers_C.GetFGHud
struct UBPHUDHelpers_C_GetFGHud_Params
{
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFGHUD*                                      AsFGHUD;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPHUDHelpers.BPHUDHelpers_C.ShowHideHUD
struct UBPHUDHelpers_C_ShowHideHUD_Params
{
	bool*                                              isMenuOpen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      OwningPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPHUDHelpers.BPHUDHelpers_C.PopStackWidget
struct UBPHUDHelpers_C_PopStackWidget_Params
{
	class AController**                                instigatingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFGInteractWidget**                          Stack_Widget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPHUDHelpers.BPHUDHelpers_C.PushStackWidget
struct UBPHUDHelpers_C_PushStackWidget_Params
{
	class AController**                                instigatingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFGInteractWidget**                          stackWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

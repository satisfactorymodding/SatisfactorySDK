#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_RadarTower_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_RadarTower.Build_RadarTower_C.GetActorCompassViewDistance
struct ABuild_RadarTower_C_GetActorCompassViewDistance_Params
{
	ECompassViewDistance                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.SetActorCompassViewDistance
struct ABuild_RadarTower_C_SetActorCompassViewDistance_Params
{
	ECompassViewDistance*                              compassViewDistance;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECompassViewDistance                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.SetActorRepresentationText
struct ABuild_RadarTower_C_SetActorRepresentationText_Params
{
	struct FText*                                      newText;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Build_RadarTower.Build_RadarTower_C.UpdateRepresentation
struct ABuild_RadarTower_C_UpdateRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorRepresentationColor
struct ABuild_RadarTower_C_GetActorRepresentationColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorRepresentationText
struct ABuild_RadarTower_C_GetActorRepresentationText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorRepresentationTexture
struct ABuild_RadarTower_C_GetActorRepresentationTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorRepresentationType
struct ABuild_RadarTower_C_GetActorRepresentationType_Params
{
	ERepresentationType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorShouldShowInCompass
struct ABuild_RadarTower_C_GetActorShouldShowInCompass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.AddAsRepresentation
struct ABuild_RadarTower_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorFogOfWarRevealRadius
struct ABuild_RadarTower_C_GetActorFogOfWarRevealRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorFogOfWarRevealType
struct ABuild_RadarTower_C_GetActorFogOfWarRevealType_Params
{
	EFogOfWarRevealType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetActorShouldShowOnMap
struct ABuild_RadarTower_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetRealActorLocation
struct ABuild_RadarTower_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.GetRealActorRotation
struct ABuild_RadarTower_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.IsActorStatic
struct ABuild_RadarTower_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.RemoveAsRepresentation
struct ABuild_RadarTower_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.SetActorRepresentationColor
struct ABuild_RadarTower_C_SetActorRepresentationColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.ReceiveBeginPlay
struct ABuild_RadarTower_C_ReceiveBeginPlay_Params
{
};

// Function Build_RadarTower.Build_RadarTower_C.ReceiveEndPlay
struct ABuild_RadarTower_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_RadarTower.Build_RadarTower_C.OnRadiusUpdateTriggered
struct ABuild_RadarTower_C_OnRadiusUpdateTriggered_Params
{
};

// Function Build_RadarTower.Build_RadarTower_C.ExecuteUbergraph_Build_RadarTower
struct ABuild_RadarTower_C_ExecuteUbergraph_Build_RadarTower_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

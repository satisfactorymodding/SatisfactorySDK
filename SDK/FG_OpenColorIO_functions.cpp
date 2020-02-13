// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_OpenColorIO_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FOpenColorIOColorConversionSettings* ConversionSettings             (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture**               InputTexture                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D** OutputRenderTarget             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenColorIOBlueprintLibrary::STATIC_ApplyColorSpaceTransform(class UObject** WorldContextObject, struct FOpenColorIOColorConversionSettings* ConversionSettings, class UTexture** InputTexture, class UTextureRenderTarget2D** OutputRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform");

	UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConversionSettings = ConversionSettings;
	params.InputTexture = InputTexture;
	params.OutputRenderTarget = OutputRenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

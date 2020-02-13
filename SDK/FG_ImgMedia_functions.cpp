// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_ImgMedia_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImgMedia.ImgMediaSource.SetSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 Path                           (Parm, ZeroConstructor)

void UImgMediaSource::SetSequencePath(class FString* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	UImgMediaSource_SetSequencePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UImgMediaSource::GetSequencePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	UImgMediaSource_GetSequencePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>          OutProxies                     (Parm, OutParm, ZeroConstructor)

void UImgMediaSource::GetProxies(TArray<class FString>* OutProxies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	UImgMediaSource_GetProxies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

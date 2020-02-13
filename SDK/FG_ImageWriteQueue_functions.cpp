// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_ImageWriteQueue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTexture**               Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 Filename                       (Parm, ZeroConstructor)
// struct FImageWriteOptions*     options                        (ConstParm, Parm, OutParm, ReferenceParm)

void UImageWriteBlueprintLibrary::STATIC_ExportToDisk(class UTexture** Texture, class FString* Filename, struct FImageWriteOptions* options)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");

	UImageWriteBlueprintLibrary_ExportToDisk_Params params;
	params.Texture = Texture;
	params.Filename = Filename;
	params.options = options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

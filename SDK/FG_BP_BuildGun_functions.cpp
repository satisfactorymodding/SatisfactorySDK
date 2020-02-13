// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_BuildGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuildGun.BP_BuildGun_C.GetInstigatorPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BuildGun_C::GetInstigatorPlayerController(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGun.BP_BuildGun_C.GetInstigatorPlayerController");

	ABP_BuildGun_C_GetInstigatorPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
}


// Function BP_BuildGun.BP_BuildGun_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void ABP_BuildGun_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGun.BP_BuildGun_C.WasEquipped");

	ABP_BuildGun_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGun.BP_BuildGun_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void ABP_BuildGun_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGun.BP_BuildGun_C.WasUnEquipped");

	ABP_BuildGun_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BuildGun.BP_BuildGun_C.ExecuteUbergraph_BP_BuildGun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BuildGun_C::ExecuteUbergraph_BP_BuildGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildGun.BP_BuildGun_C.ExecuteUbergraph_BP_BuildGun");

	ABP_BuildGun_C_ExecuteUbergraph_BP_BuildGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

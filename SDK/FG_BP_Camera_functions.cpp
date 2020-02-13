// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Camera_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Camera.BP_Camera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Camera_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3");

	ABP_Camera_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.InpActEvt_BuildGunScrollDown_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Camera_C::InpActEvt_BuildGunScrollDown_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.InpActEvt_BuildGunScrollDown_K2Node_InputActionEvent_2");

	ABP_Camera_C_InpActEvt_BuildGunScrollDown_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.InpActEvt_BuildGunScrollUp_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Camera_C::InpActEvt_BuildGunScrollUp_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.InpActEvt_BuildGunScrollUp_K2Node_InputActionEvent_1");

	ABP_Camera_C_InpActEvt_BuildGunScrollUp_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Camera_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1");

	ABP_Camera_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void ABP_Camera_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.WasEquipped");

	ABP_Camera_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void ABP_Camera_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.WasUnEquipped");

	ABP_Camera_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.SetFOV
// (BlueprintCallable, BlueprintEvent)

void ABP_Camera_C::SetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.SetFOV");

	ABP_Camera_C_SetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camera.BP_Camera_C.ExecuteUbergraph_BP_Camera
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camera_C::ExecuteUbergraph_BP_Camera(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.ExecuteUbergraph_BP_Camera");

	ABP_Camera_C_ExecuteUbergraph_BP_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

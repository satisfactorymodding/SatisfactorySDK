// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_ObjectScanner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_ObjectScanner.Equip_ObjectScanner_C.OnUpdateTextMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas**                Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_ObjectScanner_C::OnUpdateTextMaterial(class UCanvas** Canvas, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.OnUpdateTextMaterial");

	AEquip_ObjectScanner_C_OnUpdateTextMaterial_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.SetupTextMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AEquip_ObjectScanner_C::SetupTextMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.SetupTextMaterial");

	AEquip_ObjectScanner_C_SetupTextMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetAngleToClosestTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEquip_ObjectScanner_C::GetAngleToClosestTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetAngleToClosestTarget");

	AEquip_ObjectScanner_C_GetAngleToClosestTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEquip_ObjectScanner_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3");

	AEquip_ObjectScanner_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEquip_ObjectScanner_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_2");

	AEquip_ObjectScanner_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEquip_ObjectScanner_C::InpActEvt_SecondaryFire_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_1");

	AEquip_ObjectScanner_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.PlayBeep
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isObjectInRange                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_ObjectScanner_C::PlayBeep(bool* isObjectInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.PlayBeep");

	AEquip_ObjectScanner_C_PlayBeep_Params params;
	params.isObjectInRange = isObjectInRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.UpdateScannerVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          wasChange                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_ObjectScanner_C::UpdateScannerVisuals(bool* wasChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.UpdateScannerVisuals");

	AEquip_ObjectScanner_C_UpdateScannerVisuals_Params params;
	params.wasChange = wasChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.WasEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_ObjectScanner_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.WasEquipped");

	AEquip_ObjectScanner_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.WasUnEquipped
// (Event, Protected, BlueprintEvent)

void AEquip_ObjectScanner_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.WasUnEquipped");

	AEquip_ObjectScanner_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.Event BlinkLight
// (BlueprintCallable, BlueprintEvent)

void AEquip_ObjectScanner_C::Event_BlinkLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.Event BlinkLight");

	AEquip_ObjectScanner_C_Event_BlinkLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEquip_ObjectScanner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.ReceiveBeginPlay");

	AEquip_ObjectScanner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.Event Update Screen
// (BlueprintCallable, BlueprintEvent)

void AEquip_ObjectScanner_C::Event_Update_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.Event Update Screen");

	AEquip_ObjectScanner_C_Event_Update_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AEquip_ObjectScanner_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.ReceiveDestroyed");

	AEquip_ObjectScanner_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equip_ObjectScanner.Equip_ObjectScanner_C.ExecuteUbergraph_Equip_ObjectScanner
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEquip_ObjectScanner_C::ExecuteUbergraph_Equip_ObjectScanner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_ObjectScanner.Equip_ObjectScanner_C.ExecuteUbergraph_Equip_ObjectScanner");

	AEquip_ObjectScanner_C_ExecuteUbergraph_Equip_ObjectScanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

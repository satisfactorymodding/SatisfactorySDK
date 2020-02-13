// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_GenericSchematicRewardButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_GenericSchematicRewardButton_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.OnMouseMove");

	UBPW_GenericSchematicRewardButton_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.GetTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBPW_GenericSchematicRewardButton_C::GetTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.GetTooltip");

	UBPW_GenericSchematicRewardButton_C_GetTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.SetUnlockData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFUnlockDataStruct*     mUnlockStruct                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_GenericSchematicRewardButton_C::SetUnlockData(struct FFUnlockDataStruct* mUnlockStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.SetUnlockData");

	UBPW_GenericSchematicRewardButton_C_SetUnlockData_Params params;
	params.mUnlockStruct = mUnlockStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_GenericSchematicRewardButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.Construct");

	UBPW_GenericSchematicRewardButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_GenericSchematicRewardButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBPW_GenericSchematicRewardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_GenericSchematicRewardButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBPW_GenericSchematicRewardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.ExecuteUbergraph_BPW_GenericSchematicRewardButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GenericSchematicRewardButton_C::ExecuteUbergraph_BPW_GenericSchematicRewardButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.ExecuteUbergraph_BPW_GenericSchematicRewardButton");

	UBPW_GenericSchematicRewardButton_C_ExecuteUbergraph_BPW_GenericSchematicRewardButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_NodeInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.GetResearchButtonFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_NodeInfo_C::GetResearchButtonFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.GetResearchButtonFeedback");

	UWidget_MAMTree_NodeInfo_C_GetResearchButtonFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_NodeInfo_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.UpdateState");

	UWidget_MAMTree_NodeInfo_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.SetSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_NodeInfo_C::SetSchematic(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.SetSchematic");

	UWidget_MAMTree_NodeInfo_C_SetSchematic_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_MAMTree_NodeInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.Construct");

	UWidget_MAMTree_NodeInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.BndEvt__mResearchButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_NodeInfo_C::BndEvt__mResearchButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.BndEvt__mResearchButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_MAMTree_NodeInfo_C_BndEvt__mResearchButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.ExecuteUbergraph_Widget_MAMTree_NodeInfo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_NodeInfo_C::ExecuteUbergraph_Widget_MAMTree_NodeInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.ExecuteUbergraph_Widget_MAMTree_NodeInfo");

	UWidget_MAMTree_NodeInfo_C_ExecuteUbergraph_Widget_MAMTree_NodeInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_NodeInfo_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_NodeInfo.Widget_MAMTree_NodeInfo_C.OnClicked__DelegateSignature");

	UWidget_MAMTree_NodeInfo_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

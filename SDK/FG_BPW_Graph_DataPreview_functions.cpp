// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_Graph_DataPreview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_Graph_DataPreview_C::SetValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetValue");

	UBPW_Graph_DataPreview_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetGraphID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 mTitle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_Graph_DataPreview_C::SetGraphID(class FString* mTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetGraphID");

	UBPW_Graph_DataPreview_C_SetGraphID_Params params;
	params.mTitle = mTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Graph_DataPreview_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.PreConstruct");

	UBPW_Graph_DataPreview_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_Graph_DataPreview_C::BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBPW_Graph_DataPreview_C_BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_Graph_DataPreview_C::BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBPW_Graph_DataPreview_C_BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.ExecuteUbergraph_BPW_Graph_DataPreview
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Graph_DataPreview_C::ExecuteUbergraph_BPW_Graph_DataPreview(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.ExecuteUbergraph_BPW_Graph_DataPreview");

	UBPW_Graph_DataPreview_C_ExecuteUbergraph_BPW_Graph_DataPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 GraphID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_Graph_DataPreview_C::OnUnhovered__DelegateSignature(class FString* GraphID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnUnhovered__DelegateSignature");

	UBPW_Graph_DataPreview_C_OnUnhovered__DelegateSignature_Params params;
	params.GraphID = GraphID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 GraphID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_Graph_DataPreview_C::OnHovered__DelegateSignature(class FString* GraphID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnHovered__DelegateSignature");

	UBPW_Graph_DataPreview_C_OnHovered__DelegateSignature_Params params;
	params.GraphID = GraphID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

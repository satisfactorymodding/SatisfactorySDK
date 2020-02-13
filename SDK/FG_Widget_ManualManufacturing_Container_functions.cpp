// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ManualManufacturing_Container_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_ManualManufacturing_Container_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.OnPreviewKeyDown");

	UWidget_ManualManufacturing_Container_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.SetWindowAlignment
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::SetWindowAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.SetWindowAlignment");

	UWidget_ManualManufacturing_Container_C_SetWindowAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.UpdateHeaderText
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::UpdateHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.UpdateHeaderText");

	UWidget_ManualManufacturing_Container_C_UpdateHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Cleanup");

	UWidget_ManualManufacturing_Container_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Destruct");

	UWidget_ManualManufacturing_Container_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Init");

	UWidget_ManualManufacturing_Container_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.Construct");

	UWidget_ManualManufacturing_Container_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.LoopSmoke
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_Container_C::LoopSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.LoopSmoke");

	UWidget_ManualManufacturing_Container_C_LoopSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.BndEvt__mManufacturingWidget_K2Node_ComponentBoundEvent_0_OnRelevantClassesUpdated__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          relevantClasses                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_ManualManufacturing_Container_C::BndEvt__mManufacturingWidget_K2Node_ComponentBoundEvent_0_OnRelevantClassesUpdated__DelegateSignature(TArray<class UClass*>* relevantClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.BndEvt__mManufacturingWidget_K2Node_ComponentBoundEvent_0_OnRelevantClassesUpdated__DelegateSignature");

	UWidget_ManualManufacturing_Container_C_BndEvt__mManufacturingWidget_K2Node_ComponentBoundEvent_0_OnRelevantClassesUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (relevantClasses != nullptr)
		*relevantClasses = params.relevantClasses;
}


// Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.ExecuteUbergraph_Widget_ManualManufacturing_Container
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_Container_C::ExecuteUbergraph_Widget_ManualManufacturing_Container(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing_Container.Widget_ManualManufacturing_Container_C.ExecuteUbergraph_Widget_ManualManufacturing_Container");

	UWidget_ManualManufacturing_Container_C_ExecuteUbergraph_Widget_ManualManufacturing_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

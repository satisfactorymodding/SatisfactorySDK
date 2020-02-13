// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_GolfCart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_GolfCart.Widget_GolfCart_C.InitCallbacks
// (Private, BlueprintCallable, BlueprintEvent)

void UWidget_GolfCart_C::InitCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GolfCart.Widget_GolfCart_C.InitCallbacks");

	UWidget_GolfCart_C_InitCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GolfCart.Widget_GolfCart_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_GolfCart_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GolfCart.Widget_GolfCart_C.Init");

	UWidget_GolfCart_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GolfCart.Widget_GolfCart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_GolfCart_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GolfCart.Widget_GolfCart_C.Construct");

	UWidget_GolfCart_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GolfCart.Widget_GolfCart_C.BndEvt__mButtonPickUpMiner_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_GolfCart_C::BndEvt__mButtonPickUpMiner_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GolfCart.Widget_GolfCart_C.BndEvt__mButtonPickUpMiner_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_GolfCart_C_BndEvt__mButtonPickUpMiner_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GolfCart.Widget_GolfCart_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_GolfCart_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GolfCart.Widget_GolfCart_C.Destruct");

	UWidget_GolfCart_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_GolfCart.Widget_GolfCart_C.ExecuteUbergraph_Widget_GolfCart
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_GolfCart_C::ExecuteUbergraph_Widget_GolfCart(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_GolfCart.Widget_GolfCart_C.ExecuteUbergraph_Widget_GolfCart");

	UWidget_GolfCart_C_ExecuteUbergraph_Widget_GolfCart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

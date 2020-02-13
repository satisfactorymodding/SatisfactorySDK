// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ActorDetails_Container_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.SetShowPointer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowPointer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ActorDetails_Container_C::SetShowPointer(bool* ShowPointer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.SetShowPointer");

	UWidget_ActorDetails_Container_C_SetShowPointer_Params params;
	params.ShowPointer = ShowPointer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mTitle                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ActorDetails_Container_C::SetTitle(struct FText* mTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.SetTitle");

	UWidget_ActorDetails_Container_C_SetTitle_Params params;
	params.mTitle = mTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ActorDetails_Container_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.PreConstruct");

	UWidget_ActorDetails_Container_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ActorDetails_Container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.Construct");

	UWidget_ActorDetails_Container_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.ExecuteUbergraph_Widget_ActorDetails_Container
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ActorDetails_Container_C::ExecuteUbergraph_Widget_ActorDetails_Container(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.ExecuteUbergraph_Widget_ActorDetails_Container");

	UWidget_ActorDetails_Container_C_ExecuteUbergraph_Widget_ActorDetails_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

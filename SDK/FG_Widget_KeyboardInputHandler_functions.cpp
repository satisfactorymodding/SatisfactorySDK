// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_KeyboardInputHandler_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_KeyboardInputHandler_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.OnKeyUp");

	UWidget_KeyboardInputHandler_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.OnTextCommited
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_KeyboardInputHandler_C::OnTextCommited(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.OnTextCommited");

	UWidget_KeyboardInputHandler_C_OnTextCommited_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_KeyboardInputHandler_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.Construct");

	UWidget_KeyboardInputHandler_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.ExecuteUbergraph_Widget_KeyboardInputHandler
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_KeyboardInputHandler_C::ExecuteUbergraph_Widget_KeyboardInputHandler(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.ExecuteUbergraph_Widget_KeyboardInputHandler");

	UWidget_KeyboardInputHandler_C_ExecuteUbergraph_Widget_KeyboardInputHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

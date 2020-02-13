// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Bookmark_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Bookmark_Button.Widget_Bookmark_Button_C.BndEvt__mBookmarkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Bookmark_Button_C::BndEvt__mBookmarkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Bookmark_Button.Widget_Bookmark_Button_C.BndEvt__mBookmarkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_Bookmark_Button_C_BndEvt__mBookmarkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Bookmark_Button.Widget_Bookmark_Button_C.ExecuteUbergraph_Widget_Bookmark_Button
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Bookmark_Button_C::ExecuteUbergraph_Widget_Bookmark_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Bookmark_Button.Widget_Bookmark_Button_C.ExecuteUbergraph_Widget_Bookmark_Button");

	UWidget_Bookmark_Button_C_ExecuteUbergraph_Widget_Bookmark_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Bookmark_Button.Widget_Bookmark_Button_C.OnBookmarkButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Bookmark_Button_C::OnBookmarkButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Bookmark_Button.Widget_Bookmark_Button_C.OnBookmarkButtonClicked__DelegateSignature");

	UWidget_Bookmark_Button_C_OnBookmarkButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

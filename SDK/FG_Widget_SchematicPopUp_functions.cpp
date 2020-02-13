// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SchematicPopUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.CreateRewardIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Icon_Text                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_SchematicPopUp_C::CreateRewardIcon(class UTexture** Icon, struct FText* Icon_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.CreateRewardIcon");

	UWidget_SchematicPopUp_C_CreateRewardIcon_Params params;
	params.Icon = Icon;
	params.Icon_Text = Icon_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GenerateSchematicRewardIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_SchematicPopUp_C::GenerateSchematicRewardIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GenerateSchematicRewardIcons");

	UWidget_SchematicPopUp_C_GenerateSchematicRewardIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetRelevantRewardData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void UWidget_SchematicPopUp_C::GetRelevantRewardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetRelevantRewardData");

	UWidget_SchematicPopUp_C_GetRelevantRewardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Content
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_SchematicPopUp_C::Set_Stinger_Content()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Set Stinger Content");

	UWidget_SchematicPopUp_C_Set_Stinger_Content_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetSchematicUnlockedText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_SchematicPopUp_C::GetSchematicUnlockedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.GetSchematicUnlockedText");

	UWidget_SchematicPopUp_C_GetSchematicUnlockedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SchematicPopUp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.Construct");

	UWidget_SchematicPopUp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.OnSchematicPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SchematicPopUp_C::OnSchematicPurchased(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.OnSchematicPurchased");

	UWidget_SchematicPopUp_C_OnSchematicPurchased_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.ExecuteUbergraph_Widget_SchematicPopUp
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SchematicPopUp_C::ExecuteUbergraph_Widget_SchematicPopUp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SchematicPopUp.Widget_SchematicPopUp_C.ExecuteUbergraph_Widget_SchematicPopUp");

	UWidget_SchematicPopUp_C_ExecuteUbergraph_Widget_SchematicPopUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

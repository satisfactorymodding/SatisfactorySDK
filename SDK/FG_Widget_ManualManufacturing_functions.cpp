// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ManualManufacturing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateRelevantClasses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::UpdateRelevantClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateRelevantClasses");

	UWidget_ManualManufacturing_C_UpdateRelevantClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_ManualManufacturing_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnMouseButtonDown");

	UWidget_ManualManufacturing_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateAffordableCategories
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::UpdateAffordableCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateAffordableCategories");

	UWidget_ManualManufacturing_C_UpdateAffordableCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCategoryWidgetFromRecipe
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_CraftBench_Category_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget_CraftBench_Category_C* UWidget_ManualManufacturing_C::GetCategoryWidgetFromRecipe(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCategoryWidgetFromRecipe");

	UWidget_ManualManufacturing_C_GetCategoryWidgetFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.AddUniqueRecipe
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemCategoryRecipeStruct> CategorizedRecipes             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::AddUniqueRecipe(class UClass** Recipe, TArray<struct FItemCategoryRecipeStruct>* CategorizedRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.AddUniqueRecipe");

	UWidget_ManualManufacturing_C_AddUniqueRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategorizedRecipes != nullptr)
		*CategorizedRecipes = params.CategorizedRecipes;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ClearAndHideSearchResults
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::ClearAndHideSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ClearAndHideSearchResults");

	UWidget_ManualManufacturing_C_ClearAndHideSearchResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnSearchCreateResults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ManualManufacturing_C::OnSearchCreateResults(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnSearchCreateResults");

	UWidget_ManualManufacturing_C_OnSearchCreateResults_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowOnlyAffordableRecipes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OnlyShowAffordable             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::ShowOnlyAffordableRecipes(bool* OnlyShowAffordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowOnlyAffordableRecipes");

	UWidget_ManualManufacturing_C_ShowOnlyAffordableRecipes_Params params;
	params.OnlyShowAffordable = OnlyShowAffordable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SpaceBarOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::SpaceBarOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SpaceBarOverride");

	UWidget_ManualManufacturing_C_SpaceBarOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopCraftingOverride
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::StopCraftingOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopCraftingOverride");

	UWidget_ManualManufacturing_C_StopCraftingOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_ManualManufacturing_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnPreviewKeyDown");

	UWidget_ManualManufacturing_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateCategoryHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           InScrollbox                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          mIsCollapsed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_CraftBench_Category_C* Category_Widget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_ManualManufacturing_C::CreateCategoryHeader(class UPanelWidget** InScrollbox, struct FText* Name, bool* mIsCollapsed, class UWidget_CraftBench_Category_C** Category_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateCategoryHeader");

	UWidget_ManualManufacturing_C_CreateCategoryHeader_Params params;
	params.InScrollbox = InScrollbox;
	params.Name = Name;
	params.mIsCollapsed = mIsCollapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category_Widget != nullptr)
		*Category_Widget = params.Category_Widget;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateLeds
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::UpdateLeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateLeds");

	UWidget_ManualManufacturing_C_UpdateLeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateWarningWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::UpdateWarningWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateWarningWidget");

	UWidget_ManualManufacturing_C_UpdateWarningWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCalculatedCurve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::GetCalculatedCurve(float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCalculatedCurve");

	UWidget_ManualManufacturing_C_GetCalculatedCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowCurrentOutput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManualManufacturing_C::ShowCurrentOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowCurrentOutput");

	UWidget_ManualManufacturing_C_ShowCurrentOutput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProductionStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::UpdateProductionStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProductionStats");

	UWidget_ManualManufacturing_C_UpdateProductionStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProgressBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::UpdateProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProgressBar");

	UWidget_ManualManufacturing_C_UpdateProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftButtonFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::GetCraftButtonFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftButtonFeedback");

	UWidget_ManualManufacturing_C_GetCraftButtonFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CloseVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::CloseVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CloseVehicle");

	UWidget_ManualManufacturing_C_CloseVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetInfoboxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManualManufacturing_C::GetInfoboxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetInfoboxVisibility");

	UWidget_ManualManufacturing_C_GetInfoboxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftingFeedbackVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManualManufacturing_C::GetCraftingFeedbackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftingFeedbackVisibility");

	UWidget_ManualManufacturing_C_GetCraftingFeedbackVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetWorkingAtWorkbenchOnServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGPlayerController**    FGPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::SetWorkingAtWorkbenchOnServer(class AFGPlayerController** FGPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetWorkingAtWorkbenchOnServer");

	UWidget_ManualManufacturing_C_SetWorkingAtWorkbenchOnServer_Params params;
	params.FGPlayerController = FGPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::OnCraftCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftCompleted");

	UWidget_ManualManufacturing_C_OnCraftCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateInfoBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mRecipe                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::CreateInfoBox(class UClass** mRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateInfoBox");

	UWidget_ManualManufacturing_C_CreateInfoBox_Params params;
	params.mRecipe = mRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Cleanup");

	UWidget_ManualManufacturing_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetAvailableRecipes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          AvailableRecipes               (Parm, OutParm, ZeroConstructor)

void UWidget_ManualManufacturing_C::GetAvailableRecipes(TArray<class UClass*>* AvailableRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetAvailableRecipes");

	UWidget_ManualManufacturing_C_GetAvailableRecipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableRecipes != nullptr)
		*AvailableRecipes = params.AvailableRecipes;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetSelectedRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mRecipe                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::SetSelectedRecipe(class UClass** mRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetSelectedRecipe");

	UWidget_ManualManufacturing_C_SetSelectedRecipe_Params params;
	params.mRecipe = mRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitRecipeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::InitRecipeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitRecipeList");

	UWidget_ManualManufacturing_C_InitRecipeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ManualManufacturing_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Destruct");

	UWidget_ManualManufacturing_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ManualManufacturing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Construct");

	UWidget_ManualManufacturing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetupProductionMode
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::SetupProductionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetupProductionMode");

	UWidget_ManualManufacturing_C_SetupProductionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnNewRecipeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mNewRecipe                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::OnNewRecipeSet(class UClass** mNewRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnNewRecipeSet");

	UWidget_ManualManufacturing_C_OnNewRecipeSet_Params params;
	params.mNewRecipe = mNewRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Init");

	UWidget_ManualManufacturing_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartProducing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         dt                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::StartProducing(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartProducing");

	UWidget_ManualManufacturing_C_StartProducing_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EndProducing
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::EndProducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EndProducing");

	UWidget_ManualManufacturing_C_EndProducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Tick");

	UWidget_ManualManufacturing_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftingProgressbarAnimationLoop
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::OnCraftingProgressbarAnimationLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftingProgressbarAnimationLoop");

	UWidget_ManualManufacturing_C_OnCraftingProgressbarAnimationLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopSuperClick
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::StopSuperClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopSuperClick");

	UWidget_ManualManufacturing_C_StopSuperClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartSuperClick
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::StartSuperClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartSuperClick");

	UWidget_ManualManufacturing_C_StartSuperClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.IncreaseGlow
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::IncreaseGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.IncreaseGlow");

	UWidget_ManualManufacturing_C_IncreaseGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.DecreseGlow
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::DecreseGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.DecreseGlow");

	UWidget_ManualManufacturing_C_DecreseGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Shake
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::Shake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Shake");

	UWidget_ManualManufacturing_C_Shake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EmptyBar
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::EmptyBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EmptyBar");

	UWidget_ManualManufacturing_C_EmptyBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.FadeBar
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::FadeBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.FadeBar");

	UWidget_ManualManufacturing_C_FadeBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.WarningMessageCheck
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::WarningMessageCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.WarningMessageCheck");

	UWidget_ManualManufacturing_C_WarningMessageCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ProductionStartupDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ProduceSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::ProductionStartupDelay(float* ProduceSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ProductionStartupDelay");

	UWidget_ManualManufacturing_C_ProductionStartupDelay_Params params;
	params.ProduceSpeed = ProduceSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayLEDSound
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::PlayLEDSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayLEDSound");

	UWidget_ManualManufacturing_C_PlayLEDSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowAddedToInventory
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::ShowAddedToInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowAddedToInventory");

	UWidget_ManualManufacturing_C_ShowAddedToInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.HideAddedToInventoryEvent
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::HideAddedToInventoryEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.HideAddedToInventoryEvent");

	UWidget_ManualManufacturing_C_HideAddedToInventoryEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_ManualManufacturing_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ManualManufacturing_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature");

	UWidget_ManualManufacturing_C_BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ManualManufacturing_C::BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature");

	UWidget_ManualManufacturing_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitOnlyShowAffordable
// (BlueprintCallable, BlueprintEvent)

void UWidget_ManualManufacturing_C::InitOnlyShowAffordable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitOnlyShowAffordable");

	UWidget_ManualManufacturing_C_InitOnlyShowAffordable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_CraftBench_Category_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_ManualManufacturing_C::OnCategoryClicked(class UWidget_CraftBench_Category_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCategoryClicked");

	UWidget_ManualManufacturing_C_OnCategoryClicked_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ExecuteUbergraph_Widget_ManualManufacturing
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManualManufacturing_C::ExecuteUbergraph_Widget_ManualManufacturing(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ExecuteUbergraph_Widget_ManualManufacturing");

	UWidget_ManualManufacturing_C_ExecuteUbergraph_Widget_ManualManufacturing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnRelevantClassesUpdated__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          relevantClasses                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_ManualManufacturing_C::OnRelevantClassesUpdated__DelegateSignature(TArray<class UClass*>* relevantClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnRelevantClassesUpdated__DelegateSignature");

	UWidget_ManualManufacturing_C_OnRelevantClassesUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (relevantClasses != nullptr)
		*relevantClasses = params.relevantClasses;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

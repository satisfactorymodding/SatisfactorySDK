// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Manufacturing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Manufacturing.Widget_Manufacturing_C.GetCylceProducedAndNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Manufacturing_C::GetCylceProducedAndNameText(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.GetCylceProducedAndNameText");

	UWidget_Manufacturing_C_GetCylceProducedAndNameText_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.CreateCategoryHeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  CategoryName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsCollapsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_CraftBench_Category_C* Category_Widget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Manufacturing_C::CreateCategoryHeader(class UPanelWidget** Container, struct FText* CategoryName, bool* IsCollapsed, class UWidget_CraftBench_Category_C** Category_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.CreateCategoryHeader");

	UWidget_Manufacturing_C_CreateCategoryHeader_Params params;
	params.Container = Container;
	params.CategoryName = CategoryName;
	params.IsCollapsed = IsCollapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category_Widget != nullptr)
		*Category_Widget = params.Category_Widget;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.AddUniqueRecipe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemCategoryRecipeStruct> CategorizedRecipes             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::AddUniqueRecipe(class UClass** Recipe, TArray<struct FItemCategoryRecipeStruct>* CategorizedRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.AddUniqueRecipe");

	UWidget_Manufacturing_C_AddUniqueRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategorizedRecipes != nullptr)
		*CategorizedRecipes = params.CategorizedRecipes;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.GenerateOutputSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::GenerateOutputSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.GenerateOutputSlots");

	UWidget_Manufacturing_C_GenerateOutputSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.SetActivatedRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mActivatedRecipe               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::SetActivatedRecipe(class UClass** mActivatedRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.SetActivatedRecipe");

	UWidget_Manufacturing_C_SetActivatedRecipe_Params params;
	params.mActivatedRecipe = mActivatedRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.ReconstructIOSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::ReconstructIOSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.ReconstructIOSlots");

	UWidget_Manufacturing_C_ReconstructIOSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.DropInventorySlotStack");

	UWidget_Manufacturing_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateWindowText
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::UpdateWindowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateWindowText");

	UWidget_Manufacturing_C_UpdateWindowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.GetItemAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAmount             ItemAmount                     (Parm, OutParm)

void UWidget_Manufacturing_C::GetItemAmount(class UClass** Recipe, struct FItemAmount* ItemAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.GetItemAmount");

	UWidget_Manufacturing_C_GetItemAmount_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemAmount != nullptr)
		*ItemAmount = params.ItemAmount;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.GetManufacturingWarningVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableManufacturer** buildableManufacturer          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::GetManufacturingWarningVisibility(class AFGBuildableManufacturer** buildableManufacturer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.GetManufacturingWarningVisibility");

	UWidget_Manufacturing_C_GetManufacturingWarningVisibility_Params params;
	params.buildableManufacturer = buildableManufacturer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateProductionStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::UpdateProductionStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateProductionStats");

	UWidget_Manufacturing_C_UpdateProductionStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateOutputSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::UpdateOutputSlotInfo(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateOutputSlotInfo");

	UWidget_Manufacturing_C_UpdateOutputSlotInfo_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateProductivityPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::UpdateProductivityPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateProductivityPercentage");

	UWidget_Manufacturing_C_UpdateProductivityPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.GetPotentialButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_Manufacturing_C::GetPotentialButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.GetPotentialButton");

	UWidget_Manufacturing_C_GetPotentialButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.CreateInfoBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::CreateInfoBox(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.CreateInfoBox");

	UWidget_Manufacturing_C_CreateInfoBox_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::OnManufacturingRecipeClicked(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeClicked");

	UWidget_Manufacturing_C_OnManufacturingRecipeClicked_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnStopHoveringManufacturingRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::OnStopHoveringManufacturingRecipe(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnStopHoveringManufacturingRecipe");

	UWidget_Manufacturing_C_OnStopHoveringManufacturingRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::OnManufacturingRecipeHovered(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeHovered");

	UWidget_Manufacturing_C_OnManufacturingRecipeHovered_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.GetIsInfoButtonTabEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_Manufacturing_C::GetIsInfoButtonTabEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.GetIsInfoButtonTabEnabled");

	UWidget_Manufacturing_C_GetIsInfoButtonTabEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.RemoveInputSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::RemoveInputSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.RemoveInputSlot");

	UWidget_Manufacturing_C_RemoveInputSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.AddInputSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::AddInputSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.AddInputSlot");

	UWidget_Manufacturing_C_AddInputSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateIOSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::UpdateIOSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateIOSlots");

	UWidget_Manufacturing_C_UpdateIOSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.SetSelectedRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::SetSelectedRecipe(class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.SetSelectedRecipe");

	UWidget_Manufacturing_C_SetSelectedRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.InitRecipeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Manufacturing_C::InitRecipeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.InitRecipeList");

	UWidget_Manufacturing_C_InitRecipeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_12_OnStandbyClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_Manufacturing_C::BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_12_OnStandbyClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_12_OnStandbyClicked__DelegateSignature");

	UWidget_Manufacturing_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_12_OnStandbyClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.Tick");

	UWidget_Manufacturing_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnNewRecipeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 newRecipe                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::OnNewRecipeSet(class UClass** newRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnNewRecipeSet");

	UWidget_Manufacturing_C_OnNewRecipeSet_Params params;
	params.newRecipe = newRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Manufacturing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.Construct");

	UWidget_Manufacturing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Manufacturing_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.Destruct");

	UWidget_Manufacturing_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UWidget_Manufacturing_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UWidget_Manufacturing_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature");

	UWidget_Manufacturing_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnReplicationDetailActorReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 replicationDetailActorOwner    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::OnReplicationDetailActorReplicated(class AActor** replicationDetailActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnReplicationDetailActorReplicated");

	UWidget_Manufacturing_C_OnReplicationDetailActorReplicated_Params params;
	params.replicationDetailActorOwner = replicationDetailActorOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnCategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_CraftBench_Category_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Manufacturing_C::OnCategoryClicked(class UWidget_CraftBench_Category_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnCategoryClicked");

	UWidget_Manufacturing_C_OnCategoryClicked_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnModifierPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      owningWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Manufacturing_C::OnModifierPressed(class UFGInteractWidget** owningWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnModifierPressed");

	UWidget_Manufacturing_C_OnModifierPressed_Params params;
	params.owningWidget = owningWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_Manufacturing_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.Init");

	UWidget_Manufacturing_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.OnModifierReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInteractWidget**      owningWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Manufacturing_C::OnModifierReleased(class UFGInteractWidget** owningWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.OnModifierReleased");

	UWidget_Manufacturing_C_OnModifierReleased_Params params;
	params.owningWidget = owningWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Manufacturing.Widget_Manufacturing_C.ExecuteUbergraph_Widget_Manufacturing
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Manufacturing_C::ExecuteUbergraph_Widget_Manufacturing(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing.Widget_Manufacturing_C.ExecuteUbergraph_Widget_Manufacturing");

	UWidget_Manufacturing_C_ExecuteUbergraph_Widget_Manufacturing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

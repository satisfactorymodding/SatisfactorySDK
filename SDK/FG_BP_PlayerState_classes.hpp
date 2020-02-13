#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_PlayerState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// 0x0054 (0x05AC - 0x0558)
class ABP_PlayerState_C : public AFGPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceivedChatMessage;                                      // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FLinearColor>                        mSavedColorPickerColors;                                  // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FRecipeAmountStruct>                 mShoppingList;                                            // 0x0588(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	struct FScriptMulticastDelegate                    OnShoppingListUpdated;                                    // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                mLastSchematicTierInUI;                                   // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C");
		return ptr;
	}


	void ClearShoppingList();
	void ShoppingListUpdated();
	void OnRep_mShoppingList();
	int GetShoppingListSortIndex(struct FRecipeAmountStruct* RecipeAmountStruct);
	void SortShoppingList();
	void SetNumRecipeInShoppingList(class UClass** Recipe, int* NumRecipes);
	void PonderUpdatingShoppingList(class UClass** InputPin);
	void AddRecipeToShoppingList(class UClass** Recipe, int* NumRecipes);
	void RemoveRecipeFromShoppingList(class UClass** Recipe, int* NumRecipes);
	void ReceiveBeginPlay();
	void BroadcastChatMessage(struct FText* ChatMessageIn);
	void ReceiveChatMessage(struct FText* ChatMessageIn, struct FText* ChatSender);
	void OnBuildableConstructed(class UClass** itemDescriptor);
	void Server_AddRecipeToShoppingList(class UClass** Recipe, int* NumRecipes);
	void Server_SetNumRecipesInShoppingList(class UClass** Recipe, int* NumRecipes);
	void Server_RemoveRecupeFromShoppingList(class UClass** Recipe, int* NumRecipes);
	void ReceiveTick(float* DeltaSeconds);
	void Server_ClearShoppingList();
	void ExecuteUbergraph_BP_PlayerState(int* EntryPoint);
	void OnShoppingListUpdated__DelegateSignature();
	void ReceivedChatMessage__DelegateSignature(struct FText* ChatSender, struct FText* ChatMessage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

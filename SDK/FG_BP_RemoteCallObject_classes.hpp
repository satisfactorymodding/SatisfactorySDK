#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_RemoteCallObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RemoteCallObject.BP_RemoteCallObject_C
// 0x000C (0x0034 - 0x0028)
class UBP_RemoteCallObject_C : public UFGRemoteCallObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                numToPayOff;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemoteCallObject.BP_RemoteCallObject_C");
		return ptr;
	}


	void GetRemainingCostForSchematic(class UClass** schematic, class UClass** ForItem, int* Cost);
	void Server_SetRecipeOnManufacturingProxy(class AFGBuildableManufacturer** Manufacturer, class UClass** Recipe);
	void Server_SplitResource(class UFGInventoryComponent** inventoryComponent, int* sourceIdx, int* numResourceToMove);
	void Server_MoveItem(class UFGInventoryComponent** SourceComponent, class UFGInventoryComponent** destinationComponent, int* sourceIdx, int* destinationIdx);
	void Server_MoveItemIfSpace(class UFGInventoryComponent** SourceComponent, int* sourceIdx, class UFGInventoryComponent** destinationComponent);
	void ServerSetWorkingAtBench(class AFGPlayerController** PlayerWorking, class UFGWorkBench** ResearchMachine);
	void PlayDismantlePortableMinerEffects();
	void ServerExtractResourceToPlayer(class AFGResourceNode** resourceNode, class AFGCharacterPlayer** Player, int* amount);
	void Server_RemoveAllFromIndex(class UFGInventoryComponent** SourceComponent, int* sourceIdx);
	void ServerPickUpBeacon(class AFGBeacon** Beacon, class AFGCharacterPlayer** toPlayer);
	void Server_DropItem(class UFGInventoryComponent** inventoryComponent, int* sourceIdx, struct FVector* SpawnLocation, struct FRotator* spawnRotation);
	void Server_RemoveIngredientsAndAwardRewards(class UFGWorkBench** Workbench, class UFGInventoryComponent** inventory, class UClass** Recipe);
	void ServerSetPendingPotentialOnFactory(class AFGBuildableFactory** FACTORY, float* newPotential);
	void ServerOpenVehicleTrunk(class AFGWheeledVehicle** inVehicle, class AFGCharacterPlayer** inPlayer);
	void ServerRegisterInteractingPlayerOnUseInterface(class UObject** interactObject, class AFGCharacterPlayer** Player);
	void ServerUnregisterInteractingPlayerOnUseInterface(class UObject** interactObject, class AFGCharacterPlayer** Player);
	void Server_RemoveNumFromIndex(class UFGInventoryComponent** SourceComponent, int* sourceIdx, int* NumToRemove);
	void Server_PayOffOnSchematic(class UClass** schematic, class UFGInventoryComponent** FromInventoryComponent, int* idx);
	void Server_LaunchShip();
	void ServerDismantlePortableMiner(class AFGPortableMiner** inPortableMiner);
	void Server_ResetFuse(int* circuitID);
	void ServerRemoveTargetPoint(class AFGTargetPoint** inTargetPoint, class AFGWheeledVehicle** inVehicle);
	void Server_ResizeInventory(int* newSize, class UFGInventoryComponent** inInventoryComp);
	void Server_PayOffTowTruckUpgrade(class AFGBuildableSpaceElevator** SpaceElevator, class UFGInventoryComponent** inventory, int* inventorySlotIndex);
	void ServerCloseVehicleTrunk(class AFGWheeledVehicle** inVehicle, class AFGCharacterPlayer** inPlayer);
	void Server_SetTrainStationName(class AFGTrainStationIdentifier** Station, struct FText* Name);
	void Server_RemoveSortRule(class AFGBuildableSplitterSmart** Splitter_Smart, int* Index);
	void Server_GrabAllItemsFromInventory(class UFGInventoryComponent** SourceComponent, class UFGInventoryComponent** destinationComponent, class UClass** onlyGrabOfDesc);
	void Server_RepairDropPod(class AFGDropPod** DropPod, class AFGCharacterPlayer** byCharacter);
	void Server_UpdateSortRule(class AFGBuildableSplitterSmart** SplitterSmart, int* Index, struct FSplitterSortRule* Rule);
	void Server_SetLoadModeOnDockingStation(class AFGBuildableDockingStation** DockingStation, bool* isInLoadMode);
	void Server_AddSortRule(class AFGBuildableSplitterSmart** SplitterSmart, struct FSplitterSortRule* Rule);
	void Server_SetIsProductionPausedOnFactory(class AFGBuildableFactory** FACTORY, bool* IsProductionPaused);
	void ServerSetActiveSchematic(class UClass** newActiveSchematic);
	void Client_RemovePawnHUD();
	void Client_AddPawnHUD(class UClass** HUDClass, class APawn** Pawn);
	void Server_SpaceElevatorUpgradePressed(class AFGBuildableSpaceElevator** SpaceElevator);
	void Server_LaunchTowTruck(class AFGBuildableSpaceElevator** SpaceElevator);
	void Server_UpdateTutorial(EIntroTutorialSteps* newTutorialID, class AFGTutorialIntroManager** introManager);
	void Client_PlayTradingPostSequence(class AFGBuildableTradingPost** Tradingpost);
	void ServerSetUsingMAM(class AFGPlayerController** PlayerWorking, class UFGResearchMachine** ResearchMachine);
	void ServerInitiateResearch(class AFGResearchManager** ResearchManager, class UFGInventoryComponent** playerInventory, class UClass** schematic, class UClass** InitiatingResearchTree);
	void ServerClaimResearchResults(class AFGResearchManager** ResearchManager, class AFGCharacterPlayer** instigatorPlayer, class UClass** schematic, int* selectedRewardIndex);
	void ServerSetWaitTime(class AFGTargetPoint** inTargetPoint, float* newWaitTime);
	void Server_SetStandaloneSignData(TScriptInterface<class UFGSignInterface>* SignInterface, struct FSignData* SignData, bool* Update);
	void Server_SetSignWallData(class AFGBuildableSignWall** SignWall, struct FSignWallData* SignData, bool* Update);
	void Server_SortInventory(class UFGInventoryComponent** inventoryComponent);
	void Server_DropItemIntoStack(class UFGInventoryComponent** inventoryComponent, int* sourceIdx, struct FVector* SpawnLocation, struct FRotator* spawnRotation);
	void Server_SetLoadModeOnTrainCargoPlatform(class AFGBuildableTrainPlatformCargo** CargoPlatform, bool* isInLoadMode);
	void Server_SetTimeTableStops(class AFGRailroadTimeTable** TimeTable, TArray<struct FTimeTableStop>* stops);
	void Server_SetTimeTableCurrentStop(class AFGRailroadTimeTable** TimeTable, int* Index);
	void Server_SetActorCompassViewDistance(class AActor** Actor, ECompassViewDistance* compassViewDistance);
	void Internal_Server_SetActorRepresentationCompassViewDistance(class UFGActorRepresentation** actorRepresentation, ECompassViewDistance* compassViewDistance);
	void SetActorRepresentationCompassViewDistance(class UFGActorRepresentation** actorRepresentation, ECompassViewDistance* compassViewDistance);
	void Server_SetTrainName(class AFGTrain** Train, struct FText* Name);
	void Server_SetTrainSelfDrivingEnabled(class AFGTrain** Train, bool* IsSelfDriving);
	void Server_DockTrain(class AFGTrain** Train);
	void Server_SetActorRepresentationText(class AActor** Actor, struct FText* Text);
	void Server_SetActorRepresentationColor(class AActor** Actor, struct FLinearColor* NewColor);
	void Server_PurchaseResourceSinkSchematics(class AFGBuildableResourceSinkShop** ResourceSinkShop, class UFGInventoryComponent** playerInventory, TArray<class UClass*>* Schematics);
	void Server_ClaimCoupons(class AFGBuildableResourceSink** RESOURCESINK, int* numCoupons);
	void Server_ReturnUnclaimedCoupons(class AFGBuildableResourceSink** RESOURCESINK);
	void ServerDismantleGolfCart(class AFGWheeledVehicle** inGolfCart);
	void Server_FlushPipeNetwork(class AActor** integrantActor);
	void Server_FlushIntegrant(class AActor** integrantActor);
	void ExecuteUbergraph_BP_RemoteCallObject(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

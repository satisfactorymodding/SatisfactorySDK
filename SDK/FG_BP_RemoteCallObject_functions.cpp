// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_RemoteCallObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RemoteCallObject.BP_RemoteCallObject_C.GetRemainingCostForSchematic
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ForItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::GetRemainingCostForSchematic(class UClass** schematic, class UClass** ForItem, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.GetRemainingCostForSchematic");

	UBP_RemoteCallObject_C_GetRemainingCostForSchematic_Params params;
	params.schematic = schematic;
	params.ForItem = ForItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetRecipeOnManufacturingProxy
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableManufacturer** Manufacturer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetRecipeOnManufacturingProxy(class AFGBuildableManufacturer** Manufacturer, class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetRecipeOnManufacturingProxy");

	UBP_RemoteCallObject_C_Server_SetRecipeOnManufacturingProxy_Params params;
	params.Manufacturer = Manufacturer;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SplitResource
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           numResourceToMove              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SplitResource(class UFGInventoryComponent** InventoryComponent, int* sourceIdx, int* numResourceToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SplitResource");

	UBP_RemoteCallObject_C_Server_SplitResource_Params params;
	params.InventoryComponent = InventoryComponent;
	params.sourceIdx = sourceIdx;
	params.numResourceToMove = numResourceToMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  destinationComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           destinationIdx                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_MoveItem(class UFGInventoryComponent** SourceComponent, class UFGInventoryComponent** destinationComponent, int* sourceIdx, int* destinationIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItem");

	UBP_RemoteCallObject_C_Server_MoveItem_Params params;
	params.SourceComponent = SourceComponent;
	params.destinationComponent = destinationComponent;
	params.sourceIdx = sourceIdx;
	params.destinationIdx = destinationIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItemIfSpace
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInventoryComponent**  destinationComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_MoveItemIfSpace(class UFGInventoryComponent** SourceComponent, int* sourceIdx, class UFGInventoryComponent** destinationComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItemIfSpace");

	UBP_RemoteCallObject_C_Server_MoveItemIfSpace_Params params;
	params.SourceComponent = SourceComponent;
	params.sourceIdx = sourceIdx;
	params.destinationComponent = destinationComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWorkingAtBench
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGPlayerController**    PlayerWorking                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGWorkBench**           ResearchMachine                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerSetWorkingAtBench(class AFGPlayerController** PlayerWorking, class UFGWorkBench** ResearchMachine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWorkingAtBench");

	UBP_RemoteCallObject_C_ServerSetWorkingAtBench_Params params;
	params.PlayerWorking = PlayerWorking;
	params.ResearchMachine = ResearchMachine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.PlayDismantlePortableMinerEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_RemoteCallObject_C::PlayDismantlePortableMinerEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.PlayDismantlePortableMinerEffects");

	UBP_RemoteCallObject_C_PlayDismantlePortableMinerEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerExtractResourceToPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGResourceNode**        resourceNode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerExtractResourceToPlayer(class AFGResourceNode** resourceNode, class AFGCharacterPlayer** Player, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerExtractResourceToPlayer");

	UBP_RemoteCallObject_C_ServerExtractResourceToPlayer_Params params;
	params.resourceNode = resourceNode;
	params.Player = Player;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAllFromIndex
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_RemoveAllFromIndex(class UFGInventoryComponent** SourceComponent, int* sourceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAllFromIndex");

	UBP_RemoteCallObject_C_Server_RemoveAllFromIndex_Params params;
	params.SourceComponent = SourceComponent;
	params.sourceIdx = sourceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerPickUpBeacon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBeacon**              Beacon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     toPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerPickUpBeacon(class AFGBeacon** Beacon, class AFGCharacterPlayer** toPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerPickUpBeacon");

	UBP_RemoteCallObject_C_ServerPickUpBeacon_Params params;
	params.Beacon = Beacon;
	params.toPlayer = toPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               spawnRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_DropItem(class UFGInventoryComponent** InventoryComponent, int* sourceIdx, struct FVector* SpawnLocation, struct FRotator* spawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItem");

	UBP_RemoteCallObject_C_Server_DropItem_Params params;
	params.InventoryComponent = InventoryComponent;
	params.sourceIdx = sourceIdx;
	params.SpawnLocation = SpawnLocation;
	params.spawnRotation = spawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveIngredientsAndAwardRewards
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGWorkBench**           Workbench                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_RemoveIngredientsAndAwardRewards(class UFGWorkBench** Workbench, class UFGInventoryComponent** inventory, class UClass** Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveIngredientsAndAwardRewards");

	UBP_RemoteCallObject_C_Server_RemoveIngredientsAndAwardRewards_Params params;
	params.Workbench = Workbench;
	params.inventory = inventory;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetPendingPotentialOnFactory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableFactory**    FACTORY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         newPotential                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerSetPendingPotentialOnFactory(class AFGBuildableFactory** FACTORY, float* newPotential)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetPendingPotentialOnFactory");

	UBP_RemoteCallObject_C_ServerSetPendingPotentialOnFactory_Params params;
	params.FACTORY = FACTORY;
	params.newPotential = newPotential;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerOpenVehicleTrunk
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGWheeledVehicle**      inVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     inPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerOpenVehicleTrunk(class AFGWheeledVehicle** inVehicle, class AFGCharacterPlayer** inPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerOpenVehicleTrunk");

	UBP_RemoteCallObject_C_ServerOpenVehicleTrunk_Params params;
	params.inVehicle = inVehicle;
	params.inPlayer = inPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRegisterInteractingPlayerOnUseInterface
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                interactObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerRegisterInteractingPlayerOnUseInterface(class UObject** interactObject, class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRegisterInteractingPlayerOnUseInterface");

	UBP_RemoteCallObject_C_ServerRegisterInteractingPlayerOnUseInterface_Params params;
	params.interactObject = interactObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerUnregisterInteractingPlayerOnUseInterface
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                interactObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerUnregisterInteractingPlayerOnUseInterface(class UObject** interactObject, class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerUnregisterInteractingPlayerOnUseInterface");

	UBP_RemoteCallObject_C_ServerUnregisterInteractingPlayerOnUseInterface_Params params;
	params.interactObject = interactObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveNumFromIndex
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumToRemove                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_RemoveNumFromIndex(class UFGInventoryComponent** SourceComponent, int* sourceIdx, int* NumToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveNumFromIndex");

	UBP_RemoteCallObject_C_Server_RemoveNumFromIndex_Params params;
	params.SourceComponent = SourceComponent;
	params.sourceIdx = sourceIdx;
	params.NumToRemove = NumToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffOnSchematic
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInventoryComponent**  FromInventoryComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_PayOffOnSchematic(class UClass** schematic, class UFGInventoryComponent** FromInventoryComponent, int* idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffOnSchematic");

	UBP_RemoteCallObject_C_Server_PayOffOnSchematic_Params params;
	params.schematic = schematic;
	params.FromInventoryComponent = FromInventoryComponent;
	params.idx = idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchShip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_RemoteCallObject_C::Server_LaunchShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchShip");

	UBP_RemoteCallObject_C_Server_LaunchShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantlePortableMiner
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGPortableMiner**       inPortableMiner                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerDismantlePortableMiner(class AFGPortableMiner** inPortableMiner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantlePortableMiner");

	UBP_RemoteCallObject_C_ServerDismantlePortableMiner_Params params;
	params.inPortableMiner = inPortableMiner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResetFuse
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           circuitID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_ResetFuse(int* circuitID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResetFuse");

	UBP_RemoteCallObject_C_Server_ResetFuse_Params params;
	params.circuitID = circuitID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRemoveTargetPoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTargetPoint**         inTargetPoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGWheeledVehicle**      inVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerRemoveTargetPoint(class AFGTargetPoint** inTargetPoint, class AFGWheeledVehicle** inVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRemoveTargetPoint");

	UBP_RemoteCallObject_C_ServerRemoveTargetPoint_Params params;
	params.inTargetPoint = inTargetPoint;
	params.inVehicle = inVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResizeInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           newSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInventoryComponent**  inInventoryComp                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_ResizeInventory(int* newSize, class UFGInventoryComponent** inInventoryComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResizeInventory");

	UBP_RemoteCallObject_C_Server_ResizeInventory_Params params;
	params.newSize = newSize;
	params.inInventoryComp = inInventoryComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffTowTruckUpgrade
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSpaceElevator** SpaceElevator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInventoryComponent**  inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           inventorySlotIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_PayOffTowTruckUpgrade(class AFGBuildableSpaceElevator** SpaceElevator, class UFGInventoryComponent** inventory, int* inventorySlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffTowTruckUpgrade");

	UBP_RemoteCallObject_C_Server_PayOffTowTruckUpgrade_Params params;
	params.SpaceElevator = SpaceElevator;
	params.inventory = inventory;
	params.inventorySlotIndex = inventorySlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerCloseVehicleTrunk
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGWheeledVehicle**      inVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     inPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerCloseVehicleTrunk(class AFGWheeledVehicle** inVehicle, class AFGCharacterPlayer** inPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerCloseVehicleTrunk");

	UBP_RemoteCallObject_C_ServerCloseVehicleTrunk_Params params;
	params.inVehicle = inVehicle;
	params.inPlayer = inPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainStationName
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrainStationIdentifier** Station                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemoteCallObject_C::Server_SetTrainStationName(class AFGTrainStationIdentifier** Station, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainStationName");

	UBP_RemoteCallObject_C_Server_SetTrainStationName_Params params;
	params.Station = Station;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveSortRule
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSplitterSmart** Splitter_Smart                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_RemoveSortRule(class AFGBuildableSplitterSmart** Splitter_Smart, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveSortRule");

	UBP_RemoteCallObject_C_Server_RemoveSortRule_Params params;
	params.Splitter_Smart = Splitter_Smart;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_GrabAllItemsFromInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  SourceComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  destinationComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 onlyGrabOfDesc                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_GrabAllItemsFromInventory(class UFGInventoryComponent** SourceComponent, class UFGInventoryComponent** destinationComponent, class UClass** onlyGrabOfDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_GrabAllItemsFromInventory");

	UBP_RemoteCallObject_C_Server_GrabAllItemsFromInventory_Params params;
	params.SourceComponent = SourceComponent;
	params.destinationComponent = destinationComponent;
	params.onlyGrabOfDesc = onlyGrabOfDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RepairDropPod
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGDropPod**             DropPod                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_RepairDropPod(class AFGDropPod** DropPod, class AFGCharacterPlayer** byCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RepairDropPod");

	UBP_RemoteCallObject_C_Server_RepairDropPod_Params params;
	params.DropPod = DropPod;
	params.byCharacter = byCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateSortRule
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSplitterSmart** SplitterSmart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSplitterSortRule*      Rule                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemoteCallObject_C::Server_UpdateSortRule(class AFGBuildableSplitterSmart** SplitterSmart, int* Index, struct FSplitterSortRule* Rule)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateSortRule");

	UBP_RemoteCallObject_C_Server_UpdateSortRule_Params params;
	params.SplitterSmart = SplitterSmart;
	params.Index = Index;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnDockingStation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableDockingStation** DockingStation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isInLoadMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetLoadModeOnDockingStation(class AFGBuildableDockingStation** DockingStation, bool* isInLoadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnDockingStation");

	UBP_RemoteCallObject_C_Server_SetLoadModeOnDockingStation_Params params;
	params.DockingStation = DockingStation;
	params.isInLoadMode = isInLoadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddSortRule
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSplitterSmart** SplitterSmart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSplitterSortRule*      Rule                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemoteCallObject_C::Server_AddSortRule(class AFGBuildableSplitterSmart** SplitterSmart, struct FSplitterSortRule* Rule)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddSortRule");

	UBP_RemoteCallObject_C_Server_AddSortRule_Params params;
	params.SplitterSmart = SplitterSmart;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetIsProductionPausedOnFactory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableFactory**    FACTORY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsProductionPaused             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetIsProductionPausedOnFactory(class AFGBuildableFactory** FACTORY, bool* IsProductionPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetIsProductionPausedOnFactory");

	UBP_RemoteCallObject_C_Server_SetIsProductionPausedOnFactory_Params params;
	params.FACTORY = FACTORY;
	params.IsProductionPaused = IsProductionPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetActiveSchematic
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 newActiveSchematic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerSetActiveSchematic(class UClass** newActiveSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetActiveSchematic");

	UBP_RemoteCallObject_C_ServerSetActiveSchematic_Params params;
	params.newActiveSchematic = newActiveSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_RemovePawnHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_RemoteCallObject_C::Client_RemovePawnHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_RemovePawnHUD");

	UBP_RemoteCallObject_C_Client_RemovePawnHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_AddPawnHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 HUDClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Client_AddPawnHUD(class UClass** HUDClass, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_AddPawnHUD");

	UBP_RemoteCallObject_C_Client_AddPawnHUD_Params params;
	params.HUDClass = HUDClass;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SpaceElevatorUpgradePressed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSpaceElevator** SpaceElevator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SpaceElevatorUpgradePressed(class AFGBuildableSpaceElevator** SpaceElevator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SpaceElevatorUpgradePressed");

	UBP_RemoteCallObject_C_Server_SpaceElevatorUpgradePressed_Params params;
	params.SpaceElevator = SpaceElevator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchTowTruck
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSpaceElevator** SpaceElevator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_LaunchTowTruck(class AFGBuildableSpaceElevator** SpaceElevator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchTowTruck");

	UBP_RemoteCallObject_C_Server_LaunchTowTruck_Params params;
	params.SpaceElevator = SpaceElevator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateTutorial
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIntroTutorialSteps*           newTutorialID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGTutorialIntroManager** introManager                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_UpdateTutorial(EIntroTutorialSteps* newTutorialID, class AFGTutorialIntroManager** introManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateTutorial");

	UBP_RemoteCallObject_C_Server_UpdateTutorial_Params params;
	params.newTutorialID = newTutorialID;
	params.introManager = introManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_PlayTradingPostSequence
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableTradingPost** Tradingpost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Client_PlayTradingPostSequence(class AFGBuildableTradingPost** Tradingpost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_PlayTradingPostSequence");

	UBP_RemoteCallObject_C_Client_PlayTradingPostSequence_Params params;
	params.Tradingpost = Tradingpost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetUsingMAM
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGPlayerController**    PlayerWorking                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGResearchMachine**     ResearchMachine                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerSetUsingMAM(class AFGPlayerController** PlayerWorking, class UFGResearchMachine** ResearchMachine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetUsingMAM");

	UBP_RemoteCallObject_C_ServerSetUsingMAM_Params params;
	params.PlayerWorking = PlayerWorking;
	params.ResearchMachine = ResearchMachine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerInitiateResearch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGResearchManager**     ResearchManager                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInventoryComponent**  playerInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InitiatingResearchTree         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerInitiateResearch(class AFGResearchManager** ResearchManager, class UFGInventoryComponent** playerInventory, class UClass** schematic, class UClass** InitiatingResearchTree)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerInitiateResearch");

	UBP_RemoteCallObject_C_ServerInitiateResearch_Params params;
	params.ResearchManager = ResearchManager;
	params.playerInventory = playerInventory;
	params.schematic = schematic;
	params.InitiatingResearchTree = InitiatingResearchTree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerClaimResearchResults
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGResearchManager**     ResearchManager                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGCharacterPlayer**     instigatorPlayer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           selectedRewardIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerClaimResearchResults(class AFGResearchManager** ResearchManager, class AFGCharacterPlayer** instigatorPlayer, class UClass** schematic, int* selectedRewardIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerClaimResearchResults");

	UBP_RemoteCallObject_C_ServerClaimResearchResults_Params params;
	params.ResearchManager = ResearchManager;
	params.instigatorPlayer = instigatorPlayer;
	params.schematic = schematic;
	params.selectedRewardIndex = selectedRewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWaitTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTargetPoint**         inTargetPoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         newWaitTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerSetWaitTime(class AFGTargetPoint** inTargetPoint, float* newWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWaitTime");

	UBP_RemoteCallObject_C_ServerSetWaitTime_Params params;
	params.inTargetPoint = inTargetPoint;
	params.newWaitTime = newWaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetStandaloneSignData
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFGSignInterface>* SignInterface                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSignData*              SignData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Update                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetStandaloneSignData(TScriptInterface<class UFGSignInterface>* SignInterface, struct FSignData* SignData, bool* Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetStandaloneSignData");

	UBP_RemoteCallObject_C_Server_SetStandaloneSignData_Params params;
	params.SignInterface = SignInterface;
	params.SignData = SignData;
	params.Update = Update;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSignWallData
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableSignWall**   SignWall                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSignWallData*          SignData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Update                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetSignWallData(class AFGBuildableSignWall** SignWall, struct FSignWallData* SignData, bool* Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSignWallData");

	UBP_RemoteCallObject_C_Server_SetSignWallData_Params params;
	params.SignWall = SignWall;
	params.SignData = SignData;
	params.Update = Update;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SortInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SortInventory(class UFGInventoryComponent** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SortInventory");

	UBP_RemoteCallObject_C_Server_SortInventory_Params params;
	params.InventoryComponent = InventoryComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItemIntoStack
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           sourceIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               spawnRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_DropItemIntoStack(class UFGInventoryComponent** InventoryComponent, int* sourceIdx, struct FVector* SpawnLocation, struct FRotator* spawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItemIntoStack");

	UBP_RemoteCallObject_C_Server_DropItemIntoStack_Params params;
	params.InventoryComponent = InventoryComponent;
	params.sourceIdx = sourceIdx;
	params.SpawnLocation = SpawnLocation;
	params.spawnRotation = spawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnTrainCargoPlatform
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableTrainPlatformCargo** CargoPlatform                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isInLoadMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetLoadModeOnTrainCargoPlatform(class AFGBuildableTrainPlatformCargo** CargoPlatform, bool* isInLoadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnTrainCargoPlatform");

	UBP_RemoteCallObject_C_Server_SetLoadModeOnTrainCargoPlatform_Params params;
	params.CargoPlatform = CargoPlatform;
	params.isInLoadMode = isInLoadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableStops
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGRailroadTimeTable**   TimeTable                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTimeTableStop>* stops                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_RemoteCallObject_C::Server_SetTimeTableStops(class AFGRailroadTimeTable** TimeTable, TArray<struct FTimeTableStop>* stops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableStops");

	UBP_RemoteCallObject_C_Server_SetTimeTableStops_Params params;
	params.TimeTable = TimeTable;
	params.stops = stops;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableCurrentStop
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGRailroadTimeTable**   TimeTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetTimeTableCurrentStop(class AFGRailroadTimeTable** TimeTable, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableCurrentStop");

	UBP_RemoteCallObject_C_Server_SetTimeTableCurrentStop_Params params;
	params.TimeTable = TimeTable;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorCompassViewDistance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetActorCompassViewDistance(class AActor** Actor, ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorCompassViewDistance");

	UBP_RemoteCallObject_C_Server_SetActorCompassViewDistance_Params params;
	params.Actor = Actor;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Internal_Server_SetActorRepresentationCompassViewDistance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Internal_Server_SetActorRepresentationCompassViewDistance(class UFGActorRepresentation** actorRepresentation, ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Internal_Server_SetActorRepresentationCompassViewDistance");

	UBP_RemoteCallObject_C_Internal_Server_SetActorRepresentationCompassViewDistance_Params params;
	params.actorRepresentation = actorRepresentation;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.SetActorRepresentationCompassViewDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::SetActorRepresentationCompassViewDistance(class UFGActorRepresentation** actorRepresentation, ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.SetActorRepresentationCompassViewDistance");

	UBP_RemoteCallObject_C_SetActorRepresentationCompassViewDistance_Params params;
	params.actorRepresentation = actorRepresentation;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainName
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrain**               Train                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemoteCallObject_C::Server_SetTrainName(class AFGTrain** Train, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainName");

	UBP_RemoteCallObject_C_Server_SetTrainName_Params params;
	params.Train = Train;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainSelfDrivingEnabled
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrain**               Train                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSelfDriving                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetTrainSelfDrivingEnabled(class AFGTrain** Train, bool* IsSelfDriving)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainSelfDrivingEnabled");

	UBP_RemoteCallObject_C_Server_SetTrainSelfDrivingEnabled_Params params;
	params.Train = Train;
	params.IsSelfDriving = IsSelfDriving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockTrain
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrain**               Train                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_DockTrain(class AFGTrain** Train)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockTrain");

	UBP_RemoteCallObject_C_Server_DockTrain_Params params;
	params.Train = Train;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationText
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemoteCallObject_C::Server_SetActorRepresentationText(class AActor** Actor, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationText");

	UBP_RemoteCallObject_C_Server_SetActorRepresentationText_Params params;
	params.Actor = Actor;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationColor
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_SetActorRepresentationColor(class AActor** Actor, struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationColor");

	UBP_RemoteCallObject_C_Server_SetActorRepresentationColor_Params params;
	params.Actor = Actor;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PurchaseResourceSinkSchematics
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableResourceSinkShop** ResourceSinkShop               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInventoryComponent**  playerInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UClass*>*         Schematics                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_RemoteCallObject_C::Server_PurchaseResourceSinkSchematics(class AFGBuildableResourceSinkShop** ResourceSinkShop, class UFGInventoryComponent** playerInventory, TArray<class UClass*>* Schematics)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PurchaseResourceSinkSchematics");

	UBP_RemoteCallObject_C_Server_PurchaseResourceSinkSchematics_Params params;
	params.ResourceSinkShop = ResourceSinkShop;
	params.playerInventory = playerInventory;
	params.Schematics = Schematics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ClaimCoupons
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableResourceSink** RESOURCESINK                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           numCoupons                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_ClaimCoupons(class AFGBuildableResourceSink** RESOURCESINK, int* numCoupons)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ClaimCoupons");

	UBP_RemoteCallObject_C_Server_ClaimCoupons_Params params;
	params.RESOURCESINK = RESOURCESINK;
	params.numCoupons = numCoupons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ReturnUnclaimedCoupons
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableResourceSink** RESOURCESINK                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_ReturnUnclaimedCoupons(class AFGBuildableResourceSink** RESOURCESINK)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ReturnUnclaimedCoupons");

	UBP_RemoteCallObject_C_Server_ReturnUnclaimedCoupons_Params params;
	params.RESOURCESINK = RESOURCESINK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantleGolfCart
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGWheeledVehicle**      inGolfCart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ServerDismantleGolfCart(class AFGWheeledVehicle** inGolfCart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantleGolfCart");

	UBP_RemoteCallObject_C_ServerDismantleGolfCart_Params params;
	params.inGolfCart = inGolfCart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushPipeNetwork
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 integrantActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_FlushPipeNetwork(class AActor** integrantActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushPipeNetwork");

	UBP_RemoteCallObject_C_Server_FlushPipeNetwork_Params params;
	params.integrantActor = integrantActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushIntegrant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 integrantActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::Server_FlushIntegrant(class AActor** integrantActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushIntegrant");

	UBP_RemoteCallObject_C_Server_FlushIntegrant_Params params;
	params.integrantActor = integrantActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteCallObject.BP_RemoteCallObject_C.ExecuteUbergraph_BP_RemoteCallObject
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RemoteCallObject_C::ExecuteUbergraph_BP_RemoteCallObject(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ExecuteUbergraph_BP_RemoteCallObject");

	UBP_RemoteCallObject_C_ExecuteUbergraph_BP_RemoteCallObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
